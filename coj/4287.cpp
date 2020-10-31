// Problem link: https://coj.uci.cu/24h/problem.xhtml?pid=4287
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, t, a, b;
    scanf("%d%d%d", &n, &m, &t);
    queue<pair<int, int>> q;
    set<pair<int, int>> ine;
    map<pair<int, int>, int> dis;
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &a, &b);
        q.push({a, b});
        dis[{a, b}] = 0;
    }
    for (int i = 0; i < m; i++) {
        scanf("%d%d", &a, &b);
        ine.insert({a, b});
    }
    const int di[] = {-1, 1, 0, 0};
    const int dj[] = {0, 0, -1, 1};
    while (!q.empty()) {
        auto from = q.front();
        q.pop();
        if (dis[from] < t) {
            for (int i = 0; i < 4; i++) {
                pair<int, int> to(from.first + di[i], from.second + dj[i]);
                if (dis.count(to) == 0 && ine.count(to) == 0) {
                    q.push(to);
                    dis[to] = dis[from] + 1;
                }
            }
        }
    }
    printf("%d\n", dis.size());
    return 0;
}
