// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1006
#include <cstdio>

int main() {
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    printf("MEDIA = %.1lf\n", ((a * 2.0) + (b * 3.0) + (c * 5.0)) / 10);
    return 0;
}
