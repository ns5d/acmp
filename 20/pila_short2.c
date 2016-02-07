#include <stdio.h>
#include <string.h>

int main() {		
	freopen("input.txt", "r", stdin);
	int n, i, d, l;

	scanf("%d", &n);
	
	char a[n], b0[n], b1[n];
	scanf("%d", &l);
	n--;
	
	for (i = 0; i < n; i++) {
		scanf("%d", &d);
		(d == l) ? (a[i] = '|') : ((d > l) ? a[i] = '/' : (a[i] = '\\'));
		(i % 2 == 0) ? (b0[i] = '/') : (b0[i] = '\\');
		(i % 2 == 1) ? (b1[i] = '/') : (b1[i] = '\\');
		l = d;
	}
	a[n] = '\0';

	i = 1;
	while (i <= n) {
		char c0 = b0[i], c1 = b1[i];
		b0[i] = b1[i] = 0;
		if (!strstr(a, b0) || !strstr(a, b1))
			break;
		b0[i] = c0;
		b1[i] = c1;
		i++;
	}

	printf("%d", i + 1);
	
	return 0;
}
