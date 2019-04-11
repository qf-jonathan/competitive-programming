#include <bits/stdc++.h>

using namespace std;

bool dp[100005][105];

int main() {
    int t, n, ns[105];
    cin >> t;
    while (t--) {
        cin >> n;
        int sm = 0;
        for (int i = 0; i < n; i++) {
            cin >> ns[i];
            sm += ns[i];
        }
        if (sm & 1) {
            cout << "NO" << endl;
            continue;
        }
        sm /= 2;
        memset(dp, false, sizeof dp);
        dp[0][0] = true;
        bool ans = false;
        for (int i = 1; i <= sm; i++) {
            for (int j = 1; j <= n; j++) {
                dp[i][j] = dp[i][j - 1];
                if (ns[j - 1] <= i)
                    dp[i][j] = dp[i][j] || dp[i - ns[j - 1]][j - 1];
                if (dp[i][j] && i == sm)
                    ans = true;
            }
        }
        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}