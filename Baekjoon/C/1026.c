#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>    // qsort �Լ��� ����� ��� ����

//JJang Sung Won BaekJoon_1026
int compare(const void *a, const void *b)    // �������� �� �Լ� ����
{
	int num1 = *(int *)a;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������
	int num2 = *(int *)b;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������

	if (num1 < num2)    // a�� b���� ���� ����
		return -1;      // -1 ��ȯ

	if (num1 > num2)    // a�� b���� Ŭ ����
		return 1;       // 1 ��ȯ

	return 0;    // a�� b�� ���� ���� 0 ��ȯ
}

int main()
{
	int *a, *b, *copy,result=0;
	int N,i,j,temp;

	scanf("%d", &N);

	a = (int*)malloc(sizeof(int) * N);
	b = (int*)malloc(sizeof(int) * N);
	copy = (int*)malloc(sizeof(int) * N);

	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);

	for (i = 0; i < N; i++)
		scanf("%d", &b[i]);

	// ������ �迭, ��� ����, ��� ũ��, �� �Լ��� �־���
	//qsort(a, sizeof(a) / sizeof(int), sizeof(int), compare);
	//�̹� ���ĵ� �迭�� �����ϴ��� scanf �Է��ϸ� ������ �ȵȴ�..

	for (i = 0; i < N; i++)
		copy[i] = b[i];

	for (i = 0; i < N; i++)
	{
		for (j = i; j < N; j++)
		{
			if(copy[i] < copy[j])
			{
				temp = copy[i];
				copy[i] = copy[j];
				copy[j] = temp;
			}
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for (i = 0; i < N; i++)
		result += (a[i] * copy[i]);

	printf("%d",result);

	return 0;
}