#include <iostream>

using namespace std;

int main() {
	int N, P, i, cnt, rmd[100] = { 0 }, j;
	cin >> N >> P;
	cnt = (N * N) % P;
	for (i = 0; i <= 100; i++) {
		cnt = (cnt * N) % P;
		if (rmd[cnt] == 1) {
			cout << i;
			return 0;
		}
		rmd[cnt] = 1;
	}
	return 0;
}