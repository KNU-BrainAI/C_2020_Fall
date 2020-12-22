#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {


	int year = 0, month = 0, maxDay = 30, validinput = 0;
	printf("년과 월을 다음과 같이 입력하면 그 달의 말일을 알려드립니다.\n");
	printf("2003 2 : 입력> ");
	scanf("%d %d", &year, &month);

	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		maxDay = 31;
		validinput = 1;
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		maxDay = 30;
		validinput = 1;
		break;

	case 2:
		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
			maxDay = 29;
		else
			maxDay = 28;
		validinput = 1;
		break;

	default:
		validinput = 0;
	}

	if (validinput)
		printf("%d년 %d월의 말일은 %d일입니다.\n", year, month, maxDay);
	else
		printf("잘못된 월을 입력하였습니다.\n");



	return 0;
}