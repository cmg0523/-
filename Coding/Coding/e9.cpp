#include <iostream>

using namespace std;

int main() {
	int N[9]; 

		int max = 0, min = 100;
	for (int i = 0; i < 9; i++) {
		cin >> N[i];

		if (max < N[i]) {
			max == N[i];
		}

		if (min > N[i]) {
			min == N[i];
		}
		
	}
	cout << max << " "  << min;

	return 0;
}