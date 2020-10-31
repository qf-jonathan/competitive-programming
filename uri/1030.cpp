// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1030

#include <bits/stdc++.h>

using namespace std;

inline int josephus(int n, int k) {
    if (n == 1) return 1;
    return ((josephus(n - 1, k) + k - 1) % n) + 1;
}

int main() {
    int t, n, k, cc = 1;
    for (scanf("%d", &t); t--;) {
        scanf("%d%d", &n, &k);
        printf("Case %d: %d\n", cc++, josephus(n, k));
    }
    return 0;
}
