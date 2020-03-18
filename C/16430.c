#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//JJang Sung Won BAEKJOON_16430

int main(void)
{
	int A, B;
	int up, down;

	scanf("%d %d", &A, &B); //input

	//error check
	if (A < 1 || A>9)
		return 0;
	if (B < 1 || B>9)
		return 0;
	if (A >= B)
		return 0;

	up = B - A; //����
	down = B;   //�и�

	if (!(up % 4)) //4�� ���� �� ��
	{
		if (!(down % 4))
		{
			up = up / 4;
			down = down / 4;
		}
	}

	if (!(up % 3)) //3�� ���� �� ��
	{
		if (!(down % 3))
		{
			up = up / 3;
			down = down / 3;
		}
	}
	else if (!(up % 2)) //2�� ���� �� ��
	{
		if (!(down % 2))
		{
			up = up / 2;
			down = down / 2;
		}
	}

	printf("%d %d", up, down);
	return 0;
}