#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 100

void reverse(char s[]) { 
	int c, i, j; 

	for (i=0, j = strlen(s)-1; i < j;i++, j--) { 
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

void f(int k, int n, char r[]) {
	int cnt = n + 1;
	char arr[cnt][N];
	int i, j, max;
	//int l;
	/*
	for (i = 1; i < cnt; i++) {
		arr[i][0] = '0';
		arr[i][1] = '\0';
	}
	*/
	arr[0][0] = '1';
	arr[0][1] = '\0';
	
	for (i = 1; i < cnt; i++) {
		arr[i][0] = '0';
		arr[i][1] = '\0';
		
		max = 0;
		if (i - k > 0)
			max = i - k;
		//printf("[%d->%d)\t", max, i);

		for (j = max; j < i; j++) {
			reverse(arr[i]);
			reverse(arr[j]);
			sum(arr[i], arr[j], arr[i]);
			reverse(arr[i]);
			reverse(arr[j]);
		}
		
		/*for (l = 0; l < cnt; l++)
			printf("%s%s", arr[l], (l == 0) ? "| " : ", ");
		printf("\n");*/
	}

	sprintf(r, "%s", arr[n]);
	return;
}


int main() {		
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int k, n;
	char r[N];
	
	scanf("%d %d", &k, &n);
	f(k, n, r);
	printf("%s", r);

	return 0;
}
