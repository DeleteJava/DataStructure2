#include <stdio.h>

/*
----����ü----
�������� ������� ��Ƽ� �ϳ��� ���ο� �ڷ����� ����� ����	
����ü ������ ����� ������ ����  ����ü����.��� �������� �����Ѵ�.
			ex) struct Data d;
					d.data1 = 10;
����ü�� ũ��� ����ü ������� ��� ���� ũ���̴�.



�⺻ ����ü ���� ����:
struct ����ü �̸� 
{
	���;
}; << �����ݷ� ������.


*/

// �⺻ ����ü ����
/*
struct Data
{
	int data1;
	int data2;
	double num2;
};
*/
/*
// ��Ī ����ü ����
// ��Ī ����ü�� ����ϸ� ����ü �̸�, ��Ī ��� ��� ����
typedef struct Data 
{
	int data1;
	int data2;
}Da;
*/

// �͸� ����ü ����
// �͸� ����ü�� ����ϸ� ����ü �̸����� �������� x, ��Ī�� ��� �����ϴ�.
typedef struct
{
	int data1;
	int data2;
}Da;



int main(void)
{
	/*
	struct Data d;
	Da d2;
	d.data1 = 10;
	d.data2 = 20;
	printf("%d %d\n", d.data1,d.data2);
	*/

	Da num;
	num.data1 = 0;
	printf("%d\n", num.data1);

	return 0;
}