#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, ns[1005];
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> ns[i];
        int dp[n], ans = 0;
        for (int i = 0; i < n; i++) {
            dp[i] = 1;
            for (int j = 0; j < i; j++) {
                if (ns[j] < ns[i] && dp[i] < dp[j] + 1)
                    dp[i] = dp[j] + 1;
            }
            ans = max(ans, dp[i]);
        }
        cout << ans << endl;
    }
    return 0;
}