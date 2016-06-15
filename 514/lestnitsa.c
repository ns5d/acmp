#include <string.h>

// LINUX
#include <stdio.h>
// WINDOWS
// #include <cstdio>


int main()
{
	freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int n, k;

	scanf("%d", &n);

	k = 1;

	while ( (n - k) >= 0) {
		n -= k;
		k += 1;
		// printf("%d:%d\n", n, k);
	}

	printf("%d\n", k - 1);

	return 0;
}
