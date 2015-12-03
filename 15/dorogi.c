#include <stdio.h>

int main() {		
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int sum, i, t, n;
	scanf("%d", &n);
	
	sum = 0;
	for (i = 0; i < n * n; i++) {
		scanf("%d", &t);
		if (t == 1)
			sum++;		
	}
	
	printf("%d", sum / 2);
	return 0;
}

