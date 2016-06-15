#include <string.h>

// LINUX
#include <stdio.h>
// WINDOWS
// #include <cstdio>


int main()
{
	freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	char buf[255];
	char *s;

	scanf("%s", buf);
	// printf("%s\n", buf);

	s = buf;
	int len = strlen(buf);
	int i, cnt = 0;

	for (i = 0; i < len - 4; i++) {
		// printf("%s\n", s);
		if (!strncmp(s, "<--<<", 5) || !strncmp(s, ">>-->", 5)) {
			cnt++;
		}

		s++;
	}

	printf("%d\n", cnt);

	return 0;
}
