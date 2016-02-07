#include <stdio.h>

int main() {		
	freopen("input.txt", "r", stdin);
	short y;
	scanf("%hd", &y);
	short r = (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
		
	printf("%s/%04d", (r == 0) ? "13/09" : "12/09", y);
	
	return 0;
}
