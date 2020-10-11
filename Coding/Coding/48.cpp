#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream fin("input.txt");
	string N;
	int count = 1;
	fin >> N;
	for (int i = 0; i < N.size(); i++) {
		if (N[i]==N[i+1]) {
			count++;
		}
		else {
			if (count >= 5)
				cout << N[i] << '(' << count << ')';
			else
				for (int j = 0; j < count; j++)
					cout << N[i];
			count = 1;
		}
		
	}

	return 0;
}