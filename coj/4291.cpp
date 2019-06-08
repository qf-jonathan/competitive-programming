#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    char na[20], nb[20];
    while (scanf("%s %d %s %d", na, &a, nb, &b) != EOF) {
        int ans = -1;
        if ((na[0] == 'B' && nb[0] == 'D')) {
            ans = b >= a * 2 ? 2 : 1;
        }
        if ((na[0] == 'D' && nb[0] == 'B')) {
            ans = a >= b * 2 ? 1 : 2;
        }
        if ((na[0] == 'D' && nb[0] == 'C')) {
            ans = b >= a * 2 ? 2 : 1;
        }
        if ((na[0] == 'C' && nb[0] == 'D')) {
            ans = a >= b * 2 ? 1 : 2;
        }
        if ((na[0] == 'C' && nb[0] == 'B')) {
            ans = b >= a * 2 ? 2 : 1;
        }
        if ((na[0] == 'B' && nb[0] == 'C')) {
            ans = a >= b * 2 ? 1 : 2;
        }
        if (na[0] == nb[0]) {
            ans = a == b ? 0 : (a > b ? 1 : 2);
        }
        if (ans == 0) printf("Draw\n");
        else if (ans == 1) printf("Tobby\n");
        else printf("Naebbirac\n");
    }
    return 0;
}