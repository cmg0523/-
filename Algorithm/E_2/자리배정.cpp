#include <iostream>

using namespace std;

int NX, NY, y, x, k, sw, i, j, nx, ny, cot;
int main() {
	
	cin >> NX >> NY >> k; //NX, NY ���� ����
	if (k > NX * NY) 
	{ cout << "0";
	return 0; 
	}
	nx = NX-1;//x�� �̵� Ƚ��
	ny = NY;//y�� �̵� Ƚ��
	y = 0; x = 1; sw = 1; cot = 0;//y,x�� ��ġ
	while (1) {
		for (i = 1; i <= ny; i++) {
			y += sw;
			cot++;
			if (cot == k) {
				cout << x << y;
				return 0;
			}
		}
		for (i = 1; i <= nx; i++){
			x += sw;
			cot++;
			if (cot == k) {
				cout << x << y;
				return 0;
			}
		}
		ny--; nx--;
		sw *= -1;
	}


	return 0;
}