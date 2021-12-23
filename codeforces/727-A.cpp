// Problem link: https://codeforces.com/problemset/problem/727/A

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> solve(int a, int b) {
    vector<int> ans(1, b);
    while (a < b) {
        if (b % 10 == 1)
            b /= 10;
        else if (b % 2 == 0)
            b /= 2;
        else
            return {};
        ans.push_back(b);
    }
    if (a == b) {
        reverse(ans.begin(), ans.end());
        return ans;
    }
    return {};
}

int main() {
    int a, b;
    cin >> a >> b;
    auto ans = solve(a, b);
    if (ans.empty()) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++) {
            if (i)
                cout << ' ';
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}