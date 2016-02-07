#include <stdio.h>
#include <math.h> 
#define cmp(a, b) (a % b == 0) ? 1 : 0
//10 5 90 31 => -1
 
int main() {
    freopen("input.txt", "r", stdin);
 
    short a, b, c, d;
    scanf("%hd %hd %hd %hd", &a, &b, &c, &d);
 
    double s = 1.0 / a + 1.0 / b + 1.0 / c;
    short r = -1;
     
    //printf("%f\n", s);
    //   1    -  ?
    // (1-s)  -  d
     
    if (s < 1)
        r = (short) round((d * 1.0) / (1.0 - s));

	float t = ((1.0 - s) * r);
	if (round(t) - t > 0.01) // ошибка округления
		r = -1;

    if (!(cmp(r, a) && cmp(r, b) && cmp(r, c)))
        r = -1;
 
    printf("%hd", r);
   
    return 0;
}
