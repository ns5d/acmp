#include <stdio.h>

int main() {		
	freopen("input.txt", "r", stdin);
	short a, b, c;
	scanf("%hd %hd %hd", &a, &b, &c);
	printf("%d", 2 * a * b * c);
	
	return 0;
}
