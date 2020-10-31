// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1009

#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int main() {
    double s, sl;
    scanf("%*[^\n]%lf%lf", &s, &sl);
    printf("TOTAL = R$ %.2lf\n", s + sl * .15);
    return 0;
}
