// Problem link: https://codeforces.com/problemset/problem/1605/B

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void solve_case(int n, string s) {
    int le = 1, ri = n;
    vector<int> ans;
    while (le < ri) {
        while (le < ri && s[le - 1] != '1')
            le++;
        while (ri > le && s[ri - 1] != '0')
            ri--;
        if (le < ri) {
            ans.push_back(le);
            ans.push_back(ri);
            le++;
            ri--;
        }
    }
    if (ans.empty()) {
        cout << 0 << endl;
    } else {
        sort(ans.begin(), ans.end());
        cout << "1\n"
             << ans.size();
        for (int ind : ans) {
            cout << ' ' << ind;
        }
        cout << endl;
    }
}

int main() {
    int t, n;
    string s;
    cin >> t;
    for (int c = 0; c < t; c++) {
        cin >> n >> s;
        solve_case(n, s);
    }
    return 0;
}