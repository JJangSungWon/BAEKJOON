#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//JJang Sung Won BaekJoon_2309

int main(int argc, char *argv[])
{
	int i, j,arr[9];
	int sum = 0;
	int check,temp;
	int c[2];

	for (i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	} //��� ���� ���Ѵ�.

	check = sum - 100; //check�� �� ���� ��������� �ϴ� �͸� ���ϸ� ��.

	for(i=0;i<9;i++)
		for(j=0;j<9;j++)
			if (arr[i] + arr[j] == check)
			{
				c[0] = arr[i];
				c[1] = arr[j];
			}
	//�� �� ã��
	//printf("%d %d\n", c[0], c[1]);
	for (i = 0; i < 9; i++)
	{
		if (arr[i] == c[0] || arr[i] == c[1])
			arr[i] = -1; //-1�� ǥ��.
	}

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (arr[i] != -1 || arr[j] != -1) {
				if (arr[i] < arr[j])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}

	for (i = 0; i < 9; i++) {
		if (arr[i] != -1)
			printf("%d\n", arr[i]);
	}

	//system("pause");
	return 0;
}