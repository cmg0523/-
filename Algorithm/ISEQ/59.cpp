#include <iostream>

using namespace std;

int main() {
	int arr[100];
	int N,i;
	cin >> N;

	for (i = 0; ; i++) {
		arr[i] = N % 2;
		N = N / 2;
		if (N <= 0) break;
	}
	for (int j = i; j >= 0; j--) {
		cout << arr[j];
	}
	return 0;
}