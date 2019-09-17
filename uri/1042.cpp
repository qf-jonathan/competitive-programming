#include <bits/stdc++.h>

using namespace std;
#define EPS 1e-9

int main() {
    int na[3], nb[3];
    scanf("%d%d%d", na, na + 1, na + 2);
    memcpy(nb, na, sizeof(na));
    sort(na, na + 3);
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", na[0], na[1], na[2], nb[0], nb[1], nb[2]);
    return 0;
}
