// Problem link: https://coj.uci.cu/24h/problem.xhtml?pid=4319
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &a);
        printf("%d\n", a < 3 ? a : 3 * a - 5);
    }
    return 0;
}
