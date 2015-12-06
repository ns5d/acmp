#include <stdio.h>

int main() {		
	freopen("input.txt", "r", stdin);
	int a1, a2, n;

	scanf("%d %d %d", &a1, &a2, &n);

	int d = a2 - a1;

	printf("%d", a1 + (n - 1) * d);
	
	return 0;
}
	
 
