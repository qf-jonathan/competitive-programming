#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, dp[25][25];
    cin >> t;
    while (t--) {
        cin >> n;
        int ans = 0;
        memset(dp, 0, sizeof dp);
        for (int r = 1; r <= n; r++) {
            for (int c = 1; c <= n; c++) {
                cin >> dp[r][c];
                if (r > 1) {
                    int mx = dp[r - 1][c];
                    mx = max(mx, dp[r - 1][c - 1]);
                    mx = max(mx, dp[r - 1][c + 1]);
                    dp[r][c] += mx;
                }
                if (r == n)
                    ans = max(ans, dp[r][c]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}