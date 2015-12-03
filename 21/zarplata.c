#include <stdio.h>
#define min(a, b)  (((a) < (b)) ? (a) : (b))
#define max(a, b)  (((a) > (b)) ? (a) : (b))

int main() {		
	freopen("input.txt", "r", stdin);
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", max(a, max(b, c)) - min(a, min(b, c)));
	
	return 0;
}
