// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1024

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    string cad;
    for (scanf("%d", &t), getchar(); t--;) {
        getline(cin, cad);
        for (int i = 0; i < (int) cad.size(); i++)
            if (isalpha(cad[i])) cad[i] += 3;
        reverse(cad.begin(), cad.end());
        for (int i = cad.size() / 2; i < (int) cad.size(); i++)
            cad[i] -= 1;
        puts(cad.c_str());
    }
    return 0;
}
