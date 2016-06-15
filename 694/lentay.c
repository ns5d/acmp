#include <string.h>

// LINUX
#include <stdio.h>
// WINDOWS
// #include <cstdio>


int main()
{
	freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int n, n1, n2, from = 0, to = 32;

	scanf("%d", &n);

	while (n > 0) {
		scanf("%d %d", &n1, &n2);

		if (n1 > from) {
			from = n1;
		}

		if (n2 < to) {
			to = n2;
		}

		n--;
	}


	// printf("%d:%d\n", from, to);
	printf("%s\n", (from <= to) ? "YES" : "NO");

	return 0;
}
