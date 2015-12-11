#include <stdio.h>
#include <string.h>

short check(int d) {
	char s[7];
	sprintf(s, "%06d", d);
	//printf("%s\n", s);
	
	short s1 = s[0] + s[1] + s[2];
	short s2 = s[3] + s[4] + s[5];
	 
	return (s1 == s2) ? 1 : 0;
}

int main() {		
	freopen("input.txt", "r", stdin);
	short i, cnt;
	scanf("%hd", &cnt);

	int d;
	for (i = 0; i < cnt; i++) {
		scanf("%d", &d);
		printf("%s\n", (check(d - 1) + check(d + 1) == 1) ? "Yes" : "No");
	}
	
	return 0;
}
