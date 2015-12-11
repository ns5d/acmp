#include <stdio.h>

short min(short a, short b) {
	return (a < b) ? a : b;
}

short abs_(short a) {
	return (a > 0) ? a : -a;
}

int main() {		
	freopen("input.txt", "r", stdin);

	short n, i, j;
	scanf("%hd %hd %hd", &n, &i, &j);

	short ij = abs_(i - j);	
	printf("%d", min(ij - 1, n - ij - 1));
	
	return 0;
}

// ...i...j...

