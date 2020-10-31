// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1022
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, a, b, c, d;
    char op;
    for (scanf("%d", &t); t--;) {
        scanf("%d %*c %d %c %d %*c %d", &a, &b, &op, &c, &d);
        int nu, de;
        if (op == '+') nu = a * d + c * b, de = b * d;
        else if (op == '*') nu = a * c, de = b * d;
        else if (op == '-') nu = a * d - c * b, de = b * d;
        else if (op == '/') nu = a * d, de = b * c;
        b = __gcd(nu, de);
        if (b < 0) b *= -1;
        if (de < 0) nu *= -1, de *= -1;
        printf("%d/%d = %d/%d\n", nu, de, nu / b, de / b);
    }
    return 0;
}
