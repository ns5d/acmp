#include <string.h>

// LINUX
#include <stdio.h>
// WINDOWS
// #include <cstdio>

int main()
{
	freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int i, j, cnt, n, m;

	scanf("%d %d", &n, &m);
	// printf("%dx%d\n", n, m);

	char arr[n + 2][m + 2], c;

	for (i = 0; i < n + 2; i++) {
		for (j = 0; j < m + 2; j++) {
			arr[i][j] = '.';
		}
	}

	i = j = 1;

	while (1) {
		scanf("%c ", &c);

		if (c == '*' || c == '.') {
			// printf("%d:%d\n", j, i);

			if ( (i - 1) == m) {
				i = 1;
				j++;
			}

			if ( (j - 1) == n) {
				break;
			}

			arr[j][i] = c;

			i++;
		}
	}

	/*for (i = 0; i < n + 2; i++) {
		for (j = 0; j < m + 2; j++) {
			printf("[%c]", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");*/

	cnt = 0;

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			// printf("[%c", arr[i][j]);

			if (arr[i][j] == '.' &&
			    arr[i + 1][j] == '.' &&
			    arr[i - 1][j] == '.' &&
			    arr[i][j + 1] == '.' &&
			    arr[i][j - 1] == '.') {
				// printf("]");
				cnt++;
			} else {
				// printf("|");
			}
		}

		// printf("\n");
	}

	printf("%d\n", cnt);

	return 0;
}
