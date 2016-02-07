#include <stdio.h>

void sort(short *b, short size) {
	short i, j;
	for (i = 0; i < size - 1; i++)
		for (j = i + 1; j < size; j++)
			if (b[i] > b[j]) {
				short t = b[i];
				b[i] = b[j];
				b[j] = t;
			}
}

short cmp(short *b1, short *b2) {
	if (b1[0] == b2[0] && b1[1] == b2[1] && b1[2] == b2[2])
		return 0;
	if (b1[0] >= b2[0] && b1[1] >= b2[1] && b1[2] >= b2[2])
		return -1;
	if (b1[0] <= b2[0] && b1[1] <= b2[1] && b1[2] <= b2[2])
		return 1;

	return 2;
}

int main() {		
	freopen("input.txt", "r", stdin);
	short b1[4], b2[4];

	short i;
	for (i = 0; i < 3; i++)
		scanf("%hd", &b1[i]);
	for (i = 0; i < 3; i++)
		scanf("%hd", &b2[i]);

	sort(b1, 3);	
	sort(b2, 3);

	short c = cmp(b1, b2);
	if (c == -1) {
		printf("The first box is larger than the second one");
	} else if (c == 0) {
		printf("Boxes are equal");
	} else if (c == 1) {
		printf("The first box is smaller than the second one");
	} else {
		printf("Boxes are incomparable");
	}	
	
	return 0;
}
	
