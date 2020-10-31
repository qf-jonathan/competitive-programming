// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1048
#include <bits/stdc++.h>

using namespace std;
#define EPS 1e-9

int main() {
    double pr[] = {.15, .12, .10, .07, .04}, sa;
    int pi;
    scanf("%lf", &sa);
    if (sa < 400.0 + EPS) pi = 0;
    else if (sa < 800.0 + EPS) pi = 1;
    else if (sa < 1200.0 + EPS) pi = 2;
    else if (sa < 2000.0 + EPS) pi = 3;
    else pi = 4;
    printf("Novo salario: %.2lf\n", sa + sa * pr[pi]);
    printf("Reajuste ganho: %.2lf\n", sa * pr[pi]);
    printf("Em percentual: %.0lf %c\n", pr[pi] * 100, '%');
    return 0;
}
