#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, sz;
    string path;
    cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        cin >> sz >> path;
        string ans;
        for (const char &c : path) {
            ans.push_back(c == 'S' ? 'E' : 'S');
        }
        cout << "Case #" << tc << ": " << ans << endl;
    }
    return 0;
}