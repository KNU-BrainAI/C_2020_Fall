#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)


void reverse(char* line);

int main(void)
{
	char line[81];
	char* delimiter = " ";
	char* pword;

	printf("�����ǹ������Է��ϼ���. -> \n");
	gets(line);

	printf("\n");
	printf("�Է��Ѱ����Ǵܾ�ݴ������մϴ�. -> \n");

	pword = strtok(line, delimiter);
	while (pword != NULL) {
		reverse(pword);
		putchar(' ');
		pword = strtok(NULL, delimiter);
	}
	printf("\n");

	return 0;
}

void reverse(char* line) {
	char ch = *line;

	if (ch) {
		reverse(++line);
		printf("%c", ch);
	}
}
