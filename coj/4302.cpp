// Problem link: https://coj.uci.cu/24h/problem.xhtml?pid=4302
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b;
    scanf("%d\n", &n);
    while (n--) {
        scanf("%d%d", &a, &b);
        printf("%d\n", a * b / __gcd(a, b));
    }
    return 0;
}
