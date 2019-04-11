#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    string num;
    cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        cin >> num;
        string ans;
        for (int i = 0; i < (int) num.size(); i++) {
            if (num[i] == '4') {
                ans.push_back('3');
                num[i] = '1';
            } else if (ans.size() > 0) {
                ans.push_back('0');
            }
        }
        cout << "Case #" << tc << ": " << num << " " << ans << endl;
    }
    return 0;
}