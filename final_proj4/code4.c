#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)


void reverse(char* line);

int main(void)
{
	char line[81];
	char* delimiter = " ";
	char* pword;

	printf("한줄의문장을입력하세요. -> \n");
	gets(line);

	printf("\n");
	printf("입력한각각의단어를반대로출력합니다. -> \n");

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
