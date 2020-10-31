// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1082

#include <bits/stdc++.h>

using namespace std;

int n, v, e, cid = 1, cc;
char a, b;
bool gr[26][26], vis[26];
vector<char> cs;

inline void dfs(int u) {
    vis[u] = true;
    cs.push_back('a' + u);
    for (int i = 0; i < v; i++)
        if (gr[u][i] && !vis[i])
            dfs(i);
}

int main() {
    for (scanf("%d", &n); n--;) {
        scanf("%d%d", &v, &e);
        cc = 0;
        memset(vis, false, sizeof(vis));
        memset(gr, false, sizeof(gr));
        for (int i = 0; i < e; i++) {
            scanf(" %c %c", &a, &b);
            gr[a - 'a'][b - 'a'] = gr[b - 'a'][a - 'a'] = true;
        }
        printf("Case #%d:\n", cid++);
        for (int i = 0; i < v; i++)
            if (!vis[i]) {
                cs.clear(), dfs(i), cc++;
                sort(cs.begin(), cs.end());
                for (int j = 0; j < (int) cs.size(); j++) printf("%c,", cs[j]);
                puts("");
            }
        printf("%d connected components\n\n", cc);
    }
    return 0;
}
