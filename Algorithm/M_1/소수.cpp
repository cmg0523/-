#include <iostream>

using namespace std;

int main() {
	int M, N,sum=0,i,j,min=10000;
	cin >> M >> N;
	for (i = M; i <= N; i++) {
		for (j = 2; j <= i; j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (i == j) {
			sum += i;
			if (min > i) {
				min = i;
			}
		}
	}
	cout << sum << ' '<< min;
	return 0;
}