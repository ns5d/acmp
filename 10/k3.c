#include <stdio.h>
 
int main() {        
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
 
	double r, a, b, c, d;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
 
    long x, from = -100, to = 100;
     
    for (x = from; x <= to; x++) {
        r = a*x*x*x + b*x*x + c*x + d;
        //printf("%ld : %.0lf*x^3 + %.0lf*x^2 + %.0lf*x + %.0lf = %.0lf\n", x, a, b, c, d, r);
        if (r == 0)
			printf("%ld ", x);
    }
 
    return 0;
}
