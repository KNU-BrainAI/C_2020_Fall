#include <stdio.h>
#pragma warning(disable:4996)
#define TOTAL_BIT 16


int main(void)
{

	int input;

	do
	{

		printf("���� �Ǵ� 0(����)�� �Է�: ");
		scanf("%d", &input);
		if (input == 0) break;
		printf("���� %d�� %d��Ʈ ���ΰ�:\n", input, TOTAL_BIT);

		for (int i = TOTAL_BIT - 1; i >= 0; i--)
			printf("%d", input >> i & 1);

		printf("\n");
	} while (input);

	printf("�����մϴ�.");


	return 0;
}