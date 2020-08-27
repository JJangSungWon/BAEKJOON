#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
	baekjoon_2231
	github : JJANGSUNGWON
	������. ���� ���� �����ڸ� ã��.
	ex) 245 -> 245 + 2 + 4 + 5 = 256 (256�� �����ڴ� 245)
	����� �˰����� �ִ��� �˾Ҵµ� 
	256�� �Է������� 255���� �ϳ��� �������鼭 ���غ��� 245�� ã�� ���� ��������.
*/

int main(void)
{
	int N;
	int M, ans = 0;

	//input
	scanf("%d", &N);

	M = N;

	while (--M > 1)
	{
		int tmp = M;
		int sum = tmp;

		do {
			sum += tmp % 10;
			tmp /= 10;
		} while (tmp > 0);

		if (N == sum)
			ans = M;
	}

	printf("%d", ans);
	
	return 0;
}