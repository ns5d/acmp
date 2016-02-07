#include <stdio.h>
#define NUM 10
// A4 E5 B2 - 32
// A3 D2 H8 - 33

void init(char d[NUM][NUM]) {
	short i, j;
	for (i = 1; i <= 8; i++)
		for (j = 1; j <= 8; j++)
			d[i][j] = '0';
}

void show(char d[NUM][NUM]) {
	short i, j;
	printf("\n");
	for (i = 1; i <= 8; i++) {
		for (j = 1; j <= 8; j++) {
			printf("%2c", d[i][j]);
		}
		printf("\n");
	}
}

void set(char d[NUM][NUM], short r, short c, char name) {
	//printf("\n%c>[%d; %d]", name, r, c);
	if (r >= 1 && r <= 8 && c >= 1 && c <= 8)
		if (d[r][c] == '0')
			d[r][c] = name;
}

void row(char d[NUM][NUM], short r) {
	short i;
	for (i = 0; i <= 8; i++)
		set(d, r, i, 'x');
}

void col(char d[NUM][NUM], short c) {
	short i;
	for (i = 0; i <= 8; i++)
		set(d, i, c, 'x');
}

void koni (char d[NUM][NUM], short r, short c) {
	short rc[8][2] = {
			{-1, -2}, {1, -2}, {-2, -1}, {2, -1},
			{-2, 1}, {2, 1}, {-1, 2}, {1, 2}
		};

	short i;
	for (i = 0; i < 8; i++) {
		short rr = r + rc[i][0];
		short cc = c + rc[i][1];
		//printf("%d|%d\n", rr, cc);
		set(d, rr, cc, 'x');
	}
	
}

void diag(char d[NUM][NUM], short r, short c) {
	short rr = r;
	short cc = c;

	// glavnaya diag
	while (r > 0 && c > 0) {
		set(d, r, c, 'x');
		r--;
		c--;
	}

	r = rr;
	c = cc;
	while (r < 9 && c < 9) {
		set(d, r, c, 'x');
		r++;
		c++;
	}

	// pobochnaya diag
	r = rr;
	c = cc;
	while (r > 0 && c < 9) {
		set(d, r, c, 'x');
		r--;
		c++;
	}

	r = rr;
	c = cc;
	while (r < 9 && c > 0) {
		set(d, r, c, 'x');
		r++;
		c--;
	}
}

void get_rc(char s[], int *r, int *c) {
	//printf("%s", s);
	*r = s[1] - '0';
	*c = s[0] - 'A' + 1;
}

short get_cnt(char d[NUM][NUM], char c) {
	short i, j;
	short cnt = 0;
	
	for (i = 1; i <= 8; i++)
		for (j = 1; j <= 8; j++)
			if (d[i][j] == c)
				cnt++;
				
	return cnt;
}

int main() {		
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	char f[3], l[3], k[3];
	scanf("%2s %2s %2s", f, l, k);
	//printf("|%s|%s|%s|\n", f, l, k);

	char d[NUM][NUM];

	init(d);
	//show(d);
	int r, c;
	
	get_rc(f, &r, &c);
	set(d, r, c, 'f');
	get_rc(l, &r, &c);
	set(d, r, c, 'l');
	get_rc(k, &r, &c);
	set(d, r, c, 'k');
	// ferzi
	get_rc(f, &r, &c);
	row(d, r);
	col(d, c);
	diag(d, r, c);
	// ladiya
	get_rc(l, &r, &c);	
	row(d, r);
	col(d, c);
	//koni
	get_rc(k, &r, &c);	
	koni(d, r, c);
	
	//show(d);
	printf("%d", get_cnt(d, 'x'));
	
	return 0;
}
