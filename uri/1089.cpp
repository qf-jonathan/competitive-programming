#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, ns[10005], cnt;
    while (scanf("%d", &n), n) {
        for (int i = 0; i < n; i++) scanf("%d", ns + i);
        ns[n] = ns[0], ns[n + 1] = ns[1];
        cnt = 0;
        for (int i = 1; i <= n; i++)
            if ((ns[i] < ns[i - 1] && ns[i] < ns[i + 1]) || (ns[i] > ns[i - 1] && ns[i] > ns[i + 1]))
                cnt++;
        printf("%d\n", cnt);
    }
    return 0;
}
