#include <stdio.h>
#include <string.h>
#define MAX 51

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char s[4][MAX], tmp[MAX];
	short i, j;
	for (i = 0; i < 4; i++) {
		//fgets (s[i], sizeof(char) * MAX, stdin);
		scanf("%[^\n]%*c", s[i]);
		//printf("%s\n", s[i]);
	}

	// sort line from 1 to 3 (without 0)
	for (i = 1; i < 3; i++)
		for (j = i + 1; j < 4; j++) {
			if (strcmp(s[i], s[j]) > 0) { // swap
				strcpy(tmp, s[i]);
				strcpy(s[i], s[j]);
				strcpy(s[j], tmp);
			}
		}
		
	printf("%s: %s, %s, %s", s[0], s[1], s[2], s[3]);
	
	return 0;
}
