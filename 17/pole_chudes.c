#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int f(int arr[], int cnt, int s) {
	int i, j;
	//printf("\ns=%d\n", s);

	int c = cnt / s;

	for (i = 1; i <= s; i++) {
		for (j = 2; j <= c; j++) {
			//printf("%d vs %d, ", arr[i], arr[(j - 1) * s + i]);
			if (arr[i] != arr[(j - 1) * s + i])
				return 0;
		}
		//printf("\n");
	}

	return 1;
}

int main() {		
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int i, cnt;
	
	scanf("%d", &cnt);
	int arr[cnt];
	int step[cnt / 2];
	step[0] = 0;
	cnt--;

	for (i = 1; i <= cnt; i++) {
		scanf("%d", &arr[i]);
		if (cnt % i == 0) {
			step[++step[0]] = i;
		}
	}

	int rez = cnt;
	for (i = 1; i < step[0]; i++) {
		int r = f(arr, cnt, step[i]);
		//printf("\nr = %d\n", r);
		if (r == 1) {
			rez = step[i];
			break;
		}
	}

	printf("%d", rez);

	return 0;
}
