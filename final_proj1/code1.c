#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 45


int getnumber(int n);

int main(void)
{
	int arr[7];
	int sizeArr = sizeof(arr) / sizeof(arr[0]);

	srand(time(NULL));

	for (int i = 0; i < sizeArr; i++)
	{
		arr[i] = getnumber(MAX);

		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i = i - 1;
				break;

			}
		}

	}

	printf("�ζ� ��÷ ��ȣ�� ");
	for (int i = 0; i < sizeArr - 1; i++)
		printf("%d ", arr[i]);
	printf("�̰�\n");
	printf("���ʽ� ��ȣ�� %d �Դϴ�.\n", arr[6]);


	return 0;
}



int getnumber(int n) {

	return rand() % MAX + 1;

}