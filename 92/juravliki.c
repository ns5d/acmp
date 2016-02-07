#include <stdio.h>

int main() {		
	freopen("input.txt", "r", stdin);
	int n;
	scanf("%d", &n);
	printf("%d %d %d", n / 6, 2 * n / 3, n / 6); 
	
	return 0;
}

