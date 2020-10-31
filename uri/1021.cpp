// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1021

#include <bits/stdc++.h>

using namespace std;

int main() {
    int e, d = 0, nt[] = {100, 50, 20, 10, 5, 2},
           mn[] = {100, 50, 25, 10, 5, 1};
    scanf("%d.%d", &e, &d);
    puts("NOTAS:");
    for (int i = 0; i < 6; i++) {
        int cnt = 0;
        while (e >= nt[i])
            e -= nt[i], cnt++;
        printf("%d nota(s) de R$ %d.00\n", cnt, nt[i]);
    }
    puts("MOEDAS:");
    d = e * 100 + d;
    for (int i = 0; i < 6; i++) {
        int cnt = 0;
        while (d >= mn[i])
            d -= mn[i], cnt++;
        printf("%d moeda(s) de R$ %.2lf\n", cnt, double(mn[i]) / 100);
    }
    return 0;
}
