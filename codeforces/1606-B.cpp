// Problem link: https://codeforces.com/problemset/problem/1606/B

#include <iostream>

using namespace std;

long long solve_case(long long n, long long k) {
    long long cnt = 1, ans = 0;
    while(cnt < n && cnt < k) {
        cnt += min(cnt, k);
        ans++;
    }
    long long df = max(0LL, n - cnt);
    ans += (df + k - 1) / k;
    return ans;
}

int main() {
    int t;
    long long n, k;
    cin >> t;
    for (int c = 0; c < t; c++) {
        cin >> n >> k;
        cout << solve_case(n, k) << endl;
    }
    return 0;
}