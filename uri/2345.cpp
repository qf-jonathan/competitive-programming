// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2345

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[4], s = 0;
    for (int i = 0; i < 4; i++) {
        scanf("%d", a + i);
        s += a[i];
    }
    int ans = 1e8;
    for (int i = 1; i < 4; i++) {
        ans = min(ans, abs(s - a[0] * 2 - a[i] * 2));
    }
    printf("%d\n", ans);
    return 0;
}
