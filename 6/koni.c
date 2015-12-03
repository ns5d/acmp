#include <stdio.h>
#include <stdlib.h> 

int is_digit(char);
int is_alpha(char);

int main() {
	char s[5];// = "E2-E4";//"C7-D5";
	/**/
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%s", s);
	

	char c0 = is_alpha(s[0]);
	char c1 = is_digit(s[1]);
	char c2 = (s[2] == '-');
	char c3 = is_alpha(s[3]);
	char c4 = is_digit(s[4]);

	int sum = c0 + c1 + c2 + c3 + c4;
	//printf("%d%d%d%d%d", c0, c1, c2, c3, c4);
	
	if (sum == 5) {
		int a = abs(s[0] - s[3]);
		int d = abs(s[1] - s[4]);
		
		if ((a == 2 && d == 1) || (a == 1 && d == 2)) {
			printf("%s", "YES");
		} else {
			printf("%s", "NO");
		}
	} else {
		printf("%s", "ERROR");
	}
	
	
  return 0;
}

int is_digit(char c) {
	if (c >= '1' && c <= '8')
		return 1;

	return 0;
}

int is_alpha(char c) {
	if (c >= 'A' && c <= 'H')
		return 1;

	return 0;
}
