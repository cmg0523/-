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
	// ���° ������ ���ϴ°� ���� ���� ���������
	return 0;
}