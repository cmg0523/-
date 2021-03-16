#include <iostream>


using namespace std;

int main() {
	int hour, min, sec, D,sum;

	cin >> hour >> min >> sec >> D;

	sum = 3600 * hour + min * 60 + sec + D;

	hour = sum / 3600;
	min = (sum % 3600) / 60;
	sec = sum % 60;
	hour %= 24;

	cout << hour << " " << min << " " << sec;

	return 0;
}