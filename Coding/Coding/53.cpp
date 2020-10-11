#include <iostream>

using namespace std;

int main() {
	int arr[10][10];
	int N,x,y;

	cin >> N;
	x = N / 2, y = 0;
	//1. 0행입력수 가운데열에 1을 셋팅.
	//2. 행은 감소, 열은 증가 한곳에 증가값 입력
	//3. 행이 0보다 적으면 행은 입력행-1로 설정
	//4. 열이 입력 보다 크면 열은 0으로 설정
	//5. 증가값이 입력수 배수 중 나머지 값이 1이면
	//   행만 증가.
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