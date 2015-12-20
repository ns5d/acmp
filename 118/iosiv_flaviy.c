#include <stdio.h>
#define KILL -1

void show(short s[]) {
	short i;
	for (i = 1; i <= s[0]; i++)
		printf("%hd ", s[i]);
	printf("\n");
}


int main() {		
	freopen("input.txt", "r", stdin);

	short n, k;
	scanf("%hd %hd", &n, &k);

	short s[n + 1];
	short i;

	s[0] = n;
	for (i = 1; i <= n; i++) {
		s[i] = i;
	}

	short lost = n;
	short kk = k;
	
	while (lost > 1) {
		if (i == n + 1)
			i = 1;

		if (s[i] != KILL)
			kk--;

		if (kk == 0) {
			kk = k;
			s[i] = KILL;
			lost--;

			//show(s);
		}

		i++;
	}

	for (i = 1; i <= s[0]; i++)
		if (s[i] != KILL) {
			printf("%hd", s[i]);
			break;
		}
	
	return 0;
}
	
 
