#include <stdio.h>
#pragma warning(disable:4996)
#define TOTAL_BIT 16


int main(void)
{

	int input;

	do
	{

		printf("정수 또는 0(종료)을 입력: ");
		scanf("%d", &input);
		if (input == 0) break;
		printf("정수 %d의 %d비트 내부값:\n", input, TOTAL_BIT);

		for (int i = TOTAL_BIT - 1; i >= 0; i--)
			printf("%d", input >> i & 1);

		printf("\n");
	} while (input);

	printf("종료합니다.");


	return 0;
}