#include <stdio.h>
#define MIN(A, B) (A) < (B) ? (A) : (B)

int main() {
	freopen("input.txt", "r", stdin);

	short n, k;

	scanf("%hd", &n);
	short s[n];

	short i = 0;
	while (i < n) {
		scanf("%hd", &s[i]);
		i++;
	}

	scanf("%hd", &k);

	long sum = 0;
	for (i = 0; i < n; i++) {
		sum += MIN(s[i], k);
		//printf("%hd %hd %ld\n", s[i], k, sum);
	}

	printf("%ld", sum);
	
  return 0;
}
