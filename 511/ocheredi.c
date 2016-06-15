#include <stdio.h>
#include <string.h>

int main() {
	freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int num;
	scanf("%d", &num);

	// num = 20;
	int maxmin1 = (20 - 8) * 60;
	int maxmin2 = (20 - 8) * 60 - 5;
	int maxhuman1 = maxmin1 / 10;
	int maxhuman2 = maxmin2 / 10;

	int min;

	if (num > (maxhuman1 + maxhuman2)) {
		printf("NO\n");
	} else {
		min = (num - 1) * 5;
		printf("%d %d\n", min / 60, min % 60);
	}

	return 0;
}