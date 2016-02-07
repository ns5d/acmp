#include <stdio.h>

int main() {
	int n;
	/**/
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d", &n);
	
	char sign = 1;
	if (n <= 0) {
		n *= -1;
		sign = -1;
	}
	
	int sum = (1 + n) * n / 2;

	if (sign == -1) {
		sum--;
		sum *= -1;
	}
	
	printf("%d", sum);
	
  return 0;
}
