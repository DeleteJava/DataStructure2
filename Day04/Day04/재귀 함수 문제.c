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

int Fibonacci(int num) // 6이라 치자
{
	if (num == 1 || num == 2) return 1;
	else return Fibonacci(num - 1) + Fibonacci(num - 2);
}

void Hanoi(int num,char A, char B, char C)
{
	// 만약 3이면
	if (num == 1) printf("%d -> %c\n",num,C);

	else
	{
		Hanoi(num - 1, A, C, B); // 젤큰걸 제외한 원반을 C를 거쳐서 최종적으로 B로 이동
		printf("%d -> %c\n", num, C); // 제일 큰 원반을 A에서 C로 옮긴다.
		Hanoi(num - 1, B, A, C); // 위에 B에 저장되 있던 원반들을 A를 거쳐 C로 이동한다.
	}
}







int main(void)
{
	// Q1) 팩토리얼 값을 반환해주는 함수(재귀함수)로 구현해보세요.
	//        입력 : 4
	//		  출력 : 1 * 2 * 3 * 4 = 24 가 나와야함
	int fac = 0;
	printf("팩토리얼을 구현할 값 : ");
	scanf_s("%d", &fac);
	printf("값 %d의 팩토리얼 값은 : %d\n",fac,Factorial(fac));

	// Q2) 피보나치 수열을 구하는 함수(재귀함수)로 구현해보세요.
	//						0, 1, 1, 2, 3, 5, 8, 13... 앞자리 두개를 더한 값 나열
	//       입력 : 6
	//		 출력 : 6번째인 값인 8을 출력한다.
	
	int fibo = 0;
	printf("피보나치 수열내의 위치를 구하는 값 입력 : ");
	scanf_s("%d", &fibo);
	printf("%d\n",Fibonacci(fibo));


	// Q3) 하노이 탑을 재귀함수로 구현해보세요. (원반 개수 입력)
	//		 입력 : 3
	// 기둥은 3개
	//		 출력:
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
	printf("하노이 탑 층 갯수 입력 : ");
	scanf_s("%d", &hanoi);
	Hanoi(hanoi,'A','B','C');


	return 0;
}