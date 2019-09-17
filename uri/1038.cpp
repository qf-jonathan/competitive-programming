#include <bits/stdc++.h>

using namespace std;

int main() {
    double ps[] = {0, 4, 4.5, 5, 2, 1.5};
    int c, p;
    scanf("%d%d", &p, &c);
    printf("Total: R$ %.2lf\n", ps[p] * c);
    return 0;
}
