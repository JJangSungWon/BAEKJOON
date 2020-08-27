#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
/*
	baekjoon_1712
	github : JJANGSUNGWON
	A : ���� ���, B : ���� ���, C : ��Ʈ�� ����
	�� ����(�Ǹź��)�� �� ���(������� + �������)���� �������� ������ ���.
	
	1. ���� ���� ��Ʈ�� ������ ���̸� ���Ѵ�.
	2. ���� ��� / ���̸� �̿��ؼ� ����� ���Ѵ�.
*/

int main(void)
{
	int A, B, C;
	int difference;
	int count = 0;
	scanf("%d %d %d", &A, &B, &C);

	difference = C - B;

	if (difference > A)
		printf("%d", 1);
	else if (B == C)
		printf("%d", -1);
	else {
		if (!A % difference)
			count = A / difference;
		else
			count = A / difference + 1;

		if (count < 0)
			printf("%d", -1);
		else
			printf("%d", count);
	}

	return 0;
}