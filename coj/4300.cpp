#include <bits/stdc++.h>

using namespace std;

long long ans[] = {1, 3, 15, 75, 391, 2065, 11091, 60215, 330003, 1820869, 10103153, 56313047, 315071801, 1768489771,
                   9953853677L, 56158682949L, 317505199769L, 1798402412539L};

int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        printf("%lld\n", ans[n]);
    }
    return 0;
}