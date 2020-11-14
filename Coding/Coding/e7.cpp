#include<iostream>

using namespace std;

int main() {
	int n[4];
	for (int j = 0; j < 3; j++) {

		int cnt = 0;
		for (int i = 0; i < 4; i++) {
			cin >> n[i];
			if (n[i] == 0) 
				cnt++;
		}
		if (cnt == 0) {
			cout << 'E';
		}
		else if (cnt == 1) {
			cout << 'A';
		}
		else if (cnt == 2) {
			cout << 'B';
		}
		else if (cnt == 3) {
			cout << 'C';
		}
		else {
			cout << 'D';
		}
			


	}

	return 0;
}