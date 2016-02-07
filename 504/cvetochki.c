#include <stdio.h>

void swap(char a[], short i, short j) {
	char c = a[i];
	a[i] = a[j];
	a[j] = c;
}
 

int main() {		
	freopen("input.txt", "r", stdin);

	char s[] = "GCV";
	short i, n;
	scanf("%hd", &n);

	for (i = 0; i < n; i++) {
		swap(s, 1, 2);
		swap(s, 0, 1);
	}
	
	printf("%s", s);
	
	return 0;
}

