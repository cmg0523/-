#include <iostream>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int A, B, C, count[10] = { 0 }, gop, i,n,n2;
	cin >> A >> B >> C;

	gop = A * B * C;
	while (1) {
		n = gop % 10; 
		count[n]++;

		gop = gop / 10;
		if (gop == 0) break;

	}
	
	for (i = 0; i < 10; i++) {
		cout << count[i];
	}
	return 0;
}