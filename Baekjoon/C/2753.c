#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//JJangSungWon BaekJoon_2753
int main(void)
{
	int year;

	scanf("%d", &year);

	if (year < 1 || year>4000)
		return 0;

	if ((year % 4) == 0) //4�� ���
	{
		if (year % 100) { //100�� ����� �ƴ� ��
			printf("1");
			return 0;
		}
		else if ((year % 400) == 0) //400�� ����� ��
		{
			printf("1");
			return 0;
		}
	}

	printf("0");
	//system("pause");
	return 0;
}