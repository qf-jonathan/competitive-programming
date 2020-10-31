// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1091

#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, n, m, cn, cm;
    while (scanf("%d", &k), k) {
        scanf("%d%d", &cn, &cm);
        for (int i = 0; i < k; i++) {
            scanf("%d%d", &n, &m);
            if (n == cn || m == cm) puts("divisa");
            else if (n < cn && m < cm) puts("SO");
            else if (n < cn && m > cm) puts("NO");
            else if (n > cn && m < cm) puts("SE");
            else if (n > cn && m > cm) puts("NE");
        }
    }
    return 0;
}
