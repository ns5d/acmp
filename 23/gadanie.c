#include <stdio.h>

int main() {		
	freopen("input.txt", "r", stdin);
	short n, i, s = 0;
	scanf("%hd", &n);
	
	i = n;
	while (i > 0) {
		if (n % i == 0)
			s += i;
		i--;
	}
	printf("%d", s);
	
	return 0;
}
