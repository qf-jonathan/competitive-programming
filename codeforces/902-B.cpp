// Problem link: https://codeforces.com/problemset/problem/902/B

#include <iostream>
#include <vector>
 
using namespace std;
 
vector<int> g[10005];
int C[10005], cnt = 0;
 
void dfs(int v, int p, int c) {
    if (C[v] != c) cnt++;
    for (int &to: g[v]) {
        if (to != p)
            dfs(to, v, C[v]);
    }
}
 
int main() {
    int n, a;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        cin >> a;
        g[i].push_back(a);
        g[a].push_back(i);
    }
    for (int i = 1; i <= n; i++)
        cin >> C[i];
    dfs(1, -1, -1);
    cout << cnt << endl;
    return 0;
}
