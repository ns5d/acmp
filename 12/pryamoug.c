#include <stdio.h>
#include <stdlib.h>

int area(int ax, int ay, int bx, int by, int cx, int cy) {
    return abs((by - ay) * (cx - ax) - (bx - ax) * (cy - ay));
}

int is_in(int a[0]) { 
	int s = area(a[2], a[3], a[4], a[5], a[6], a[7]) +
		area(a[2], a[3], a[6], a[7], a[8], a[9]);
	//printf("S=%d\n", s);
	
	int s1 = area(a[0], a[1], a[2], a[3], a[8], a[9]);
	int s2 = area(a[0], a[1], a[2], a[3], a[4], a[5]);
	int s3 = area(a[0], a[1], a[4], a[5], a[6], a[7]);
	int s4 = area(a[0], a[1], a[6], a[7], a[8], a[9]);
	/*
	printf("s3=%d\n", s3);
	printf("s1=%d\n", s1);
	printf("s2=%d\n", s2);
	printf("s4=%d\n", s4);
	*/	
	if (s1 + s2 + s3 + s4 - s <= 0)
		return 1;
		
	return 0;
}
 
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int N = 1001;
    int cnt;
    int coor[N][10];

	scanf("%d", &cnt);

	int i, j;
	for (j = 0; j < cnt; j++) {
		for (i = 0; i < 10; i++) {
			scanf("%d", &coor[j][i]);
			//printf("%d, ", coor[j][i]);
		}
		//printf("\n");
	}

	int sum = 0;
	for (i = 0; i < cnt; i++) {
		sum += is_in(coor[i]);
		//printf(">%d\n", is_in(coor[i]));
	}

	printf("%d", sum);
	
	return 0;
}

