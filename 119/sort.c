#include <stdio.h>
#include <string.h>

struct arr {
    char name[10];
    int time;
};

void swap(struct arr *a, struct arr *b) {
	struct arr t;
	t = *a;
	*a = *b;
	*b = t;	
}

int main() {
	freopen("input.txt", "r", stdin);
	short n, i, j;
	scanf("%hd", &n);

	struct arr a[n + 1];
	short h, m, s;

	for (i = 0; i < n; i++) {
		scanf("%hd %hd %hd", &h, &m, &s);
		sprintf(a[i].name, "%hd %hd %hd", h, m, s);
		a[i].time = 60 * 60 * h + 60 * m + s;
	}

	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (a[i].time > a[j].time)
				swap(&a[i], &a[j]);

	for (i = 0; i < n; i++)
		printf("%s\n", a[i].name);

	return 0;
}
