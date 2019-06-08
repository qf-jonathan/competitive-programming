#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    char ln[105];
    scanf("%d\n", &n);
    while (n--) {
        scanf("%[^\n]%*c", ln);
        int sz = strlen(ln);
        for (int i = 0; i < sz; i++) {
            char &c = ln[i];
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                printf("%cp%c", c, c);
            } else {
                printf("%c", c);
            }
        }
        printf("\n");
    }
    return 0;
}