#define _CRT_SECURE_NO_WARNINGS

//Baek_Joon_15552
#include<stdio.h>

int main(void)
{
	int n;
	register i; //�ӵ������ ���ؼ� register ����
	int n1, n2;

	//input
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &n1, &n2);
		printf("%d", n1 + n2);

		if (i + 1 < n)
			puts("");
	}

	return 0;
}