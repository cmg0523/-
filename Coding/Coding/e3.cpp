#include <iostream>

using namespace std;

int main() {
	string N;
	int a = 0;
	cin >> N;

	for (int i = 0; i < N.size(); i++) {
		if (N[i] == N[i + 1])
			a += 5;
		else a += 10;
	}
	cout << a;

	return 0;
}