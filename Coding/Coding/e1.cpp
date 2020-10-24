#include <iostream>

using namespace std;

int main() {
	int day, cnt=0;
	int car;

	cin >> day;

	for (int i = 0; i < 5; i++) {
		cin >> car;
		if (day == car) 
			cnt++;
	}
	cout << cnt;




	return 0;
}