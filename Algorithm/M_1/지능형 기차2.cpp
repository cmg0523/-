#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("input.txt");
	int out, in, max=0,human=0;
	for (int i = 0; i < 10; i++) {
		cin >> out >> in;
		human += in;
		human -= out;
		if (max < human) {
			max = human;
		}
	}
	cout << max;


	return 0;

}