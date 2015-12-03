#include <stdio.h>

int main() {
	int n;
	/**/
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d", &n);
	
	printf("%d9%d", n, 9 - n);
	
  return 0;
}
