// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2699

#include <cstring>
#include <iostream>

using namespace std;

char s[1005], as[1005] = {};
int n, t, dp[1005][1005];

bool solve(int i, int r) {
    if (i == t)
        return r == 0;
    if (dp[i][r] != -1)
        return dp[i][r];
    if (s[i] != '?') {
        as[i] = s[i];
        return dp[i][r] = solve(i + 1, (r * 10 + (s[i] - '0')) % n);
    }
    for (int d = i > 0 ? 0 : 1; d < 10; d++) {
        as[i] = char(d + '0');
        if (solve(i + 1, (r * 10 + d) % n))
            return true;
    }
    return dp[i][r] = false;
}

int main() {
    cin >> s >> n;
    memset(dp, -1, sizeof dp);
    t = strlen(s);
    bool ans = solve(0, 0);
    if (ans)
        cout << as << endl;
    else
        cout << "*" << endl;
    return 0;
}
