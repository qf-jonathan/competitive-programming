// Problem link: https://coj.uci.cu/24h/problem.xhtml?pid=4306

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b, cr[3];
    scanf("%d", &n);
    while (n--) {
        scanf("%d%d%d%d%d", &a, &b, cr, cr + 1, cr + 2);
        sort(cr, cr + 3);
        bool ans = false;
        do {
            int w = cr[0] + cr[1] + cr[2] * 2;
            int h = cr[0] * 2 + cr[1];
            if ((h <= a && w <= b) || (h <= b && w <= a))
                ans = true;
            w = cr[0] + cr[1] * 2 + cr[2];
            h = cr[0] + cr[1] + cr[2];
            if ((h <= a && w <= b) || (h <= b && w <= a))
                ans = true;
            w = cr[1] * 2 + cr[2] * 2;
            h = cr[0] + cr[2] * 2;
            if ((h <= a && w <= b) || (h <= b && w <= a))
                ans = true;
            w = cr[0] + cr[1] * 3 + cr[2];
            h = cr[0] + cr[2];
            if ((h <= a && w <= b) || (h <= b && w <= a))
                ans = true;
        } while (next_permutation(cr, cr + 3));
        if (ans)
            printf("POSSIBLE\n");
        else
            printf("IMPOSSIBLE\n");
    }
    return 0;
}
