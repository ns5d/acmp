#include <stdio.h>

int main() {		
	freopen("input.txt", "r", stdin);
	char c[5];
	scanf("%s", c);
	printf("%s", (c[0] == c[3] && c[1] == c[2]) ? "YES" : "NO");
	
	return 0;
}

