#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, m, ms[1005];
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &n, &m);
        for (int i = 0; i < m; i++) {
            scanf("%d", ms + i);
        }
        sort(ms, ms + m);
        bool fst = true;
        for (int i = 1; i <= n; i++) {
            if (!binary_search(ms, ms + m, i)) {
                if (fst) fst = false;
                else printf(" ");
                printf("%d", i);
            }
        }
        printf("\n");
    }
    return 0;
}