#include <stdio.h>
#include <math.h>

int main() {		
	freopen("input.txt", "r", stdin);
	short i, x, m = 14;
	scanf("%hd", &x);

	for (i = 0; i < m; i++) {
		if (pow(2, i) == x)
			break;
	}
		
	printf("%s", (i == 14) ? "NO" : "YES");
	
	return 0;
}

