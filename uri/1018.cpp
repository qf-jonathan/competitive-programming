#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, dt[] = {100, 50, 20, 10, 5, 2, 1};
    scanf("%d", &n);
    printf("%d\n", n);
    for (int i = 0, c; i < 7; i++) {
        for (c = 0; n >= dt[i]; c++) n -= dt[i];
        printf("%d nota(s) de R$ %d,00\n", c, dt[i]);
    }
    return 0;
}
