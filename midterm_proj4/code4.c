#include <stdio.h>
#pragma warning(disable:4996)


int main(void)
{

	int i, j;
	int n;

	do {

		printf("행의 수를 입력하세요:");
		scanf("%d", &n);

	} while (n < 3 || (n % 2 == 0));


	for (i = 1; i <= n / 2 + 1; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		for (j = n - 1; j >= 2 * i - 1; j--) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (i = 1; i <= n; i++) {
		for (j = n / 2; j >= i; j--) {
			printf("*");
		}

		for (j = 1; j <= i * 2; j++) {
			printf(" ");
		}
		for (j = n / 2; j >= i; j--) {
			printf("*");
		}

		printf("\n");
	}



	return 0;

}