#include <iostream>

using namespace std;

int main() {
	int arr[10][20] = { 0 };
	int N;

	cin >> N;
	arr[0][N] = 1;
	for (int j = 1; j < 19; j++) {
		if (arr[0][j] == 0) cout << ' ';
		else
			cout << arr[0][j];
	}
	cout << "\n";
	for (int i = 1; i < N; i++) {
		for (int j = 1; j < 19; j++) {
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j + 1];
			if (arr[i][j] == 0) cout << ' ';
			else
				cout << arr[i][j];
		}
		cout << "\n";
	}
	return 0;
}