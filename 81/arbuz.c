#include <stdio.h>

int main() {		
	freopen("input.txt", "r", stdin);
	int cnt, a, min, max;
	scanf("%d", &cnt);
	min = 30000;
	max = 0;

	while (cnt > 0) {
		scanf("%d", &a);
		if (a > max)
			max = a;
		if (a < min)
			min = a;
		cnt--;
	}

	printf("%d %d", min, max);
	
	return 0;
}
