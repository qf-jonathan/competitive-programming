// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1026

#include <cstdio>

int main() {
    unsigned int a, b;
    while (scanf("%u%u", &a, &b) != EOF)
        printf("%u\n", (a xor b));
    return 0;
}
