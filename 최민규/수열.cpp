#include <iostream>

using namespace std;

int main() {
	freopen{ "input.txt","r",stdin };
	int N,n[100],i,count=1,max;
	cin >> N;
	for (i = 0; i < N; i++) {
		cin >> n[i];
	}
	for (i = 0; i < N; i++) {
		if (n[i] <= n[i++]) {
			count++;
			if (n[i] > n[i++]) {
				max = count;
				count = 1;
			}
			cout << count;
			if (count < 3) cout << '2';
		}
		if (n[i] >= n[i++]) {
			count++;
			if (n[i] < n[i++]) {
				max = count;
				count = 1;
			}
			cout << count;
			if (count < 3) cout << '2';
		}
	}
	return 0;
}