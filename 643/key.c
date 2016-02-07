#include <stdio.h>
#include <stdlib.h>

long int cbinary(long int n) {
    long int cnt = 0;

    while (n) {
        if (n & 1)
            cnt++;
        n >>= 1;
    }
    
    return cnt;
}


int main() {
	freopen("input.txt", "r", stdin);
	
    long int i;
    scanf("%ld", &i);

    printf("%ld\n", i + cbinary(i));
 
    return 0;
}
