#include <bits/stdc++.h>

#define IT(e) typeof((e).begin())
#define FE(i, e) for(IT(e) i=(e).begin(); i!=(e).end(); i++)
#define F(i, b, n) for(int i=(b), _n=(n); i<_n; i++)
using namespace std;

int ns[105], dp[105][5005];

int main() {
    int n, k;
    while (scanf("%d%d", &n, &k) != EOF) {
        memset(ns, 0, sizeof ns);
        F(i, 0, k) {
            int a, b;
            scanf("%d%d", &a, &b);
            ns[a]++;
            ns[b]++;
        }
        F(i, 1, n + 1)F(j, 0, k + 1) {
                dp[i][j] = 0;
                if (ns[i] > j)
                    dp[i][j] = dp[i - 1][j];
                else
                    dp[i][j] = max(dp[i - 1][j], ns[i] + dp[i - 1][j - ns[i]]);
            }

        if (dp[n][k] == k) printf("S\n");
        else printf("N\n");
    }
    return 0;
}