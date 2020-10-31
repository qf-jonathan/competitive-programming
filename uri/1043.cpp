// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1043

#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, b, c, h;
    scanf("%lf%lf%lf", &a, &b, &c);
    if (a + b > c && a - b < c) printf("Perimetro = %.1lf\n", a + b + c);
    else printf("Area = %.1lf\n", (max(a, b) - min(a, b)) * c / 2.0 + min(a, b) * c);
    return 0;
}
