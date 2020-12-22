#include <stdio.h>
#pragma warning(disable:4996)


int main(void) {

	int i = 0, sum = 0, odd_sum = 0, count = 0, number, avg;


	printf("숫자를 입력하세요:");
	scanf("%d", &number);


	do {
		sum += ++i;
		if (i % 2)
		{
			odd_sum += i;
			count++;
		}

	} while (sum < number);

	if (i % 2) // do while 마지막 loop의 i가 홀수일 때
	{
		count = count - 1;
		odd_sum = odd_sum - i;
	}

	avg = odd_sum / count;

	printf("\n1부터 n까지의 합 중에서 %d를 넘지 않는 가장 큰 합을 구합니다\n", number);
	printf("\n1부터 %d까지의 합이 %d입니다.\n", i - 1, sum - i);
	printf("1부터 %d까지의 숫자 중 홀수들의 개수는 %d입니다.\n", i - 1, count);
	printf("1부터 %d까지의 숫자 중 홀수들의 합은 %d입니다.\n", i - 1, odd_sum);
	printf("1부터 %d까지의 숫자 중 홀수들의 평균은 %d입니다.\n", i - 1, avg);




	return 0;


}