#include <iostream>

using namespace std;

int main() {
	int hun, ten, one;
	for (int i = 0; i < 1000; i++) {
		one = i % 10;
		ten = i % 100 / 10;
		hun = i / 100;


		if (i == one * one * one + hun * hun * hun + ten * ten * ten) {
			cout << i << "\n";
		}
	}
	return 0;
}