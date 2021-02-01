#include <iostream>

using namespace std;

int main() {
	int D,K,A,B,i,C,j;
	cin >> D >> K;

	for (i = 1; i <= K - 1; i++) {
		C = K;
		B = i;
		for (j = 1; j <= D-2; j++) {
			A = C-B;
			if (A > B) break;
			C = B;
			B = A;
		}
		if (j ==D - 1) {
			cout << B <<' ' << C;
			return 0;
		}
	}
	
	return 0;
}