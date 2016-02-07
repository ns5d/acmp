#include <stdio.h>

int main() {		
	freopen("input.txt", "r", stdin);
	short l, w, h;
	scanf("%hd %hd %hd", &l, &w, &h);
	int s = (2*l*h + 2*w*h);
	printf("%d", (s % 16 == 0) ? s / 16 : s / 16 + 1);
	
	return 0;
}
