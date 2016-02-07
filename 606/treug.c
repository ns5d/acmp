#include <stdio.h>
 
int main() {        
    freopen("input.txt", "r", stdin);
	short a, b, c ;
	
	scanf("%hd %hd %hd", &a, &b, &c);


	if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
		printf("NO");
	} else {
		printf("YES");
	}	
 
    return 0;
}
