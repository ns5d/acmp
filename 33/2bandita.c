#include <stdio.h>

int main() {		
	freopen("input.txt", "r", stdin);
	short a, b;
	scanf("%hd %hd", &a, &b);
	printf("%d %d", b - 1, a - 1);
	
	return 0;
}

