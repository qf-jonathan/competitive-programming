// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2348

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, ns[100005];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", ns + i);
    sort(ns, ns + n);
    list<int> l;
    for (int i = 0; i < n; i++) {
        if (i & 1)
            l.push_back(ns[i]);
        else
            l.push_front(ns[i]);
    }
    list<int>::iterator f, s;
    f = s = l.begin();
    s++;
    double PI = acos(-1), ans = sin(PI * 2 / n) * (l.back()) * (*f);
    ;
    for (; s != l.end(); s++, f++) {
        ans += sin(PI * 2 / n) * (*s) * (*f);
    }
    printf("%.3lf\n", ans / 2);
    return 0;
}
