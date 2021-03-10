#include<iostream>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int N, pap[100][100] = { 0 }, L, R, i, j, y, x, hap = 0;
	cin >> N;
	for (i = 0; i < N; i++) {
		cin >> L >> R;
		for (y = R; y < R + 10; y++) {
			for (x = L; x < L + 10; x++) {
				pap[y][x] = 1;
			}
		}
	}
	for (i = 0; i < 100; i++) {
		for (j = 0; j < 100; j++) {
			if (pap[i][j] == 1) {
				hap++;
			}
		}
	}
	cout << hap;



	return 0;
}