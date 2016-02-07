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
	char *c1, *c2;

	scanf("%d", &n);

	if (n == 1) {
		printf("1");
		return 0;
	}
	
	char a[n], b[n];
	scanf("%d", &l);
	
	for (i = 0; i < n - 1; i++) {
		scanf("%d", &d);
		(d == l) ? (a[i] = '|') : ((d > l) ? a[i] = '/' : (a[i] = '\\'));
		l = d;
	}
	a[n - 1] = '\0';

	//printf("%s\n", a);

	i = n - 1;
	while (i > 0) {
		p(b, i, 0);
		c1 = strstr(a, b);
		printf("%d: %s, %s: |c1=%s|\n", i, a, b, c1);
			
		p(b, i, 1);
		c2 = strstr(a, b);
		printf("%d: %s, %s: |c2=%s|\n", i, a, b, c2);
		if (c1 || c2)
			break;	
		i--;
	}

	printf("i = %d", i);
	
	return 0;
}
