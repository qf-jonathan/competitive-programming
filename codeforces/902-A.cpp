// Problem link: https://codeforces.com/problemset/problem/902/A

#include <iostream>

using namespace std;

int main() {
    int n, m, ar[105] = {};
    cin >> n >> m;
    while (n--) {
        int a, b;
        cin >> a >> b;
        for (int i = a; i < b; i++) {
            ar[i] = 1;
        }
    }
    for (int i = 0; i < m; i++)
        if (!ar[i]) {
            cout << "NO" << endl;
            return 0;
        }
    cout << "YES" << endl;
    return 0;
}
