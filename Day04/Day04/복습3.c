#include <stdio.h>





int Factorial(int num)
{
	if (num == 1) return 1;
	else {
		return num * Factorial(num - 1);
	}
}


int main(void)
{	// Q1) 팩토리얼 값을 반환해주는 함수(재귀함수)로 구현해보세요.
	//        입력 : 4
	//		  출력 : 1 * 2 * 3 * 4 = 24 가 나와야함
	int fac;
	printf("반환할 팩토리얼 값 : ");
	scanf_s("%d", &fac);
	printf("팩토리얼 값 : %d\n",Factorial(fac));


	return 0;
}