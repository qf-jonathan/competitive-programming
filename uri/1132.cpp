// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1132

#include <cstdio>
#include <iostream>

#define sm(n) (((n)*((n)+1))/2)

int sum(int n) { return sm(n) - sm(n / 13) * 13; }

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a > b) std::swap(a, b);
    printf("%d\n", sum(b) - (a ? sum(a - 1) : 0));
    return 0;
}
