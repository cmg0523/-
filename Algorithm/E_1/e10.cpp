#include <iostream>

using namespace std;

int main() {
	int N[7],sum = 0,cnt=0;
	int min = 100;

	for (int i = 0; i < 7; i++) {
		cin >> N[i];
		if (N[i] % 2 != 0 ) {
			sum += N[i];
			cnt++;
		}
		if (cnt == 0) {// -1��¾ȵ�
			cout << "-1";
		}
		if (N[i] % 2 != 0 && min > N[i]) {
			min = N[i];
		}
		
	}
	cout << sum << " " << min;

	return 0;
}