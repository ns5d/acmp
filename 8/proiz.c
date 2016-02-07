#include <stdio.h>

int main() {
	int a, b, c;
	/**/
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d %d %d", &a, &b, &c);
	printf("%d %d %d", a, b, c);
	
	printf("%s", (a * b == c) ? "YES": "NO");
  return 0;
}

