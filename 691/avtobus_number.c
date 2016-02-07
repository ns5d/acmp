#include <stdio.h>

#define is_d(C) ('0' <= (C) && (C) <= '9')
#define is_a(C) (C == 'A' || C == 'B' || C == 'C' || C == 'E' || \
				C == 'H' || C == 'K' || C == 'M' || C == 'O' || \
				C == 'P' || C == 'T' || C == 'X' || C == 'Y')

/*
short is_a(char c) {
	char alpha[] = "ABCEHKMOPTXY";
	short i = 0;
	while (alpha[i] != '\0') {
		if (c == alpha[i])
			return 1;
		i++;
	}
	
	return 0;
}
*/
/*
short is_d(char c) {
	return ('0' <= c && c <= '9') ? 1 : 0;
}*/

short is_number(char number[]) {
	if (number[6] == '\0' && is_a(number[0]) && is_d(number[1]) && is_d(number[2])
		&& is_d(number[3]) && is_a(number[4]) && is_a(number[5]))
		return 1;

	return 0;
}

int main() {        
    freopen("input.txt", "r", stdin);

	short cnt;
	scanf("%hd", &cnt);

	char number[301];
	while(cnt-- != 0) {
		scanf("%s", number);
		printf("%s\n", is_number(number) ? "Yes" : "No");
	}

    return 0;
}
