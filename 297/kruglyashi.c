#include <stdio.h>

char d[10] = {'1', '0', '0', '0', '0', '0', '1', '0', '2', '1'};

short count(char c) {
	return d[c - '0'] - '0';
}

int main() {		
	freopen("input.txt", "r", stdin);

	char s[100 + 1];
	scanf("%s", s);

	short i, sum;
	i = sum = 0;

	while (s[i] != '\0') {
		sum += count(s[i]);
		i++;
	}

	printf("%hd", sum);
	
	return 0;
}


