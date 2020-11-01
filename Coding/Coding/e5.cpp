#include <iostream>

using namespace std;

int main() {
	int out, in, max=0,human=0;
	

	for (int i = 0; i < 4; i++) {
		cin >> out >> in;
		human += in;
		human -= out;
		if (max <= human) {
			max = human;
		}
	}
	cout << max;
	

	return 0;
}