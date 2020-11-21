#include <iostream>

using namespace std;

int main() {
	int N[9]; 
	int max = 0;
	int j;
	
	for (int i = 0; i < 9; i++) {
		cin >> N[i];

		if (max < N[i]) {
			max = N[i];
			
		}
		
		
	}
	cout << max;
	// 몇번째 줄인지 구하는거 아직 못함 물어봐야함
	return 0;
}