#include <iostream>

using namespace std;

int gcd_get(int x, int y)
{
	if (x % y == 0) return y;    // �������� 0�̸� y�� �ִ������̴�.
	return (y, x % y);          // x�� y�� �ִ������� y�� x % y �� �ִ������� ����.
}

int main() {
	int a, s, x, gcd;
	cin >> a >> s;

	x = gcd_get(a, s);

	gcd = x * (a / x) * (s / x);

	cout << x << gcd;
	return 0;
}