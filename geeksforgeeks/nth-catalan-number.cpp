#include <bits/stdc++.h>

using namespace std;

string add(const string &a, const string &b) {
    string ans;
    int carry = 0;
    for (int ia = a.size() - 1, ib = b.size() - 1; ia >= 0 || ib >= 0; ia--, ib--) {
        int d = carry;
        d += ia >= 0 ? a[ia] - '0' : 0;
        d += ib >= 0 ? b[ib] - '0' : 0;
        ans.push_back(d % 10 + '0');
        carry = d / 10;
    }
    if (carry) ans.push_back(carry + '0');
    reverse(ans.begin(), ans.end());
    return ans;
}

string mul(const string &a, const string &b) {
    string ans = "0";
    for (int ia = a.size() - 1; ia >= 0; ia--) {
        int carry = 0;
        string cur = string(a.size() - ia - 1, '0');
        for (int ib = b.size() - 1; ib >= 0; ib--) {
            int d = (a[ia] - '0') * (b[ib] - '0') + carry;
            cur.push_back(d % 10 + '0');
            carry = d / 10;
        }
        if (carry) cur.push_back(carry + '0');
        reverse(cur.begin(), cur.end());
        ans = add(ans, cur);
    }
    return ans;
}

int main() {
    string dp[105] = {"1"};
    for (int i = 1; i < 105; i++) {
        dp[i] = "0";
        for (int j = 0; j < i; j++) {
            dp[i] = add(dp[i], mul(dp[j], dp[i - j - 1]));
        }
    }
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << dp[n] << endl;
    }
    return 0;
}