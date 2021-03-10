#include<iostream>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int A[10], B[10], i,a=0,b=0;
	for (i = 0; i < 10; i++) {
		cin >> A[i];
	}
	for (i = 0; i < 10; i++) {
		cin >> B[i];
	}
	for (i = 0; i < 10; i++) {
		if (A[i] > B[i]) {
			a++;
		}
		if (A[i] < B[i]) {
			b++;
		}
	}
	if (a > b) {
		cout << 'A';
	}
	if (a < b) {
		cout << 'B';
	}
	if (a == b) {
		cout << 'D';
	}
	return 0;
}