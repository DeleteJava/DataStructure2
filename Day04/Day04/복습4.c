#include <stdio.h>




int Fibonacci(int num) //6
{
	if (num <= 1) return num;
	else {
		return Fibonacci(num - 2) + Fibonacci(num - 1);
	}
}

              6 - 2(3)                    +                               6 - 1(5)
       4 -2(1)         4 -1(2)                        5 - 2(2)               5 - 1(3)
    2 - 2(0)  2 -1(1)   3 - 2(1)   3 - 1(1)           3 - 2(1) + 3 - 1(1)         4 - 2(1)  +3    4 - 1 (2)
				        2 - 2(0)  2 -1(1)            2 -2(0) + 2 - 1(1)    2 - 2(0) + 2 - 1(1)   3 - 2(1) + 3 - 1(1)
				                                                               2-2+2-1   0 + 1
				  int main(void)
{
// Q2) �Ǻ���ġ ������ ���ϴ� �Լ�(����Լ�)�� �����غ�����.
//						1, 1, 2, 3, 5, 8, 13... ���ڸ� �ΰ��� ���� �� ����
//       �Է� : 6
//		 ��� : 6��°�� ���� 8�� ����Ѵ�.

	int fibo;
	int result;
	printf("�Ǻ���ġ ������ ���° ���� ����Ұ��ΰ�? : ");
	scanf_s("%d", &fibo);
	result = Fibonacci(fibo);
	printf("%d\n",result);




	return 0;
}