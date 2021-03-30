#include <iostream>

using namespace std;

int main() {
	int N[10], i, sum = 0, avg, count[1000] = { 0 },cnt=0,cnt_max;

	for (i = 0; i < 10; i++) {
		cin >> N[i];
		count[N[i]]++;
		sum += N[i];
		if (count[N[i]] > cnt) {
			cnt = count[N[i]];
			cnt_max = N[i];

		}
		
	}
	avg = sum / 10;

	cout << avg << ' ' << cnt_max;
	
	return 0;
}