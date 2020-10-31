// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1034
#include <bits/stdc++.h>

using namespace std;

int ns[30], dp[1000005], t, n, m;;

int main() {
    for (scanf("%d", &t); t--;) {
        scanf("%d%d", &n, &m);
        for (int i = 0; i < n; i++) scanf("%d", ns + i);
        fill(dp, dp + m + 1, 1 << 30);
        dp[0] = 0;
        for (int i = 1; i <= m; i++) {
            for (int j = 0; j < n; j++)
                if (ns[j] <= i)
                    dp[i] = min(dp[i], dp[i - ns[j]] + 1);
        }
        printf("%d\n", dp[m]);
    }
    return 0;
}
