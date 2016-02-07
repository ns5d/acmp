#include <stdio.h>

int main() {
	freopen("input.txt", "r", stdin);
	short n;
	scanf("%hd", &n);

	long s[31];
	s[0] = 0;
	s[1] = 1;

	short i = 2;
	while (i <= n) {
		s[i] = s[i - 1] + s[i - 2];
		i++;
	}

	printf("%ld", s[n]);
	
	return 0;
}
