#include <stdio.h>

int main() {		
	freopen("input.txt", "r", stdin);
	char c, k[] = "qwertyuiopasdfghjklzxcvbnmq\n";
	scanf("%c", &c);
	short i = 0;
	while (k[i] != '\n' && k[i] != c)
		i++;

	printf("%c", k[i + 1]);
	return 0;
}

