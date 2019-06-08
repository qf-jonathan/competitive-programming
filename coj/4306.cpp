#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, a, b, x, y, z;
    scanf("%lld\n", &n);
    while (n--) {
        scanf("%lld%lld%lld%lld%lld", &a, &b, &x, &y, &z);
        long long sp = x * x + y * y + z * z;
        sp += sp;
        if (a * b >= sp) printf("POSSIBLE\n");
        else printf("IMPOSSIBLE\n");
    }
    return 0;
}