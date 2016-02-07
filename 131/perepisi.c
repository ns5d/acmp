#include <stdio.h>

int main() {		
	freopen("input.txt", "r", stdin);
	short i, cnt, v, s, max_i = -1, max = 0;
	scanf("%hd", &cnt);

	for (i = 0; i < cnt; i++) {
		scanf("%hd %hd", &v, &s);
		if (s == 0)
			continue;

		if (v > max) {
			max = v;
			max_i = i + 1;
		}
	}

	printf("%hd", max_i);
		
	return 0;
}

