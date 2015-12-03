#include <stdio.h>
#define MIN(A, B) ((A) < (B)) ? (A) : (B)

int main() {		
	freopen("input.txt", "r", stdin);
	short n, i, d, s0 = 0, s1 = 0;

	scanf("%hd", &n);

	for (i = 0; i < n; i++) {
		scanf("%hd", &d);
		(d == 0) ? s0++ : s1++;
	}

	printf("%d", MIN(s0, s1));
	
	return 0;
}

