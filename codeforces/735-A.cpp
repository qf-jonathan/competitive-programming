// Problem link: https://codeforces.com/problemset/problem/735/A

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    string cad;

    cin >> n >> k >> cad;

    int ini = -1, fin;

    for (int i = 0; i < n; i++) {
        if (cad[i] == 'G' || cad[i] == 'T') {
            if (ini == -1)
                ini = i;
            else
                fin = i;
        }
    }

    if (fin < ini)
        swap(ini, fin);

    bool res = false;

    for (ini += k; ini < n; ini += k) {
        if (cad[ini] == 'G' || cad[ini] == 'T') {
            res = true;
            break;
        }
        if (cad[ini] == '#') {
            res = false;
            break;
        }
    }

    if (res)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
