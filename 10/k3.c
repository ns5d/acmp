#include <stdio.h>
 
int main() {        
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
 
	long long r, a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
 
    long long x, from = -100, to = 100;
     
    for (x = from; x <= to; x++) {
        r = a*x*x*x + b*x*x + c*x + d;
        //printf("%ld : %d*x^3 + %d*x^2 + %d*x + %d = %lld\n", x, a, b, c, d, r);
        if (r == 0)
			printf("%lld ", x);
    }
 
    return 0;
}
