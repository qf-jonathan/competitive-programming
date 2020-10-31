// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2903

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin.ignore();
    cin >> b;
    cout << 36000 / __gcd(36000, a * 100 + b) << endl;
    return 0;
}
