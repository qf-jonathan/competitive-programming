// Problem link: https://coj.uci.cu/24h/problem.xhtml?pid=4316
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long long m, ms[100005];
    while (scanf("%d%lld", &n, &m) != EOF) {
        int l = 0, r = 0, al = -1, ar = -1;
        long long sm = 0;
        for (; r < n; r++) {
            scanf("%lld", ms + r);
            sm += ms[r];
            while (sm > m)
                sm -= ms[l++];
            if (sm == m && al == -1) {
                al = l + 1;
                ar = r + 1;
            }
        }
        printf("%d %d\n", al, ar);
    }
    return 0;
}
