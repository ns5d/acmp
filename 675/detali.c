#include <stdio.h>

short dcnt(char *s) {
	short cnt = 0;

	while (*s) {
		if (*s == '.')
			cnt++;
		//printf("%c", *s);
		s++;
	}
 
	return cnt;
}

int main() {
	freopen("input.txt", "r", stdin);
	
	short n, m;
	scanf("%hd %hd", &n, &m);	
	
	short i;
	char s[m];

	short min = m;
	short tmp;

	i = 0;
	for (i = 0; i < n; i++) {
		scanf("%s", s);
		tmp = dcnt(s);
		if (tmp < min)
			min = tmp;

		if (min == 0)
			break;
	}

	printf("%hd\n", min);

	return 0;
}
