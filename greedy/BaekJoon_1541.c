#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[51];
	int i, iom = 0, c = 1, p = 0, m = 0, len;

	scanf("%s", a);

	//��ü ����
	len = strlen(a);

	//-�� ó�� ������ ��ġ ã��.
	for (iom = 0; iom < len; iom++)
		if (a[iom] == '-')
			break;

	//- ó�� ������ �κ� ��
	for (i = iom - 1; i >= 0; i--) {
		if (a[i] == '+' || a[i] == '-') {
			c = 1;
		}
		else {
			p = p + (a[i] - '0') * c;
			c *= 10;
		}
	}
	c = 1;

	//- ����
	for (i = len - 1; i > iom; i--) {
		if (a[i] == '+' || a[i] == '-') {
			c = 1;
		}
		else {
			m = m + (a[i] - '0') * c;
			c *= 10;
		}
	}

	printf("%d", p - m);

	return 0;
}