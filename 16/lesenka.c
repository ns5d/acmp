#include <stdio.h>
// при N=70, 80, 90 соответственно получим 29927, 77312, 189586.
// N=9: 9, 1+8, 2+7, 3+6, 4+5, 1+2+6, 1+3+5, 2+3+4. Итого ровно 8 вариантов

int f(int n) {
	int cnt = n + 1;
    int q[cnt];
	int i, j;
	//int k;
	
	for (i = 0; i < cnt; i++)
		q[i] = 0;
    
    q[0] = 1;		
    for (i = 1; i < cnt; ++i) {
		//q[i] = 0;
        for (j = n; j >= i; --j) {
            q[j] += q[j - i];
			//printf("i = %d, j = %d;  q[j] += q[j-i] = %d;  ", i, j, q[j]);
			/*
            for (k = 0; k < cnt; k++)
				printf("%d, ", q[k]);
			printf("\n");
			*/
		}
		
	}
	
    return q[n];
}


int main() {		
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n;
	scanf("%d", &n);
	printf("%d", f(n));
	
	return 0;
}
