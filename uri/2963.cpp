#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, f, v;
    cin >> n >> f;
    bool ans = true;
    while (--n) {
        cin >> v;
        if (v > f)
            ans = false;
    }
    cout << (ans ? 'S' : 'N') << endl;
}