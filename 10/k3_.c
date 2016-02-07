#include <stdio.h>
#include <math.h>

int a, b, c, d;

int main() {		
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d %d %d %d", &a, &b, &c, &d);

	int x;
	int from = -1000, to = 1000;
	for (x = from; x <= to; x++) {
		if (a*x*x*x + b*x*x + c*x + d == 0) {
			printf("%d ", x);
		}
	}

	return 0;
}
