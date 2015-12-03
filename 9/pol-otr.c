#include <stdio.h>

int main() {
	int cnt;
	int maxi = 0, mini = 0;
	short int arr[1000];
	int sp = 0, pc = 1;
	/**/
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d", &cnt);

	int i;
	for (i = 0; i < cnt; i++) {
		scanf("%hd", &arr[i]);
		if (arr[i] > arr[maxi])
			maxi = i;
		if (arr[i] < arr[mini])
			mini = i;
		if (arr[i] > 0)
			sp += arr[i];
	}

	//printf("min = %hd\n", arr[mini]);
	//printf("max = %hd\n", arr[maxi]);

	int from = mini;
	int to = maxi;

	if (mini > maxi) {
		from = maxi;
		to = mini;
	}

	for (i = from + 1; i < to; i++) {
		pc *= arr[i];
	}

	printf("%d %d", sp, pc);
 
	return 0;
}

