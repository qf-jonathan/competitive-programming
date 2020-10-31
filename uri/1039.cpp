// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1039

#include <bits/stdc++.h>

using namespace std;
#define EPS 1e-9

int main() {
    double r1, x1, y1, r2, x2, y2;
    while (scanf("%lf%lf%lf%lf%lf%lf", &r1, &x1, &y1, &r2, &x2, &y2) != EOF) {
        double ds = hypot(x1 - x2, y1 - y2);
        if (ds < r1 + EPS && ds + r2 < r1 + EPS)
            puts("RICO");
        else
            puts("MORTO");
    }
    return 0;
}
