// Problem link: https://codeforces.com/contest/1608/problem/B

#include <iostream>
#include <vector>

using namespace std;

vector<int> solve_case(int n, int a, int b) {
    if (abs(a - b) > 1 || n < a + b + 2)
        return {-1};
    int le = 1, ri = n, cnt = a + b;
    bool down = a < b;
    vector<int> ans;
    while (le <= ri) {
        ans.push_back(down ? ri-- : le++);
        if (cnt) {
            down = !down;
            cnt--;
        }
    }
    return ans;
}

int main() {
    int t, n, a, b;
    cin >> t;
    for (int c = 0; c < t; c++) {
        cin >> n >> a >> b;
        auto solution = solve_case(n, a, b);
        for (int i = 0; i < solution.size(); i++) {
            if (i)
                cout << ' ';
            cout << solution[i];
        }
        cout << endl;
    }
    return 0;
}