#include <stdio.h>

int main() {		
	freopen("input.txt", "r", stdin);
	short n;
	scanf("%hd", &n);
	printf("%d", (n == 1) ? 0 : ((n % 2 == 0) ? n / 2 : n));
	
	return 0;
}

