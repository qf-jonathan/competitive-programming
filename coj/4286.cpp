// Problem link: https://coj.uci.cu/24h/problem.xhtml?pid=4286
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, mn = ~(1 << 31), mx = 1 << 31;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &a);
        mn = min(mn, a);
        mx = max(mx, a);
        printf("%d\n", mn + mx);
    }
    return 0;
}
