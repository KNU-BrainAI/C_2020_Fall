#include <stdio.h>
#pragma warning(disable:4996)

struct person
{
	char name[20];
	char tel[20];
	char address[80];
};
typedef struct person person;

struct employee
{
	person p;
	int number;
	unsigned int salary;
	double incentive;
};
typedef struct employee employee;

int main()
{

	employee emp[3] = { 0 };

	int size = sizeof(emp) / sizeof(emp[0]);

	for (int i = 0; i < size; i++) {
		printf("������ �Է��ϼ��� \n");
		printf("�̸�: ");
		scanf("%s", emp[i].p.name);
		printf("��ȭ��ȣ: ");
		scanf("%s", emp[i].p.tel);
		printf("�ּ�: ");
		scanf("%s", emp[i].p.address);
		printf("���: ");
		scanf("%d", &emp[i].number);
		printf("����: ");
		scanf("%d", &emp[i].salary);
		printf("�μ�Ƽ��: ");
		scanf("%lf", &emp[i].incentive);
	}




	printf("%8s%8s%14s%22s%8s%8s%11s\n", "���", "�� ��", " ��ȭ��ȣ", "  �� ��     ", "  ���� ", "�μ�Ƽ��", "����  ");

	for (int i = 0; i < size; i++) {
		printf("%7d%8s%14s%22s", emp[i].number, emp[i].p.name, emp[i].p.tel, emp[i].p.address);
		printf("%8d%6.0f%%%12.1f\n", emp[i].salary, emp[i].incentive * 100, emp[i].salary * (12 + emp[i].incentive));
	}
	return 0;
}
