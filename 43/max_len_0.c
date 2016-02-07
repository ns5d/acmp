#include <stdio.h>
#include <string.h>

short max0(char s[], short i) {
	short j = i;
	while (s[i] == '0') {
		i++;
	}

	return i - j;
}

int main() {
	freopen("input.txt", "r", stdin);

	char s[101];
	scanf("%s", s);

	short len = strlen(s);
	short max = 0, i = 0, r;

	while (i + max < len) {
		r = max0(s, i);
		
		if (r > max)
			max = r;

		i += r + 1;	
	}
	
	printf("%hd", max);
	
	return 0;
}

