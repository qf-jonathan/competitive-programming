// Problem link: https://www.spoj.com/problems/COINS/

#include <bits/stdc++.h>

using namespace std;

map<unsigned, unsigned> mem;

unsigned mx(unsigned n) {
    if (n < 2) return n;
    if (mem.count(n)) return mem[n];
    return mem[n] = max(n, mx(n / 2) + mx(n / 3) + mx(n / 4));
}

int main() {
    int n;
    while (cin >> n) {
        cout << mx(n) << endl;
    }
    return 0;
}
