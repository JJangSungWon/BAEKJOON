#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//JJangSungWon BaekJoon_1075
int digit(int n);

int main(void)
{
	int N, F,copy,i;
	int num, sub, count=0;

	scanf("%d", &N);
	scanf("%d", &F);

	copy = N; //���纻

	sub = N % 10; //1���ڸ�
	copy = copy - sub; //1���ڸ� 0���� �����

	sub = copy % 100; //10���ڸ�
	copy = copy - sub; //1���ڸ�, 10���ڸ� 0���� ���� ����


	for (i = copy; ; i++) //0���� ���� �� for�� ����
	{
		if (i%F == 0) //������������ ����
			break;
		else
			count++;
	}
	
	if (count < 10)
		printf("0%d", count);
	else
		printf("%d", count);
	
	return 0;
}