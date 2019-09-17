#include <bits/stdc++.h>

using namespace std;

#define MAX 100005

int DS[MAX], P[MAX], C[MAX], L[MAX];
struct {
    int p, me;
} DP[18][MAX];

void initDS() {
    for (int i = 0; i < MAX; i++)
        DS[i] = i;
}

int fndDS(int e) {
    if (e == DS[e]) return e;
    return DS[e] = fndDS(DS[e]);
}

void initDP(int n) {
    for (int i = 0; (1 << i) < n; i++)
        for (int j = 0; j < n; j++)
            if (i == 0) {
                DP[i][j].p = P[j];
                DP[i][j].me = C[j];
            } else DP[i][j].p = -1;
    for (int i = 1; (1 << i) < n; i++)
        for (int j = 0; j < n; j++)
            if (DP[i - 1][j].p != -1) {
                DP[i][j].me = max(DP[i - 1][j].me, DP[i - 1][DP[i - 1][j].p].me);
                DP[i][j].p = DP[i - 1][DP[i - 1][j].p].p;
            }
}

inline int lcaEdge(int a, int b) {
    if (L[a] < L[b]) swap(a, b);
    int lg = log2(L[a]), mx = 0;
    for (int i = lg; i >= 0; i--)
        if (L[a] - (1 << i) >= L[b]) {
            mx = max(mx, DP[i][a].me);
            a = DP[i][a].p;
        }
    if (a == b) return mx;
    for (int i = lg; i >= 0; i--)
        if (DP[i][a].p != -1 && DP[i][a].p != DP[i][b].p) {
            mx = max(mx, DP[i][a].me);
            mx = max(mx, DP[i][b].me);
            a = DP[i][a].p;
            b = DP[i][b].p;
        }
    return max(mx, max(C[a], C[b]));
}

vector<tuple<int, int, int>> el;
vector<pair<int, int>> g[MAX];
map<pair<int, int>, int> in;

void bfs(int from) {
    int v, p, d, c;
    queue<tuple<int, int, int, int>> q;
    q.push(make_tuple(from, -1, 0, 0));
    while (!q.empty()) {
        tie(v, p, d, c) = q.front();
        q.pop();
        P[v] = p;
        L[v] = d;
        C[v] = c;
        for (auto &to: g[v])
            if (to.first != p)
                q.push(make_tuple(to.first, v, d + 1, to.second));
    }
}

int main() {
    int n, r, a, b, c, q, k, cost = 0;
    scanf("%d%d", &n, &r);
    for (int i = 0; i < r; i++) {
        scanf("%d%d%d", &a, &b, &c);
        el.emplace_back(c, a, b);
    }
    sort(el.begin(), el.end());
    initDS();
    for (auto &e: el) {
        tie(c, a, b) = e;
        if (fndDS(a) != fndDS(b)) {
            g[a].emplace_back(b, c);
            g[b].emplace_back(a, c);
            DS[fndDS(a)] = fndDS(b);
            cost += c;
        } else in[{a, b}] = c;
    }
    srand(time(0));
    bfs((rand() % n) + 1);
    initDP(n + 1);
    scanf("%d", &q);
    while (q--) {
        scanf("%d%d", &a, &b);
        if (in.count({a, b}) == 0) {
            printf("%d\n", cost);
        } else {
            int mx = lcaEdge(a, b);
            int ans = cost + in[{a, b}] - mx;
            printf("%d\n", ans);
        }
    }
    return 0;
}