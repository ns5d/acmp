#include <stdio.h>

int main() {		
	freopen("input.txt", "r", stdin);
	short n, i, d;
	scanf("%hd", &n);

	short a[n + 1];
	for (i = 0; i < n; i++) {
		scanf("%hd", &d);
		a[i] = d;
	}

	for (i = n - 1; i >= 0; i--)
		printf("%d ", a[i]);
	
	return 0;
}

