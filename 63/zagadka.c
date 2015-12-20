#include <stdio.h>
 
int main() {        
    freopen("input.txt", "r", stdin);
    int s, p;
    scanf("%d %d", &s, &p);

    short x, y;
    for (x = 0; x <= 1000; x++)
		for (y = 0; y <= 1000; y++)
			if ((x + y == s) && (x * y == p)) {
				if (x < y)
					printf("%hd %hd\n", x, y);
				else
					printf("%hd %hd", y, x);
				return 0;
			}
 
    return 0;
}
