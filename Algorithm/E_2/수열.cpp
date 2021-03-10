#include <iostream>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int N, n[100], i, count = 1, max = 0, count2 = 1;
	cin >> N;
	for (i = 0; i < N; i++) {
		cin >> n[i];
	}
	for (i = 0; i < N - 1; i++) {
		if (n[i] > n[i + 1]) {
			count++;
			count2 = 1;
		}
		else if (n[i] < n[i + 1]) {
			count2++;
			count = 1;
		}
		else {
			count++;
			count2++;
		}
		if (max < count) max = count;
		if (max < count2) max = count2;
	}
	/*
	for (i = 0; i < N; i++) {
		if (n[i] <= n[i + 1]) {
			count++;
		}
		if (n[i] > n[i + 1]) {
			if (max < count) {
				max = count;
			}
			count = 1;
		}
	}
	count = 1;
	for (i = 0; i < N; i++) {
		if (n[i] >= n[i + 1]) {
			count++;
		}
		if (n[i] < n[i + 1]) {
			if (max < count) {
				max = count;
			}
			count = 1;
		}
	}*/
	if (max < 3) cout << '2';
	else cout << max;

	return 0;
}