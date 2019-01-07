#include<stdio.h>

int check(int n);
// BaekJoon 9020
int main(void)
{
	int n, i, j=0,count = 0;
	int flag = 0, flag2 = 1,flag3=1;
	int len = 0;
	int arr[10000];
	int c[10000];
	int a[10000];
	int b[10000];
	int a_t=0, b_t=0;
	int copy;
	//input
	scanf("%d", &n);

	copy = n;
	while (n > 0)// Ȧ�� + Ȧ�� ���´�.
	{
		scanf("%d", &arr[n]); //�Է�

		if (arr[n] > 10000 || arr[n] < 4)//error check
			return 0;

		for (i = 2; i <= arr[n]; i++)//�ش� �� ���� �Ҽ� ����
			if (check(i))
				c[len++] = i;
		
		for(i=0;i<len;i++)
			for(j=i;j<=len;j++)
				if (c[i] + c[j] == arr[n]) {
					if (flag3) { // ó������ �׳� �־��ְ�
						a[a_t] = c[i];
						b[b_t] = c[j];
						flag3 = 0;
					}
					else if (c[j] - c[i] < (b[b_t] - a[a_t])) {//�ι�°���ʹ� �� ��
						a[a_t] = c[i];
						b[b_t] = c[j];
					}
					break;
				}

		for (i = 0; i < len; i++) //init
			c[i] = 0;
		a_t++;
		b_t++;
		len = 0;
		n--;
		flag3 = 1;
	}
	
	for (i = 0; i < copy; i++)
		printf("%d %d\n", a[i], b[i]);
	
	return 0;
}

//�Ҽ� check
int check(int n)
{
	int i;
	if (n == 1)
		return 0;

	//�̷��� �� check�� �ʿ�� ���µ�..
	for (i = 2; i*i <= n; i++)
		if (n%i == 0)
			return 0;
	return 1;
}