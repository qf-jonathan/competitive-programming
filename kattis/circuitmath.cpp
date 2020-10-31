// Problem link: https://open.kattis.com/problems/circuitmath

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    map<char, char> mp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> mp['A' + i];
    }
    stack<char> st;
    char c;
    while (cin >> c) {
        if (c >= 'A' && c <= 'Z') {
            st.push(mp[c]);
        } else if (c == '-') {
            char a = st.top();
            st.pop();
            st.push(a == 'T' ? 'F' : 'T');
        } else {
            char a = st.top();
            st.pop();
            char b = st.top();
            st.pop();
            if (c == '*') st.push(a == b && a == 'T' ? 'T' : 'F');
            else st.push(a == b && a == 'F' ? 'F' : 'T');
        }
    }
    cout << st.top() << endl;
    return 0;
}
