#include <iostream>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int N, score[1000][3], max = 0, i, j, sum[3] = { 0 };
	int number;
	int count[4][4] = { 0 };
	cin >> N;
	for (i = 0; i < N; i++) {
		for (j = 0; j < 3; j++) {
			cin >> score[i][j];
		}
	}
	for (j = 0; j < 3; j++) {
		for (i = 0; i < N; i++) {
			sum[j] += score[i][j];
			count[j][score[i][j]]++;
			
		}
	}
	
	bool f = 1;
	for (i = 0; i < 3; i++) {
		if (max < sum[i]) {
			max = sum[i];
			number = i;
			f = 1;
		}
		
		if (max == sum[i]) {
			f = 0;
		}
	}
	if (f) cout << number+1 << ' ' << max;
	else {
		if (sum[0] == sum[1]) {
			if (count[0][3] > count[1][3]) {
				number = 0;
			}

		}
		else if (sum[0] == sum[2]) {
			if (count[0][3] > count[2][3]) {
				number = 0;
			}
		}
		else if (sum[1] == sum[2]) {
			if (count[1][3] > count[2][3]) {
				number = 1;
			}
		}
		else {
			number = 2;
		}
		
		cout << number+1 << ' ' << max;
	}
	


	return 0;
}