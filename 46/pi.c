#include <stdio.h>
int main() {		
	freopen("input.txt", "r", stdin);
	short n;
	scanf("%hd", &n);

	if (n == 0) {
		printf("3");
		return 0;
	}

	char E[] = "71828182845904523536028750";
	printf("2.%.*s", n - 1, E);
	printf("%c", (E[n] >= '5') ? E[n - 1] + 1 : E[n - 1]);
	
	return 0;
}

