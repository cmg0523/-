#include <iostream>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int N, x[50], y[50], i, k[50], j;
	cin >> N;
	for (i = 0; i < N; i++) {
		cin >> x[i] >> y[i];
		k[i] = 1;
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (x[i] < x[j] && y[i] < y[j]) {
				k[i]++;
			}
		}
		cout << k[i] << ' ';
	}
	
	return 0;
}