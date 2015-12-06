#include <stdio.h>

int main() {		
	freopen("input.txt", "r", stdin);
	int n;
	scanf("%d", &n);

	printf("%d", (n - 1) * (n - 2));
	
	return 0;
}
	
 
