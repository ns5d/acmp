#include <stdio.h>

long nod(long a, long b) {
	while (a && b)
        (a > b) ? (a %= b) : (b %= a);
        
    return a | b;
}

int main() {		
	freopen("input.txt", "r", stdin);
	long a, b;
	scanf("%ld %ld", &a, &b);

	printf("%ld", nod(a, b));
	
	return 0;
}
	
 
