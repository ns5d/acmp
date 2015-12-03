#include <stdio.h>
#include <string.h>

void p(char a[], int c, int d) {
	int i;
	for (i = 0; i < c; i++)
		(i % 2 == d) ? (a[i] = '/') : (a[i] = '\\');
	a[i] = 0;
}

int main() {		
	freopen("input.txt", "r", stdin);
	int n, i, d, l;

	scanf("%d", &n);
	
	char a[n], b0[n], b1[n];
	scanf("%d", &l);
	
	for (i = 0; i < n - 1; i++) {
		scanf("%d", &d);
		(d == l) ? (a[i] = '|') : ((d > l) ? a[i] = '/' : (a[i] = '\\'));
		l = d;
	}
	a[n - 1] = '\0';

	i = n - 1;
	p(b0, i, 0);
	p(b1, i, 1);
	while (i > 0) {
		printf("%d: %s, %s:\n", i, a, b0);
		printf("%d: %s, %s:\n", i, a, b1);
		if (strstr(a, b0) || strstr(a, b1))
			break;
		i--;
		b0[i] = b1[i] = 0;
	}

	printf("%d", i + 1);
	
	return 0;
}
