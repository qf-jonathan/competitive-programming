#include <bits/stdc++.h>

using namespace std;

int t, n, m;
int heur[25][25];
bool used[25][25];

int di[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dj[] = {-1, 1, -2, 2, -2, 2, -1, 2};

void fill() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int cnt = 0;
            for (int d = 0; d < 8; d++) {
                int ni = i + di[d], nj = j + dj[d];
                if (ni < 0 || ni >= n)
                    continue;
                if (nj < 0 || nj >= m)
                    continue;
                cnt++;
            }
            heur[i][j] = cnt;
        }
    }
}

vector<pair<int, int>> cPath, ansPath;

bool getPath(int pi, int pj) {
    if (used[pi][pj])
        return false;
    used[pi][pj] = true;
    cPath.emplace_back(pi, pj);
    if (cPath.size() == n * m) {
        ansPath = cPath;
        return true;
    }
    vector<pair<pair<int, int>, pair<int, int>>> p;
    for (int ni = 0; ni < n; ni++) {
        for (int nj = 0; nj < m; nj++) {
            if (pi == ni || pj == nj)
                continue;
            if (pi - pj == ni - nj || pi + pj == ni + nj)
                continue;
            p.push_back({{ni + nj, heur[ni][nj]}, {ni, nj}});
        }
    }
    sort(p.begin(), p.end());
    for (const auto &e : p) {
        if (getPath(e.second.first, e.second.second))
            return true;
    }
    used[pi][pj] = false;
    cPath.pop_back();
    return false;
}

int main() {
    cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        cin >> n >> m;
        cout << "Case #" << tc << ": ";
        fill();
        cPath.clear();
        ansPath.clear();
        memset(used, false, sizeof(used));
        if (getPath(0, 0)) {
            cout << "POSSIBLE" << endl;
            for (const auto &e : ansPath) {
                cout << e.first + 1 << ' ' << e.second + 1 << endl;
            }
        } else {
            cout << "IMPOSSIBLE" << endl;
        }
    }
    return 0;
}