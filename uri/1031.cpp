#include <bits/stdc++.h>

using namespace std;

/* pre processing
int sim(int n, int k){
	list<int> ls;
	for(int i=1; i<=n; i++)
		ls.push_back(i);
	while(ls.size()>1){
		ls.pop_front();
		for(int i=1; i<k; i++)
			ls.push_back(ls.front()),
			ls.pop_front();
	}
	return ls.front();
}*/

int rs[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 18, 10, 11, 7, 17, 11, 15,
            29, 5, 21, 13, 26, 14, 11, 23, 22, 9, 73, 17, 42, 7, 98, 15, 61, 22,
            84, 24, 30, 9, 38, 15, 54, 27, 9, 61, 38, 22, 19, 178, 38, 53, 79,
            68, 166, 20, 9, 22, 7, 21, 72, 133, 41, 10, 82, 92, 64, 129, 86, 73,
            67, 19, 66, 115, 52, 24, 22, 176, 10, 57, 137, 239, 41, 70, 60, 116,
            81, 79, 55, 102, 49, 5, 22, 54, 52, 113, 15, 66}, n;

int main() {
    while (scanf("%d", &n), n)
        printf("%d\n", rs[n]);
    return 0;
}
