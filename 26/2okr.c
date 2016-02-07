#include <stdio.h>
#include <math.h>

int dist(short x1, short y1, short x2, short y2) {
	return sqrt( (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main() {		
	freopen("input.txt", "r", stdin);
	short a[8], i;
	for (i = 1; i < 8; i++)
	scanf("%hd", &a[i]);
	int r = dist(a[1], a[2], a[4], a[5]);  

	short r1 = a[3];
	short r2 = a[6];
	short rez = ((r1 + r2 >= r) && (r + r2 >= r1) && (r + r1 >= r2));
	
	printf("%s", (rez) ? "YES" : "NO");
	
	return 0;
}


