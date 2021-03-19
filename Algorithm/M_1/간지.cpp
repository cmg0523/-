#include <iostream>

using namespace std;

int main() {
	int N, ten[10] = { 6,7,8,9,0,1,2,3,4,5 };
	char zod[13] = "IJKLABCDEFGH";

	cin >> N;

	cout << zod[N % 12] << ten[N % 10];

	return 0;
}