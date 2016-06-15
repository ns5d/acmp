#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int cnt = 0;
	int min = 100, max = 0;
	int c;

	while ( (c = getchar()) != -1) {
		if (c == '0' + 1) {
			cnt++;
		} else if (c == '0' + 2) {
			cnt--;
		}

		if (cnt > max) {
			max = cnt;
		}

		if (cnt < min) {
			min = cnt;
		}
	}

	// printf("cnt = %d\n", cnt);
	// printf("min = %d\n", min);
	// printf("max = %d\n", max);

	if (min > 0) {
		min = 0;
	}

	printf("%d\n", max - min + 1);

	return 0;
}