// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2905

#include <cmath>
#include <cstring>
#include <iostream>

using namespace std;

int trip[10005][2], n;
double mul[] = {1, .5, .25, .25, .25, .25};
double mem[10001][121][7];

double solve(int p = 0, int t = 0, int d = 0) {
    if (p >= n) {
        return 0.0;
    }
    if (!isnan(mem[p][t][d])) {
        return mem[p][t][d];
    }
    double &ans = mem[p][t][d];
    if (t == 0) {
        if (trip[p][0] >= 120) {
            ans = solve(p + 1, 0, 0) + (mul[d] * trip[p][1]);
        } else {
            ans = solve(p + 1, trip[p][0], d + 1) + (mul[d] * trip[p][1]);
        }
    } else {
        double a;
        if (trip[p][0] + t >= 120 || d >= 5) {
            a = solve(p + 1, 0, 0) + (mul[d] * trip[p][1]);
        } else {
            a = solve(p + 1, trip[p][0] + t, d + 1) + (mul[d] * trip[p][1]);
        }
        double b = solve(p, 0, 0);
        ans = min(a, b);
    }
    return ans;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> trip[i][0] >> trip[i][1];
    }
    memset(mem, -1, sizeof(mem));
    printf("%.2lf\n", solve());
    return 0;
}
