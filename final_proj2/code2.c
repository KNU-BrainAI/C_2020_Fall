#include <stdio.h>
#pragma warning(disable:4996)
#include <string.h>

void delchar(char str[], char ch);

int main(void) {

	char str[30];
	char ch;

	printf("���ڿ��� �Է��ϼ���: ");
	gets(str);

	printf("���� ���ڸ� �Է��ϼ���:");
	scanf("%c", &ch);
	printf("%c�� ������ �� \n", ch);

	delchar(str, ch);

	printf("%s\n", str);

	return 0;
}

void delchar(char str[], char ch) {

	int len = strlen(str);
	int j = 0;
	char newch;
	char temp[20];

	for (int i = 0; i < len; i++) {
		if (str[i] != ch)
		{
			newch = str[i];
			temp[j] = newch;
			j++;
		}
	}
	temp[j] = '\0';

	strcpy(str, temp);

}