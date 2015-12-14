#include <stdio.h>

short cnt(short s[], short i, short j) {
	short t;
	for (t = i; t < j; t++) {
		//printf("%hd; ", s[t]);
		if (s[t] <= 0)
			break;
	}

	return t - i;
}

int main() {
    freopen("input.txt", "r", stdin);
	short n;
	scanf("%hd", &n);

	short s[n];
	short i = 0;

	while (i < n) {
		scanf("%hd", &s[i]);
		i++;
	}

	short max = 0;
	i = 0;
	while (i < n) {
		short c = cnt(s, i, n);
		if (c > max)
			max = c;
		i++;		
	}
	
	printf("%hd", max);
   
    return 0;
}
