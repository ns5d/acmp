#include <string.h>

// LINUX
#include <stdio.h>
// WINDOWS
// #include <cstdio>


int main()
{
	freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int n;
	char word[7];
	scanf("%s\n%d", word, &n);

	printf("%s\n", (!strcmp(word, "School") && (n % 2 == 0)) ? "No" : "Yes");

	return 0;
}
