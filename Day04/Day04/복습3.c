#include <stdio.h>





int Factorial(int num)
{
	if (num == 1) return 1;
	else {
		return num * Factorial(num - 1);
	}
}


int main(void)
{	// Q1) ���丮�� ���� ��ȯ���ִ� �Լ�(����Լ�)�� �����غ�����.
	//        �Է� : 4
	//		  ��� : 1 * 2 * 3 * 4 = 24 �� ���;���
	int fac;
	printf("��ȯ�� ���丮�� �� : ");
	scanf_s("%d", &fac);
	printf("���丮�� �� : %d\n",Factorial(fac));


	return 0;
}