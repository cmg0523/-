#include <iostream>
#include <string>

using namespace std;

int main() {
	int N;
	int A[9][18] = { 0 };
	int n;

	cin >> N;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N*N; j++)
			A[i][j]=0;

	//처리작업
	A[0][N - 1]=1;
	for (int i = 1; i < N; i++) {
		n = 0;
		for (int j = N-1-i; j <= N - 1+i; j++) {
			if (j < N) A[i][j] = ++n;
			else A[i][j] = --n;
		}
	}

	//결과출력
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N*2; j++)
			if(A[i][j] != 0 ) cout << A[i][j];
			else cout << " ";
		cout << '\n';
	}

	return 0;
}
