#include <stdio.h>

int nok(int a, int b) {
	int m = a * b;
	while (a != 0 && b != 0) {
		if (a > b)
			a %= b;
		else
			b %= a;
	}
	
	return m / (a + b);
}

int main() {		
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", nok(a, b));

	return 0;
}

