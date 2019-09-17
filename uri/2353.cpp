#include <bits/stdc++.h>

using namespace std;

bool prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    while (!prime(n))
        n--;
    printf("%d\n", n);
    return 0;
}
