// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1069
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    char ln[1005];
    for (scanf("%d\n", &n); n--;) {
        gets(ln);
        int st = 0, cnt = 0;
        for (int i = 0; ln[i]; i++) {
            if (ln[i] == '<') st++;
            if (ln[i] == '>' && st) cnt++, st--;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
