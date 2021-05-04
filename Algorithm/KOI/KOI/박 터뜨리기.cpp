#include <stdio.h>

int main() {
	int K, N, i, tot = 0;
	scanf_s("%d %d", &N, &K);

	for (i = 1; i <= K; i++)tot += i;
	if (tot > N) {
		printf("-1");
		return 0;
	}
	if ((N - tot) % K == 0) printf("%d", K - 1);
	else printf("%d", K);

	return 0;
}