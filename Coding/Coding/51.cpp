#include <iostream>

using namespace std;

int main(){
	int N;

	cin >> N;

	int star = 1, blank = N / 2;

	for (int i = 0; i < N; i++) {

		for (int j = 0; j < blank; j++)
			cout << "  ";
		for (int k = 0; k < star; k++)
			cout << "* ";
		if (i < N / 2) {
			star += 2;
			blank--;
		}
		else {
			star -= 2;
			blank++;
		}
		 cout << "\n";


	}

	

	return 0;
}