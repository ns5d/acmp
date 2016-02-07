#include <stdio.h>
// 1 1 2 1 => 3
unsigned int cnt(char arr[], unsigned int from) {
	unsigned int i = 0;
	char state = '0';
	//printf("\nfrom %d:\n", from);
	while (arr[from + i + 1] != '\0') {
		if (arr[from + i] == arr[from + i + 1]) {
			state = '1';
			break;
		}
		if (arr[from + i] == '|') {
			state = '2';
			break;
		}
		
		//printf("%c", arr[from + i]);
		i++;
	}

	if (state == '2') {
		return i;
	}	
 
	//printf("[i=%d]", i);
	if (arr[from + i - 1] != arr[from + i]) {
		//printf("%c", arr[from + i]);
		i++;
	}
	
	return i + 1;
}

int main() {		
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	unsigned int n, i;
	short d, last;
	
	scanf("%d", &n);
	//printf("%d\n", n);

	if (n == 1) {
		printf("1");
		return 0;
	}
	
	char arr[n + 1];
	arr[0] = ' ';
	scanf("%hd", &last);
	//printf("%d", last);
	
	for (i = 1; i < n; i++) {
		scanf("%hd", &d);
		if (d > last)
			arr[i] = '/';
		else if (d < last)
			arr[i] = '\\';
		else
			arr[i] = '|';

		//printf("[%c]%d", arr[i], d);
		
		last = d;
	}
	arr[n] = '\0';

	//printf("\n%s", arr);

	unsigned int curr, max = 2;
	for (i = 1; i < n; i++) {
		curr = cnt(arr, i);
		//printf("\tcnt = %d\n", curr);
		if (curr > max)
			max = curr;
	}

	printf("%d", max);

	return 0;
}
