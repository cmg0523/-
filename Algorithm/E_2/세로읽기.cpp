#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

char c[10][20];
int main() {
	freopen("input.txt", "r", stdin);
	int i, j;
	for (i = 0; i < 5; i++) {
		cin >> c[i];
	}
	for (j = 0; j < 15; j++) {
		for (i = 0; i < 5; i++) {
			if (c[i][j] == NULL) continue;
			cout << c[i][j];
		}
	}
	


}