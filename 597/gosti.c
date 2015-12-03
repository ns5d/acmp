#include <stdio.h>

int main() {		
	freopen("input.txt", "r", stdin);
	int r1, r2, r3;
	scanf("%d %d %d", &r1, &r2, &r3);
 
	printf("%s", (r1 >= r2 + r3) ? "YES" : "NO");
	return 0;
}

