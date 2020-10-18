#include <iostream>

using namespace std;

int main() {
	int M, N;
	int X;

	cin >> M >> N >> X;
	
	cout << M / N;
	M = M % N;
	cout << ".";
	for (int i = 0; i < X; i++) {
		cout << M * 10 / N;
		M = M * 10 % N;
	}
	return 0;
}