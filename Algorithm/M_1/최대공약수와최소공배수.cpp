#include <iostream>

using namespace std;

int gcd_get(int x, int y)
{
	if (x % y == 0) return y;    // 나머지가 0이면 y가 최대공약수이다.
	return (y, x % y);          // x와 y의 최대공약수는 y와 x % y 의 최대공약수와 같다.
}

int main() {
	int a, s, x, gcd;
	cin >> a >> s;

	x = gcd_get(a, s);

	gcd = x * (a / x) * (s / x);

	cout << x << gcd;
	return 0;
}