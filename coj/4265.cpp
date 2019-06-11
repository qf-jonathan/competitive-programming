#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &a, &b);
        printf("%d\n", int((log(2) * a + log(5) * b) / log(10) + 1e-10) + 1);
    }
    return 0;
}