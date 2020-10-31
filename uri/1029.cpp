// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1029

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    int f[45], c[45];
    f[0] = 0, f[1] = c[0] = c[1] = 1;
    for (int i = 2; i < 40; i++)
        f[i] = f[i - 1] + f[i - 2], c[i] = c[i - 1] + c[i - 2] + 1;
    for (scanf("%d", &t); t--;) {
        scanf("%d", &n);
        printf("fib(%d) = %d calls = %d\n", n, c[n] - 1, f[n]);
    }
    return 0;
}
