#include <stdio.h>

int main() {		
	freopen("input.txt", "r", stdin);
	short cnt;
	scanf("%hd", &cnt);
	int i, n, m;
	for (i = 0; i < cnt; i++) {
		scanf("%d %d", &n, &m);
		printf("%d\n", 19 * m + (n + 239) * (n + 366) / 2);
	}
	 
	return 0;
}

