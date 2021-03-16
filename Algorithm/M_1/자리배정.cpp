#include <iostream>

using namespace std;

int C, R, K, x, y, i, j, cot, c, r, sw;
int main() {
	cin >> C >> R >> K;
	if (K > C * R) {
		cout << '0';
		return 0;
	}
	c = C - 1;//가로
	r = R;//세로
	x = 1, y = 0,sw=1,cot=0;
	while(1){
		for (i = 1; i <= r; i++) {
			y += sw;
			cot++;
			if (cot == K) {
				cout << x <<" " << y;
				return 0;
			}
		}
		for (j = 1; j <= c; j++) {
			x += sw;
			cot++;
			if (cot == K) {
				cout << x <<" " << y;
				return 0;
			}
		}
		c--; r--;
		sw *= -1;
	}
	return 0;
}