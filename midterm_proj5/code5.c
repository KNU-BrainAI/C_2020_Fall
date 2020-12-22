#include <stdio.h>
#pragma warning(disable:4996)


int main(void)
{


	int row = 10;
	int out = 2;

	for (int i = 0; i < row; i++)
	{
		int c;
		for (c = 0; c <= (row - i); c++)
			printf("  ");

		int divider;
		for (c = 0; c <= i; c++)
		{
			while (1) {
				for (divider = 2; divider <= out - 1; divider++)
				{
					if (out % divider == 0)
						break;
				}
				if (out++ == divider)
				{
					printf("%3d ", out - 1);
					break;
				}
			}
		}
		printf("\n");
	}

	return 0;
}