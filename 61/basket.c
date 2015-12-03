#include <stdio.h>

int main() {		
	freopen("input.txt", "r", stdin);
	short i, a, b, s1 = 0, s2 = 0;
	
	for (i = 0; i < 4; i++) {
		scanf("%hd %hd", &a, &b);
		s1 += a;
		s2 += b;
	}
	printf("%s", (s1 == s2) ? "DRAW" : (s1 > s2) ? "1" : "2");
	
	return 0;
}
