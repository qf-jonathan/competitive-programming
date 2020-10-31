// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1401
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, sz, i, j;
    char cad[15];
    for (scanf("%d", &t); t--;) {
        scanf("%s", cad);
        sz = strlen(cad);
        sort(cad, cad + sz);
        while (true) {
            puts(cad);
            i = sz - 2, j = sz - 1;
            while (i >= 0 && cad[i] >= cad[i + 1]) i--;
            if (i < 0) break;
            while (cad[j] <= cad[i]) j--;
            swap(cad[i], cad[j]);
            reverse(cad + i + 1, cad + sz);
        }
        puts("");
    }
    return 0;
}
