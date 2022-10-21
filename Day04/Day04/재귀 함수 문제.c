#include <stdio.h>



int Factorial(int num)
{
	if (num == 1) return 1;
	else return num * Factorial(num - 1);
}
// 4 * 6
// 3 * 2
// 2 * 1
// 1 * 1

int Fibonacci(int num) // 6�̶� ġ��
{
	if (num == 1 || num == 2) return 1;
	else return Fibonacci(num - 1) + Fibonacci(num - 2);
}

void Hanoi(int num,char A, char B, char C)
{
	// ���� 3�̸�
	if (num == 1) printf("%d -> %c\n",num,C);

	else
	{
		Hanoi(num - 1, A, C, B); // ��ū�� ������ ������ C�� ���ļ� ���������� B�� �̵�
		printf("%d -> %c\n", num, C); // ���� ū ������ A���� C�� �ű��.
		Hanoi(num - 1, B, A, C); // ���� B�� ����� �ִ� ���ݵ��� A�� ���� C�� �̵��Ѵ�.
	}
}







int main(void)
{
	// Q1) ���丮�� ���� ��ȯ���ִ� �Լ�(����Լ�)�� �����غ�����.
	//        �Է� : 4
	//		  ��� : 1 * 2 * 3 * 4 = 24 �� ���;���
	int fac = 0;
	printf("���丮���� ������ �� : ");
	scanf_s("%d", &fac);
	printf("�� %d�� ���丮�� ���� : %d\n",fac,Factorial(fac));

	// Q2) �Ǻ���ġ ������ ���ϴ� �Լ�(����Լ�)�� �����غ�����.
	//						0, 1, 1, 2, 3, 5, 8, 13... ���ڸ� �ΰ��� ���� �� ����
	//       �Է� : 6
	//		 ��� : 6��°�� ���� 8�� ����Ѵ�.
	
	int fibo = 0;
	printf("�Ǻ���ġ �������� ��ġ�� ���ϴ� �� �Է� : ");
	scanf_s("%d", &fibo);
	printf("%d\n",Fibonacci(fibo));


	// Q3) �ϳ��� ž�� ����Լ��� �����غ�����. (���� ���� �Է�)
	//		 �Է� : 3
	// ����� 3��
	//		 ���:
	//		 1 -> C    //  1 -> B
	//		 2 -> B    //  2 -> C
	//		 1 -> B    //  1 -> C
	//		 3 -> C    //  3 -> B
	//		 1 -> A    //  1 -> A
	//		 2 -> C    //  2 -> B
	//		 1 -> C    //  1 -> B
					   //  4 -> C
	                   //  1 -> C
	                   //  2 -> A
	                   //  1 -> A
	                   //  3 -> C
	                   //  1 -> B
	                   //  2 -> C
	                   //  1 -> C
	int hanoi = 0;     
	printf("�ϳ��� ž �� ���� �Է� : ");
	scanf_s("%d", &hanoi);
	Hanoi(hanoi,'A','B','C');


	return 0;
}