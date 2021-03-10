#include <iostream>

using namespace std;

int main() {
	int arr[100] = { 1 };
	int N, len = 1;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < len; j++)
			arr[j] *= 2;

		if (arr[len - 1] >= 10) len++;

		for (int j = 0; j < len; j++)
			if (arr[j] >= 10) {
				arr[j + 1] += arr[j] / 10;
				arr[j] %= 10;
			}
	}

	for (int i = len-1; i >= 0; i--)
		cout << arr[i];

	return 0;
}