#include <stdio.h>
#include <math.h>

int abs(int d) {
	return (d > 0) ? d : (-d);
}

double dist(short x1, short y1, short x2, short y2) {
	int x = abs(x1 - x2);
	int y = abs(y1 - y2);

	return sqrt(x*x + y*y);
}

int main() {		
	freopen("input.txt", "r", stdin);
	short x1, y1, x2, y2, x, y;
	scanf("%hd %hd %hd %hd", &x1, &y1, &x2, &y2);

	short n;
	scanf("%hd", &n);

	double dist1, dist2;
	short find = 0;

	short i = 1;
	while (i <= n) {
		scanf("%hd %hd", &x, &y);
		dist1 = 2 * dist(x1, y1, x, y);
		dist2 = dist(x2, y2, x, y);
		//printf("%hd %hd\n", dist1, dist2);
		
		if (dist1 <= dist2) {
			find = 1;
			break;
		}

		i++;
	}
	
	if (find) {
		printf("%hd", i);
	} else {
		printf("NO");
	}
	
	return 0;
}
	
