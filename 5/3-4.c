#include <stdio.h>

int main() {
	int cnt, i3 = 0, i4 = 0;
	int arr3[101], arr4[101];
	/**/
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d", &cnt);

	int i, d;
	for (i = 0; i < cnt; i++) {
		scanf("%d", &d);
		if ((d % 2) == 1) {
			arr3[i3] = d;
			i3++;
		} else {
			arr4[i4] = d;
			i4++;
		}
		
	}

	for (i = 0; i < i3; i++)
		printf("%d%s", arr3[i], (i < i3 - 1) ? " " : "\n");

	for (i = 0; i < i4; i++)
		printf("%d%s", arr4[i], (i < i4 - 1) ? " " : "\n");

	printf("%s", (i4 >= i3) ? "YES": "NO");
	
  return 0;
}
