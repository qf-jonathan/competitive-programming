#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, m, dp[105][105];
    string sn, sm;
    cin >> t;
    while (t--) {
        cin >> n >> m >> sn >> sm;
        memset(dp, 0, sizeof dp);
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (sn[i - 1] == sm[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        cout << dp[n][m] << endl;
    }
    return 0;
}