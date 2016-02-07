#include <stdio.h>

int main() {		
	freopen("input.txt", "r", stdin);
	int n, m, i;
	
	scanf("%d", &n);
	int a[n + 1];
 
	
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	scanf("%d", &m);
	int ii, jj;
	
	for (i = 0; i < m; i++) {
		scanf("%d %d", &ii, &jj);
		while (ii <= jj) {
			printf("%d ", a[ii - 1]);
			ii++;
		}

		printf("\n");
	}
		
	return 0;
}
