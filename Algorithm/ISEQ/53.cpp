#include <iostream>

using namespace std;

int main() {
	int arr[10][10];
	int N,x,y;

	cin >> N;
	x = N / 2, y = 0;
	//1. 0���Է¼� ������� 1�� ����.
	//2. ���� ����, ���� ���� �Ѱ��� ������ �Է�
	//3. ���� 0���� ������ ���� �Է���-1�� ����
	//4. ���� �Է� ���� ũ�� ���� 0���� ����
	//5. �������� �Է¼� ��� �� ������ ���� 1�̸�
	//   �ุ ����.
	arr[y][x] = 1;
	for (int k = 2; k <= N * N; k++) {
		if (k % N == 1) y++;
		else { y--; x++; }
		if (y < 0) y = N - 1;
		if (x > N - 1) x = 0;
		arr[y][x] = k;
	}

	for (y = 0; y < N; y++)
	{
		for (x = 0; x < N; x++)
			cout << arr[y][x] << " ";
		cout << '\n';
	}
	
	return 0;
}