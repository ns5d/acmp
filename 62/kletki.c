#include <stdio.h>

int main() {		
	freopen("input.txt", "r", stdin);
	char a, n;
	scanf("%c%c", &a, &n);
	//printf("%d %d", a, n);
	if (a % 2 == 1) {
		printf("%s", (n % 2 == 1) ? "BLACK" : "WHITE");
	} else {
		printf("%s", (n % 2 == 0) ? "BLACK" : "WHITE");
	}
	
	return 0;
}
	
 
