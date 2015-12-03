#include <stdio.h>

int main() {		
	freopen("input.txt", "r", stdin);
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%s", (a == b) ? "=" : ((a > b) ? ">" : "<"));
	
	return 0;
}
