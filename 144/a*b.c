#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#include <time.h>

void reverse(char s[]) { 
	int c, i, j; 

	for (i=0, j = strlen(s) - 1; i < j; i++, j--) { 
		c = s[i]; 
		s[i] = s[j]; 
		s[j] = c; 
	}
}

void proiz(char a[], char b[], char c[]) {
	int size_a = strlen(a);
	int size_b = strlen(b);
	int size_c = size_a + size_b + 1;
	
	//printf("%s[%d] * %s[%d] = ?[%d]\n", a, size_a, b, size_b, size_c);
	
	int ia, ib, ic, k;

	for (ic = 0; ic < size_c; ic++)
		c[ic] = '0';
	c[+ic] = '\0';

	for (ia = 0; ia < size_a; ia++) {
		if (a[ic] - '0' != 0)  {
			k = 0;
			//printf("%d\n", a[ia] - '0');
			for (ib = 0; ib < size_b; ib++) {				 
				int d1 = a[ia] - '0';
				int d2 = b[ib] - '0';
				int cc = c[ia + ib] - '0';
				int t = d1 * d2 + cc + k;
				c[ia + ib] = (t % 10) + '0';
				k = t / 10;
				//printf("%d, %d, %d, %d\n", d1, d2, cc, t);
			}
			c[ia + ib] = k + '0';
		}
	}

	// удалим не значащие нули
	for (ic = size_c - 1; ic > 0; ic--) {
		if ((c[ic] - '0') != 0)
			break;
		c[ic] = '\0';
	}
}

int main() {		
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	//char d1[] = "121";
	//char d2[] = "10";
	int N = 101;
	char d1[N];
	char d2[N];
	char rez[N];

	scanf("%s", d2);
	scanf("%s", d1);

	//time_t temp = clock();

	reverse(d1);
	reverse(d2);
	proiz(d1, d2, rez);
	reverse(rez);
	
	printf("%s", rez);

	//printf("[%d]", clock() - temp);
	
	return 0;
}
