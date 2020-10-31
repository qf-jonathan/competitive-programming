// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2349
#include <bits/stdc++.h>

using namespace std;

int main() {
    int cn[105] = {1}, n, c, s, op, ind = 0;
    scanf("%d%d%d", &n, &c, &s);
    for (int i = 0; i < c; i++) {
        scanf("%d", &op);
        ind = (ind + n + op) % n;
        cn[ind]++;
    }
    printf("%d\n", cn[s - 1]);
    return 0;
}
