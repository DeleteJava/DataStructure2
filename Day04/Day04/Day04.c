#include <stdio.h>

//---- ��� �Լ� ----
// ��� : ������ �ڸ��� �ǵ��ư��ų� �ǵ��ƿ�.
// ��� �Լ� : �Լ� ������ �ڱ� �ڽ��� �ٽ� ȣ���ϴ� �Լ�

//void Recursive(int n)
//{
//	if (n == 0) return; // n�� 0�� �Ǹ� ��ȯ/�����Ѵ�.
//	printf("Recursive Function!!\n");
//	Recursive(n - 1);
//}

int Sum(int n) // 5�� �޴´ٰ� ����
{
	if (n == 1) return 1;
	else return n + Sum(n-1);
/*	
	���������� 1�� ������ �ö���鼭 ��ȯ������ ���ϸ� 15�� ����
	return 5 + 10 << ��ȯ�� 10          sum(5 - 1) 9
	return 4 +  6 << ��ȯ�� 6           sum(4 - 1) 7
	return 3 +  3 << ��ȯ�� 3           sum(3 - 1) 5
	return 2 +  1 << ��ȯ�� 1           sum(2 - 1) �갡 ������� 
	1 == return 1  1�� �ݳ��ϰ� ���� ���� �ö�
*/


}


int main(void)
{
	//Recursive(3);
	
	int num;

	printf("�Է� : ");
	scanf_s("%d", &num);

	

	printf("��� : %d\n", Sum(num));
	return 0;
}