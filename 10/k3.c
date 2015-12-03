#include <stdio.h>
#include <math.h>

int a, b, c, d;

int koren1();

int main() {		
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d %d %d %d", &a, &b, &c, &d);

	int k1 = koren1();
	 
	b = k1 * a + b;
	c = k1 * b + c;
	d = k1 * c + d;

	int D = b*b - 4*a*c;

	int k2 = (-b + sqrt(D)) / (2 * a);
	int k3 = (-b - sqrt(D)) / (2 * a);
	
	//printf("k = %d; %d; %d\n", k1, k2, k3);

	int n = 3;
	int arr[n];
	arr[0] = k1;
	arr[1] = k2;
	arr[2] = k3;

	int i, j;
	
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (arr[i] > arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
 
	int narr[n];
	j = 0;
	for (i = 0; i < n; i++) {
		if (arr[i] != arr[i-1])
			narr[j++] = arr[i];
	}
	
	for (i = 0; i < j; i++)
		printf("%d%s", narr[i], (i < j - 1) ? " " : "");
 
	return 0;
}

int koren1() {
	if (d == 0)
		return 0;

	int x;
	for (x = d; x > -10000; x--) {
		if (a*x*x*x + b*x*x + c*x + d == 0)
			return x;
	}

	return 0;
}
