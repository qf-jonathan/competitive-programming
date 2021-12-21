// Problem link: https://codeforces.com/problemset/problem/1605/C

#include <iostream>

using namespace std;

int solve_case(int n, string s) {
    if (s.find("aa") != string::npos)
        return 2;
    if (s.find("aba") != string::npos || s.find("aca") != string::npos)
        return 3;
    if (s.find("abca") != string::npos || s.find("acba") != string::npos)
        return 4;
    if (s.find("abbacca") != string::npos || s.find("accabba") != string::npos)
        return 7;
    return -1;
}

int main() {
    int t, n;
    string s;
    cin >> t;
    cout << string::npos << endl;
    for (int c = 0; c < t; c++) {
        cin >> n >> s;
        cout << solve_case(n, s) << endl;
    }
    return 0;
}