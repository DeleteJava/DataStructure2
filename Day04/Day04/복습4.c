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
// Q2) 피보나치 수열을 구하는 함수(재귀함수)로 구현해보세요.
//						1, 1, 2, 3, 5, 8, 13... 앞자리 두개를 더한 값 나열
//       입력 : 6
//		 출력 : 6번째인 값인 8을 출력한다.

	int fibo;
	int result;
	printf("피보나치 수열의 몇번째 값을 출력할것인가? : ");
	scanf_s("%d", &fibo);
	result = Fibonacci(fibo);
	printf("%d\n",result);




	return 0;
}