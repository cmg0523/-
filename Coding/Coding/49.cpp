#include <iostream>

using namespace std;

int main() {
	int arr[50][50];
	int N, cnt = 1;

	cin >> N;

	for (int i = N-1; i >= 0; i--) {
		for (int j = N-1; j >= 0; j--) {
			arr[j][i] = cnt++;
		}
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