#include <stdio.h>

int nod(int x, int y) {
	//printf("%d, %d\n", x, y);
    if (y == x)  
		return x;
		
    if (x > y)
		return nod(x - y, y);
	else
		return nod(x, y - x);
}

int main() {		
	freopen("input.txt", "r", stdin);
	int a, b;
	scanf("%d %d", &a, &b);

	printf("%d", nod(a, b));
	
	return 0;
}
	
 
