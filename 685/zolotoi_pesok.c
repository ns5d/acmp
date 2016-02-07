#include <stdio.h>

void swap(short *a, short *b) {
	short t = *a;
	*a = *b;
	*b = t;
}

int main() {		
	freopen("input.txt", "r", stdin);
	short a[4], b[4], i, j, sum = 0;
	for (i = 0; i < 3; i++)
		scanf("%hd", &a[i]);
 	for (i = 0; i < 3; i++)
		scanf("%hd", &b[i]);
		
	for (i = 0; i < 2; i++)
		for (j = i + 1; j < 3; j++) {
			if (a[i] > a[j])
				swap(&a[i], &a[j]);
			if (b[i] > b[j])
				swap(&b[i], &b[j]);
		}

	for (i = 0; i < 3; i++)
		sum += a[i] * b[i];

	printf("%d", sum);
	
	return 0;
}

