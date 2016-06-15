// LINUX
#include <stdio.h>
// WINDOWS
// #include <cstdio>

#define MAX_PRIME_ARR 1000
#define MAX_MN_ARR	  100

int arr_prime[MAX_PRIME_ARR + 1] = {0};


// Решешто Эратосфена
void set_prime()
{
	int i, j;

	arr_prime[0] = arr_prime[1] = 1;

	for (i = 2; i <= MAX_PRIME_ARR; i++) {
		if (!arr_prime[i]) {
			if (i * i <= MAX_PRIME_ARR) {
				for (j = i * i; j <= MAX_PRIME_ARR; j += i) {
					arr_prime[j] = 1;
				}
			}
		}
	}

	/*for (i = 0; i < MAX_PRIME_ARR; i++) {
		printf("%lld\n", arr_prime[i]);
	}*/
}


// Простое ли число
short is_prime(long long int n)
{
	long long int i;

	if (n <= MAX_PRIME_ARR) {
		return !arr_prime[(int) n];
	}

	if (n % 2 == 0) {
		return 0;
	}

	for (i = 3; i * i <= n; i += 2) {
		if (n % i == 0) {
			return 0;
		}
	}

	return 1;
}


// Следующие простое число
long long int next_prime(long long int n)
{
	n++;

	while (!is_prime(n)) {
		n++;
	}

	return n;
}

// Возвращает количество простых множителей и массив в параметре
int get_prime_arr(long long int arr[MAX_MN_ARR], long long int num)
{
	long long prime = 2;
	int cnt = 0;

	while (num != 1) {
		// printf("prime = %lld\n", prime);
		// printf("num = %lld\n", num);

		if (is_prime(num)) {
			arr[cnt++] = num;
			break;
		}

		if (num % prime == 0) {
			num /= prime;
			arr[cnt++] = prime;
		} else {
			prime = next_prime(prime);
		}
	}

	return cnt;
}


long long int test(long long int n, long long int m)
{
	long long int i, j, cnt, ncnt, mcnt;
	long long int narr[MAX_MN_ARR], marr[MAX_MN_ARR];

	ncnt = get_prime_arr(narr, n);
	mcnt = get_prime_arr(marr, m);

	// зануляем повторяющиеся множетили двух массивов
	for (i = 0; i < ncnt; i++) {
		for (j = 0; j < mcnt; j++) {
			if (narr[i] && marr[j] && (narr[i] == marr[j])) {
				narr[i] = 0;
				marr[j] = 0;
			}
		}
	}

	// подсчитываем уникальные множетили
	cnt = 0;

	for (i = 0; i < ncnt; i++) {
		// printf("%lld\n", narr[i]);
		if (narr[i]) {
			cnt++;
		}
	}

	for (i = 0; i < mcnt; i++) {
		// printf("%lld\n", marr[i]);
		if (marr[i]) {
			cnt++;
		}
	}

	return cnt;
}

int main()
{
	freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	long long int n, m;

	scanf("%lld %lld", &n, &m);

	set_prime();

	/*
	long long int cnt;

	long long int t[][3] = {
		{1434, 1434, 0},
		{2, 36, 3},
		{32768, 3, 16},
		{999634589, 2, 3},
		{999999937, 2, 2},
		{999999981, 2, 4},
		{999999939, 2, 3},
		{2, 999634589, 3}, //(m = 31607*31627)
		{1, 2, 1},
		{3, 5, 2},
		{5, 6, 3}
	};

	int i, j;
	for (i = 0; i < 11; i++) {
		cnt = test(t[i][0], t[i][1]);

		if (cnt != t[i][2]) {
			printf("[e] %lld %lld : %lld [%lld]\n", t[i][0], t[i][1], t[i][2], cnt);
		} else {
			printf("[i] %lld %lld : %lld [%lld]\n", t[i][0], t[i][1], t[i][2], cnt);
		}
	}*/


	printf("%lld\n", test(n, m));

	return 0;
}


