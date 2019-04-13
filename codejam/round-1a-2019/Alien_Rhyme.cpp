#include <bits/stdc++.h>

using namespace std;

vector<map<char, int>> trie;

void add(const string &str) {
    for (int i = str.size(), index = 0; i >= 0; i--) {
        char c = i == 0 ? '$' : str[i - 1];
        if (trie[index].count(c) == 0) {
            trie[index][c] = trie.size();
            trie.emplace_back(map<char, int>());
        }
        index = trie[index][c];
    }
}

int cnt(int index = 0) {
    int rcnt = 0;
    for (const auto &to: trie[index]) {
        if (to.first == '$') rcnt++;
        else rcnt += cnt(to.second);
    }
    if (rcnt > 1 && index != 0) rcnt -= 2;
    return rcnt;
}

int main() {
    int t, n;
    string str;
    cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        cin >> n;
        trie.assign(1, map<char, int>());
        for (int i = 0; i < n; i++) {
            cin >> str;
            add(str);
        }
        cout << "Case #" << tc << ": " << n - cnt() << endl;
    }
    return 0;
}