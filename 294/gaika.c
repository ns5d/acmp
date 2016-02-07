#include <stdio.h>
#define ABS(A) (A) < 0 ? (-A) : (A)

/*25700 35 52
23200 10 24 => 623620*/

long cnt(int k, int l) {
	return l * k / 100;
}

int main() {
    freopen("input.txt", "r", stdin);

	int k1, l1, m1, k2, l2, m2;
	scanf("%d %d %d", &k1, &l1, &m1);
    scanf("%d %d %d", &k2, &l2, &m2);

	/* bad */
	int b1 = k1 * l1 / 100;
	int g1 = k2 * l2 / 100;

	/* good */
	int b2 = k1 - b1;
	int g2 = k2 - g1;

	long s = 0;
	if (b2 > g2)
		s = (b2 - g2) * m1;
	if (b2 < g2)
		s = (g2 - b2) * m2;
		
	/*printf("+%d\n", b1 * m1);
	printf("+%d\n", g1 * m2);
	printf("+%ld\n", s);*/
	
	
	long sum = (b1 * m1) + (g1 * m2) + s;
	printf("%ld", sum);
   
    return 0;
}
