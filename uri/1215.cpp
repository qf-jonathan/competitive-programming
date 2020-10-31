// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1215
#include <bits/stdc++.h>

using namespace std;

int main() {
    char ln[205];
    set<string> dic;
    while (cin.getline(ln, 205)) {
        string wd;
        for (int i = 0; ln[i]; i++) {
            if (isalpha(ln[i])) {
                wd += tolower(ln[i]);
            } else {
                if (wd.size()) {
                    dic.insert(wd);
                    wd.clear();
                }
            }
        }
        if (wd.size()) {
            dic.insert(wd);
            wd.clear();
        }
    }
    for (set<string>::iterator i = dic.begin(); i != dic.end(); i++)
        printf("%s\n", i->c_str());
    return 0;
}
