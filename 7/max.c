#include <stdio.h>
#include <string.h>

int max_str(char *s1, char *s2, char *max) {
	if (strlen(s1) > strlen(s2)) {
        strcpy(max, s1);
        return 1;
    } else if (strlen(s1) < strlen(s2)) {
        strcpy(max, s2);
        return -1;
    }
	
	char *ps1 = s1;
	char *ps2 = s2;

	//printf("\ns[%s|%s]", ps1, ps2);
	for (;*s1 == *s2 && *s1 != '\0'; *s1++, *s2++) {
		//printf("\nfor[%c|%c]", *s1, *s2);
	}

	//printf("\nc[%c><%c]", *s1, *s2);
	// >=
	if (*s1 == '\0' || *s1 > *s2) {
		strcpy(max, ps1);
		return 2;
	}

	// >
	strcpy(max, ps2);
	return -3;
}

int main() {
	const char N = 126;
	char s0[N], s1[N], s2[N], max[N];
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%s %s %s", s0, s1, s2);
	//printf("|%s|%s|%s|", s0, s1, s2);
	//int r = max_str("11256", "1124", max);
	//printf("\n%d:%s\n", r, max);
	/**/
	if (max_str(s0, s1, max) > 0)
		max_str(s0, s2, max);
	else
		max_str(s1, s2, max);
	
	//printf("\nmax = |%s|", max);
	printf("%s", max);

	return 0;
}
