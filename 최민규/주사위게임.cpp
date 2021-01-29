#include <iostream>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int N, dice[1000][3],i,j,large=0,cnt[3];
	cin >> N;
	for (i = 0; i < N; i++) {
		for (j = 0; j < 3; j++) {
			cin >> dice[i][j];
			if (large < dice[i][j]) large = dice[i][j];
		}
	}
	for (i = 0; i < N; i++) {

		if (dice[i][j] == dice[i][j + 1] && dice[i][j] == dice[i][j + 2]
			&& dice[i][j + 1] == dice[i][j + 2]) {
			cnt[i] = 10000 + (dice[i][j] * 1000);
			break;
		}	
		if (dice[i][j] == dice[i][j + 1] && dice[i][j] != dice[i][j + 2]
			&& dice[i][j + 1] != dice[i][j + 2]) {
			cnt[i] = 1000 + (dice[i][j] * 100);
			break;
		}
		if (dice[i][j] != dice[i][j + 1] && dice[i][j] != dice[i][j + 2]
			&& dice[i][j + 1] != dice[i][j + 2]) {
			cnt[i] = large * 100;
			break;
		}
	}
	if (cnt[i] > cnt[i + 1] && cnt[i] > cnt[i+2]) cout << cnt[i];
	if (cnt[i] > cnt[i + 1] && cnt[i] < cnt[i + 2]) cout << cnt[i + 2];
	if (cnt[i] < cnt[i + 1] && cnt[i] > cnt[i + 2]) cout << cnt[i + 1];
	
	
	

	return 0;
}