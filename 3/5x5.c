#include <stdio.h>

int main() {
	int n = 400005;
	/**/
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d", &n);
	
	n /= 10;
	n *= (n + 1);

	if (n > 0)
		printf("%d", n);
		
	printf("%d", 25);
	
  return 0;
}
