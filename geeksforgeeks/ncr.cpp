#include <bits/stdc++.h>

#define MOD 1000000007

using namespace std;

int dp[1005][1005];

int main() {
    for (int i = 0; i < 1005; i++) {
        for (int j = 0; j <= i; j++) {
            if (i == j || j == 0)
                dp[i][j] = 1;
            else
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % MOD;
        }
    }
    int t, n, r;
    cin >> t;
    while (t--) {
        cin >> n >> r;
        cout << dp[n][r] << endl;
    }
    return 0;
}