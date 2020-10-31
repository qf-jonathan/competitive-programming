// Problem link: https://coj.uci.cu/24h/problem.xhtml?pid=4297

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, r, k;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &r, &k);
        if (k & 1)
            printf("%lldPI\n", (1LL << (k / 2)) * r * r);
        else
            printf("%lld\n", (1LL << (k / 2 + 1)) * r * r);
    }
    return 0;
}
