#include <stdio.h>
#include <math.h>

int main() {		
	freopen("input.txt", "r", stdin);
	short x1, y1, x2, y2;
	scanf("%hd %hd %hd %hd", &x1, &y1, &x2, &y2);
	printf("%.5f", sqrt( (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
	
	return 0;
}


