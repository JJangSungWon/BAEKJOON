#include<stdio.h>

int check(int n);
// BaekJoon 4948
int main(void)
{
	int n, i, count = 0;
	int flag = 0, flag2 = 1;
	int len = 0;
	int arr[123456];
	//input
	scanf("%d", &n);
	if (n > 123456)//error check
		return 0;

	while (n > 0)//�ڿ����� ���ؼ� �Է¹޴´�.
	{
		if (n > 123456) //error check
			return 0;

		//check;
		for (i = n+1; i <= 2 * n; i++){
			if (check(i)) {
				count++;
			}
		}
		arr[len++] = count;
		count = 0;
		scanf("%d", &n);
	}
	
	for (i = 0; i < len; i++)
		printf("%d\n", arr[i]);
	
	return 0;
}

//�Ҽ� check
int check(int n)
{
	int i;
	if (n == 1)
		return 0;

	//�̷��� �� check�� �ʿ�� ���µ�..
	for (i = 2; i*i <=  n; i++)
		if (n%i == 0)
			return 0;
	return 1;
}
