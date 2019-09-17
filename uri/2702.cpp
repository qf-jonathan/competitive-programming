#include <iostream>

using namespace std;

int main() {
    int na[3], a, ans = 0;
    for (int i = 0; i < 3; i++) {
        cin >> na[i];
    }
    for (int i = 0; i < 3; i++) {
        cin >> a;
        ans += max(0, a - na[i]);
    }
    cout << ans << endl;
    return 0;
}