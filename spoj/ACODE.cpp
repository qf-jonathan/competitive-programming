// Problem link: https://www.spoj.com/problems/ACODE/

#include <bits/stdc++.h>

using namespace std;

int main() {
    string cad;
    while (cin >> cad, cad[0] != '0') {
        long long dp[5005] = {1};
        for (int i = 1; i <= (int) cad.size(); i++) {
            if (cad[i - 1] != '0') {
                dp[i] += dp[i - 1];
            }
            if (i > 1) {
                int v = (cad[i - 2] - '0') * 10 + cad[i - 1] - '0';
                if (v >= 10 && v <= 26) {
                    dp[i] += dp[i - 2];
                }
            }
        }
        cout << dp[cad.size()] << endl;
    }
    return 0;
}
