#include <stdio.h>
#include <string.h>


int main() {
	freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int d[155];
	char s[40];
	int i, p, max, maxi, num;

	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		scanf("%d", &d[i]);
	}


	max = 0;
	maxi = 1;

	for (i = 0; i < num; i++) {
		scanf("%d", &p);
		p = p * d[i];

		if (p > max) {
			max = p;
			maxi = i + 1;
		}
	}


	printf("%d\n", maxi);

	return 0;
}