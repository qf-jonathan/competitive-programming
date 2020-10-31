// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2906

#include <bits/stdc++.h>

using namespace std;

string unique(const string &email) {
    int pa = email.find('@');
    string localpart = email.substr(0, pa);
    string provider = email.substr(pa);
    int pp = localpart.find('+');
    if (pp != string::npos) {
        localpart = localpart.substr(0, pp);
    }
    string clear;
    for (const char &c : localpart) {
        if (isalpha(c)) {
            clear.push_back(c);
        }
    }
    return clear + provider;
}

int main() {
    int n;
    string email;
    set<string> st;
    cin >> n;
    while (n--) {
        cin >> email;
        st.insert(unique(email));
    }
    cout << st.size() << endl;
    return 0;
}
