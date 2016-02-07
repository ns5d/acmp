#include <stdio.h>
 
int main() {        
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
 
	short n, i, max = 0;
	scanf("%hd", &n);

	short s[n + 2];
	for (i = 0; i < n; i++)
		scanf("%hd", &s[i]);

	s[n] = s[0];
	s[n + 1] = s[1];

	for (i = 0; i < n; i++) {
		short r = s[i] + s[i + 1] + s[i + 2];
		//printf("%hd + %hd + %hd = %hd\n", s[i], s[i + 1], s[i + 2], r);
		if (r > max)
			max = r;
	}	

	printf("%hd", max);
 
    return 0;
}
