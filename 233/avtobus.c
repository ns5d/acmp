#include <stdio.h>

int main() {		
	freopen("input.txt", "r", stdin);

	int i, m, cnt;
	scanf("%d", &cnt);

	for (i = 0; i < cnt; i++) {
		scanf("%d", &m);
		if (m <= 437) {
			printf("Crash %d", i + 1);
			return 0;
		}
	}

	printf("No crash");
	
	return 0;
}

