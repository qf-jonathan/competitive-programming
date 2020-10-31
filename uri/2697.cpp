// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2697
#include <iostream>

using namespace std;

int main() {
    int k, n, a, ns[1005] = {};
    cin >> k >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        ns[a]++;
    }
    for (int i = 1; i <= 3; i++) {
        int u = 0, d = 0, iu = -1, id = -1;
        for (int j = 1; j <= k; j++) {
            if (ns[j] > ns[i]) {
                u++;
                iu = j;
            }
            if (ns[j] < ns[i]) {
                d++;
                id = j;
            }
        }
        if (u == 1 && d == 1 && ns[iu] - 1 == ns[i] && ns[id] + 1 == ns[i]) {
            cout << "-" << iu << " +" << id << endl;
            return 0;
        }
        if (u == 1 && d == 0 && ns[iu] - 1 == ns[i]) {
            cout << "-" << iu << endl;
            return 0;
        }
        if (u == 0 && d == 1 && ns[id] + 1 == ns[i]) {
            cout << "+" << id << endl;
            return 0;
        }
    }
    cout << "*" << endl;
    return 0;
}
