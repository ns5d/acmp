#include <stdio.h>

int main() {		
	freopen("input.txt", "r", stdin);
	unsigned n;
	scanf("%d", &n);
	
	short s = 0;
	while (n) {
		if (n & 1)
			s++;
		n >>= 1;
	}
	printf("%d", s);
	
	return 0;
}
