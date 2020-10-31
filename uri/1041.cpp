// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1041

#include <bits/stdc++.h>

using namespace std;

int main() {
    double x, y;
    scanf("%lf%lf", &x, &y);
    if (x == 0 && y == 0) puts("Origem");
    else if (x == 0) puts("Eixo Y");
    else if (y == 0) puts("Eixo X");
    else if (x > 0 && y > 0) puts("Q1");
    else if (x < 0 && y > 0) puts("Q2");
    else if (x < 0 && y < 0) puts("Q3");
    else if (x > 0 && y < 0) puts("Q4");
    return 0;
}
