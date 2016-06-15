#include <stdio.h>
#include <string.h>


int main() {
	freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int i, num, cnt = 0;
	char s[40];

	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		scanf("%s", s);

		if (s[0] == s[3]) {
			cnt++;
		}
	}

	printf("%d\n", cnt);

	return 0;
}