// Problem link: https://coj.uci.cu/24h/problem.xhtml?pid=4293
#include <bits/stdc++.h>

using namespace std;

int v[1000005], la[500005], ra[500005];

long long msort(int l, int r) {
    if (l + 1 >= r) return 0;
    int m = (l + r) / 2;
    long long cnt = msort(l, m) + msort(m, r);
    for (int i = l; i < m; i++) la[i - l] = v[i];
    for (int i = m; i < r; i++) ra[i - m] = v[i];
    la[m - l] = ra[r - m] = INT_MAX;
    for (int li = 0, ri = 0, i = l; i < r; i++) {
        if (la[li] <= ra[ri]) v[i] = la[li++];
        else v[i] = ra[ri++], cnt += m - l - li;
    }
    return cnt;
}

int main() {
    int n;
    while (scanf("%d", &n), n != 0) {
        for (int i = 0; i < n; i++)
            scanf("%d", v + i);
        printf("%lld\n", msort(0, n));
    }
    return 0;
}
