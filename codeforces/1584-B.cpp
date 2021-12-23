// Problem link: https://codeforces.com/problemset/problem/1584/B

#include <iostream>

using namespace std;

int solve_case(int n, int m) {
    if (n % 3 == 0 || m % 3 == 0)
        return (n * m) / 3;
    if (n % 3 == m % 3)
        return (n * m - 4) / 3 + 2;
    return (n * m - 2) / 3 + 1;
}

int main() {
    int t, n, m;
    cin >> t;
    for (int c = 0; c < t; c++) {
        cin >> n >> m;
        cout << solve_case(n, m) << endl;
    }
    return 0;
}