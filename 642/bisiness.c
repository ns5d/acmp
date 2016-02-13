#include <stdio.h>
#include <stdlib.h>

int compar(const void *a, const void *b) {
     return *(long int*)a - *(long int*)b;
}

int main() {
	freopen("input.txt", "r", stdin);
	short N;
	long int S;

	scanf("%hd %ld", &N, &S);
	long int A[N];
	
	int i;
	for (i = 0; i < N; i++) {
		scanf("%ld", &A[i]);
		//printf("%ld ", A[i]);
	}
	
	qsort(A, N, sizeof(long int *), compar);
	
	i = 0;
	int sum = 0;
	while (A[i] + sum <= S) {
		sum += A[i];
		i++;
	}
		
	printf("%d", i);
		
	return 0;
}

