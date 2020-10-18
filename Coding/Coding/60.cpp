#include <iostream>

using namespace std;

int main() {
	int arr[100] = { 1 };
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 100; j++)
			arr[j] *= 2;

		for (int j = 0; j < 100; j++)
			if (arr[j] >= 10)
				arr[j + 1] += 1;
		
	}

	return 0;
}