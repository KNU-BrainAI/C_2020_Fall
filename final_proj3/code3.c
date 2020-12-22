#include <stdio.h>
#pragma warning(disable:4996)

int count;

void fibonacci(int prev_number, int number);

int main(void) {


	int prev_number = 0, number = 1;

	printf("피보나치를 몇 개 구할까요 (3 이상) ? >> ");
	scanf("%d", &count);


	if (count <= 2)
		return 0;

	printf("1 ");
	fibonacci(prev_number, number);

	return 0;
}

void fibonacci(int prev_number, int number)
{

	static int i = 1;

	while (i++ < count)
	{
		int next_num = prev_number + number;
		prev_number = number;
		number = next_num;
		printf("%d ", next_num);
		fibonacci(prev_number, number);

	}



}