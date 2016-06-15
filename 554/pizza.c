#include <stdio.h>

int main() {
	freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int n;
	scanf("%d", &n);

	printf("%d\n", ((n * (n + 1)) / 2) + 1);

	return 0;
}