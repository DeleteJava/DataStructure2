#include <stdio.h>

// ----��� �Լ�----
// ��� : ������ �ڸ��� �ǵ��ư��ų� �ǵ��ƿ�. �ݺ�, ��Ǯ��
// ��� �Լ� : �Լ� ������ �ڱ� �ڽ��� �ٽ� ȣ���ϴ� �Լ�

int Recursive(int num)
{
	if (num == 1) return 0;
	else {
		return num + Recursive(num - 1);
	}
}
// 5 + (15)
// 4 + (6)
// 3 + (3)
// 2 + (1)
// 1 + (0��ȯ)


int main(void)
{
	int result1;
	result1 = Recursive(5);  // �Լ��� ����ġ�� 14��° �ٷ� �����Ѵ�.
	printf("%d\n", result1);
	int result2 = 0;
	for (int i = 5; i > 0; i--)
	{
		result2 += i;
	}
	printf("%d\n", result2);
	


	return 0;
}