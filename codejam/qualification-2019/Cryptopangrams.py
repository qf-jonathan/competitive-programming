def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)


def get_part(partial, rest):
    prime_used = set()
    part = []
    local_rest = rest
    for e in partial:
        part.append(local_rest)
        prime_used.add(local_rest)
        local_rest = e // local_rest
    part.append(local_rest)
    prime_used.add(local_rest)
    return part, prime_used


def solve(ns):
    pos = 1
    while ns[pos - 1] == ns[pos] and pos < len(ns):
        pos += 1
    rest = gcd(ns[pos - 1], ns[pos])
    left, left_prime_used = get_part(ns[pos - 1:0:-1], ns[pos - 1] // rest)
    right, right_prime_used = get_part(ns[pos:], rest)
    sorted_prime_used = list(sorted(left_prime_used | right_prime_used))
    return ''.join([chr(sorted_prime_used.index(p) + ord('A')) for p in left[::-1] + right])


if __name__ == '__main__':
    t = int(input())
    for tc in range(1, t + 1):
        n, l = (int(x) for x in input().split())
        ns = [int(x) for x in input().split()]
        print('Case #%d: %s' % (tc, solve(ns)))
