#include <stdio.h>

void swap(char n[], short i, short j) {
	char t;
	t = n[i];
	n[i] = n[j];
	n[j] = t;
}

int main() {		
	freopen("input.txt", "r", stdin);
	char n[4] = "100";
	char s[50 + 1];
	
	scanf("%s", s);
 
	short i = 0;	
	while (s[i] != '\0') {		
		if (s[i] == 'A')
			swap(n, 0, 1);
		if (s[i] == 'B')
			swap(n, 1, 2);
		if (s[i] == 'C')
			swap(n, 2, 0);
		 
		i++;
	}
	//printf("%s\n", n);
	printf("%hd", (n[0] == '1') ? 1 : (n[1] == '1') ? 2 : 3);
	
	return 0;
}
	
 
