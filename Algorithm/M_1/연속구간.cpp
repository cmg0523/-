#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("input.txt");
	int i, j, cnt = 1,max=1;
	char N[9];
	for (i = 0; i < 3; i++) {
		cin >> N;
		for (j = 0; j < 8; j++) {
			if (N[j] == N[j + 1]) {
				cnt++;
				if (max < cnt) max = cnt;
			}
			else cnt = 1;
		}
		cout << max<<'\n';
		cnt = 1;
		max = 1;
	}
	

	return 0;
}