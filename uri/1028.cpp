// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1028

#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int main() {
    int t, a, b;
    for (scanf("%d", &t); t--;) {
        scanf("%d%d", &a, &b);
        printf("%d\n", gcd(a, b));
    }
    return 0;
}
