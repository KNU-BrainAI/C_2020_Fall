#include <stdio.h>
#pragma warning(disable:4996)


int main(void) {

	int i = 0, sum = 0, odd_sum = 0, count = 0, number, avg;


	printf("���ڸ� �Է��ϼ���:");
	scanf("%d", &number);


	do {
		sum += ++i;
		if (i % 2)
		{
			odd_sum += i;
			count++;
		}

	} while (sum < number);

	if (i % 2) // do while ������ loop�� i�� Ȧ���� ��
	{
		count = count - 1;
		odd_sum = odd_sum - i;
	}

	avg = odd_sum / count;

	printf("\n1���� n������ �� �߿��� %d�� ���� �ʴ� ���� ū ���� ���մϴ�\n", number);
	printf("\n1���� %d������ ���� %d�Դϴ�.\n", i - 1, sum - i);
	printf("1���� %d������ ���� �� Ȧ������ ������ %d�Դϴ�.\n", i - 1, count);
	printf("1���� %d������ ���� �� Ȧ������ ���� %d�Դϴ�.\n", i - 1, odd_sum);
	printf("1���� %d������ ���� �� Ȧ������ ����� %d�Դϴ�.\n", i - 1, avg);




	return 0;


}