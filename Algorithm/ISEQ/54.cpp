#include <iostream>

using namespace std;

int main() {
	int y = 0, x = -1;
	int arr[150][150];
	int N, cnt = 1, sw = 1;
	cin >> N;

	int len = N;

	for (int i = 0; i < N; i++) {
		for (int j = 1; j <= len; j++) {
			x += sw;
			arr[y][x] = cnt++;
		}
		len--;
		for (int j = 1; j <= len; j++) {
			y += sw;
			arr[y][x] = cnt++;
		}
		sw *= -1;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout.width(3);
			cout << arr[i][j];
		}
		cout << '\n';
	}
	return 0;
}