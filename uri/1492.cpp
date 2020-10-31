// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1492
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ULL;

ULL f[64];

ULL g(ULL n) {
    ULL cnt = 0;
    int lones = 0;
    for (int i = 63; i >= 0; i--) {
        if (n & (1LL << i)) {
            cnt += f[i] + 1;
            cnt += lones * (1LL << i);
            lones++;
        }
    }
    return cnt;
}

int main() {
    f[0] = 0;
    for (int i = 1; i < 64; i++)
        f[i] = (1LL << (i - 1)) + f[i - 1] * 2;
    ULL a, b;
    while (scanf("%lld%lld", &a, &b) != EOF)
        printf("%lld\n", g(b) - g(a - 1));
    return 0;
}
