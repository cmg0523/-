#include<iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream fin("input.txt");
	int A[10], B[10], i, a = 0, b = 0;
	for (i = 0; i < 10; i++) {
		fin >> A[i];
	}
	for (i = 0; i < 10; i++) {
		fin >> B[i];
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