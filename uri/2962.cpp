// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2962
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, k;
    cin >> m >> n >> k;
    vector<tuple<int, int, int>> tp;
    for (int i = 0; i < k; i++) {
        int x, y, s;
        cin >> x >> y >> s;
        tp.emplace_back(x, y, s);
    }
    vector<vector<int>> gr(k);
    set<int> l, r;
    bool ans = true;
    for (int i = 0; i < k; i++) {
        int x, y, s;
        tie(x, y, s) = tp[i];
        for (int j = i + 1; j < k; j++) {
            int tx, ty, ts;
            tie(tx, ty, ts) = tp[j];
            if ((x - tx) * (x - tx) + (y - ty) * (y - ty) <= (s + ts) * (s + ts)) {
                gr[i].push_back(j);
                gr[j].push_back(i);
            }
        }
        if (x <= s || n - y <= s) l.insert(i);
        if (y <= s || m - x <= s) r.insert(i);
    }
    if (!l.empty() && !r.empty()) {
        vector<bool> vis(k, false);
        function<void(int)> dfs;
        dfs = [&](int v) {
            vis[v] = true;
            if (r.count(v)) ans = false;
            for (int to: gr[v]) {
                if (!vis[to]) {
                    dfs(to);
                }
            }
        };
        for (int e: l) {
            if (!vis[e]) {
                dfs(e);
            }
        }
    }
    cout << (ans ? 'S' : 'N') << endl;
    return 0;
}
