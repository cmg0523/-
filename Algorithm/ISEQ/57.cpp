#include <iostream>

using namespace std;

int main() {
	int arr[101] = { 0 };
	int A;
	int i;
	for (i = 0; ; i++) {
		cin >> A;
		if (A == 0) break;
		arr[A]++;
	}
	for (i = 0; ; i++) {
		cin >> A;
		if (A == 0) break;
		arr[A]++;
	}
	for (int j = 1; j <= 100; j++)
		if (arr[j] >= 2)
			cout << j;

	cout << endl;

	for (int j = 1; j <= 100; j++)
		if (arr[j] >=1)
			cout << j;

	return 0;
}