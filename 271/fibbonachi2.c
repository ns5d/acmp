#include <string.h>

// LINUX
#include <stdio.h>
// WINDOWS
// #include <cstdio>

long long int fibb(long long int n) {
	if (n == 2) {
		return 3;
	}

	long long int f1 = 1, f2 = 1, f3 = 2, index;

	index = 2;

	while (f3 < n) {
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
		index++;
		// printf("%lld: %lld\n", index, f3);
	}

	if (f3 != n) {
		index = 0;
	}

	return index;
}

int main()
{
	freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	long long int n, index;
	scanf("%lld", &n);
	// n = 2;
	// n = 8;
	// n = 1200000000;

	index = fibb(n);

	if (index) {
		printf("1\n%lld\n", index);
	} else {
		printf("0\n");
	}

	return 0;
}
