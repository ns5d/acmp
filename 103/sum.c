#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char s[]) { 
	int c, i, j; 

	for (i=0, j = strlen(s) - 1; i < j; i++, j--) { 
		c = s[i]; 
		s[i] = s[j]; 
		s[j] = c; 
	}
} 

void sum(char s1[], char s2[], char r[]) {
	int i = 0;
	unsigned char a = 0;
	
	while (*s1 && *s2) {
		unsigned char s = *s1 - '0' + *s2 - '0';
		r[i] = '0' + ((s + a) % 10);
		a = (s + a) / 10;
		
		//printf("%c + %c = %c [%c]\n", *s1, *s2, r[i], '0' + a);
		i++;
		*s1++;
		*s2++;
	}

	while (*s1) {
		if (a != 0) {
			unsigned char s = *s1 - '0';
			r[i] = '0' + ((s + a) % 10);
			a = (s + a) / 10;
		} else
			r[i] = *s1;

		i++;
		*s1++;
	}

	while (*s2) {
		if (a != 0) {
			unsigned char s = *s2 - '0';
			r[i] = '0' + ((s + a) % 10);
			a = (s + a) / 10;
		} else
			r[i] = *s2;

		i++;
		*s2++;
	}

	if (a != 0) {
		r[i] = '0' + a;
		i++;
	}
	
	r[i] = '\0';
}


int main() {
	int N = 101;
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//char d1[N];
	//char d2[N];
	//scanf("%s %s", d1, d2);

	char d1[] = "123";
	char d2[] = "234";
	char r[] = "123456";

	reverse(d1);
	reverse(d2);
	sum(d1, d2, r);
	reverse(d1);
	reverse(d2);
	reverse(r);
	printf("%s|%s|%s", d1, d2, r);	 
	
	return 0;
}
