#include <stdio.h>
 
int main() {        
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
 
	long int r, a, b, c, d;
    scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
 
    short x, from = -100, to = 100;
    short cnt = 0;
     
    for (x = from; x <= to; x++) {
        r = 1l*a*x*x*x + 1l*b*x*x + 1l*c*x + 1l*d;
        //printf("%hd : %ld*x^3 + %ld*x^2 + %ld*x + %ld = %ld\n", x, a, b, c, d, r);
        if (r == 0) {
            printf("%s%hd", (cnt == 0) ? "" : " ", x);
            cnt++;
        }
    }
 
    return 0;
}
