#include <iostream>

using namespace std;

int main() {
	int N[9][9],i,j,max=0,x,y;
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			cin >> N[i][j];
			if (N[i][j] > max) {
				max = N[i][j];
				x = i+1;
				y = j+1;
			}
		}
	}
	cout << max << ' ';
	cout << x <<' '<< y;
	return 0;
}