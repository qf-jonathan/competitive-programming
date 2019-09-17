#include <bits/stdc++.h>

using namespace std;

inline void mul(int a[][3], int b[][3], int mod) {
    int tm[3][3] = {};
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 3; k++)
                tm[i][j] = (tm[i][j] + (a[i][k] * b[k][j]) % mod) % mod;
    memcpy(a, tm, sizeof tm);
}

int main() {
    long long n, tn;
    int b, cc = 1;
    while (scanf("%lld%d", &n, &b), n || b) {
        int mt[][3] = {{1, 1, 1},
                       {1, 0, 0},
                       {0, 0, 1}};
        int id[][3] = {{1, 0, 0},
                       {0, 1, 0},
                       {0, 0, 1}};
        tn = n;
        while (tn) {
            if (tn & 1ll) mul(id, mt, b);
            mul(mt, mt, b);
            tn /= 2;
        }
        printf("Case %d: %lld %d %d\n", cc++, n, b, (id[0][0] + id[1][2]) % b);
    }
    return 0;
}
