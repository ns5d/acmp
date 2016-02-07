#include <stdio.h>

int main() {		
	freopen("input.txt", "r", stdin);
	int x1, y1, x2, y2, xa, ya;
	scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &xa, &ya);

	int x = xa, y = ya;
	
	if (x1 == x2) // OX
		x = 2 * x1 - xa;
	
	if (y1 == y2) // OY
		y = 2 * y1 - ya;
	
	printf("%d %d", x, y);
	
	return 0;
}
	
