// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2904

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a;
    long long sm = 0;
    set<long long> st;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        sm += a;
        st.insert(sm);
    }
    if (sm & 1) {
        cout << "N" << endl;
    } else {
        long long mid = sm / 2;
        int cnt = 0;
        for (const long long &e : st) {
            long long tr = (e + mid);
            if (tr > sm)
                tr = tr - sm;
            cnt += st.count(tr);
            if (cnt > 2) {
                break;
            }
        }
        cout << ((cnt > 2) ? "Y" : "N") << endl;
    }
    return 0;
}
