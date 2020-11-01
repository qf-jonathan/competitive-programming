// Problem-link: https://codeforces.com/problemset/problem/735/A

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, n1, n2, ns[100005];
    cin >> n >> n1 >> n2;

    for (int i = 0; i < n; i++)
        cin >> ns[i];

    sort(ns, ns + n);

    if (n1 > n2)
        swap(n1, n2);

    long long s1 = 0, s2 = 0;

    for (int i = n - 1; i >= n - n1; i--) {
        s1 += ns[i];
    }
    for (int i = n - n1 - 1; i >= n - n1 - n2; i--) {
        s2 += ns[i];
    }

    double res = (long double)s1 / n1 + (long double)s2 / n2;

    printf("%.10lf\n", res);

    return 0;
}