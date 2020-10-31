// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1068
#include <cstdio>

inline bool valid(char *c) {
    int st = 0;
    for (; *c; c++) {
        if (*c == '(') st++;
        if (*c == ')') st--;
        if (st < 0) return false;
    }
    if (st == 0) return true;
    return false;
}

int main() {
    char ln[10005];
    while (gets(ln)) {
        if (valid(ln)) puts("correct");
        else puts("incorrect");
    }
    return 0;
}
