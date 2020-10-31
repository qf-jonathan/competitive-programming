// Problem link: https://open.kattis.com/problems/diagonalcut
#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    long long a, b;
    cin >> a >> b;
    long long g = gcd(a, b);
    a /= g;
    b /= g;
    if (a % 2 == 1 && b % 2 == 1) cout << g << endl;
    else cout << 0 << endl;
    return 0;
}
