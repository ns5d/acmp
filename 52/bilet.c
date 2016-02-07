#include <stdio.h>
#include <string.h>
 

int main() {		
	freopen("input.txt", "r", stdin);

	char s[7];
	scanf("%s", s);
	
	short s1, s2, i, n;
	s1 = s2 = i = 0;
	n = strlen(s) / 2;
	
	while (s[i]) {
		(i < n) ? (s1 += s[i] - '0') : (s2 += s[i] - '0');
		i++;
	}

	printf("%s", (s1 == s2 || (s1 + s2 <= 1)) ? "YES" : "NO");
	
	return 0;
}


