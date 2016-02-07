#include <stdio.h>
#include <string.h>

short int has_c(char *s, char c) {
	short int cnt = 0;
	short int i = 0;
	while (s[i] != '\0') {
		if (s[i] == c) {
			cnt++;
			break;
		}
		i++;
	}

	return cnt;
}

int main() {
	char s[2][5];
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    scanf("%s %s", s[0], s[1]);
    //printf("%s-%s", s[0], s[1]);

	short int i = 0, k = 0, b = 0;
	while(s[0][i] != '\0') {
		if (s[0][i] == s[1][i])
			b++;
		 
		k += has_c(s[0], s[1][i]);			
		
		i++;
	}

	printf("%hd %hd", b, k - b);

	return 0;
}

