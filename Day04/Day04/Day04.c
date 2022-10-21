#include <stdio.h>

//---- 재귀 함수 ----
// 재귀 : 원래의 자리로 되돌아가거나 되돌아옴.
// 재귀 함수 : 함수 내에서 자기 자신을 다시 호출하는 함수

//void Recursive(int n)
//{
//	if (n == 0) return; // n이 0이 되면 반환/종료한다.
//	printf("Recursive Function!!\n");
//	Recursive(n - 1);
//}

int Sum(int n) // 5를 받는다고 가정
{
	if (n == 1) return 1;
	else return n + Sum(n-1);
/*	
	최종적으로 1이 됬을때 올라오면서 반환값들을 더하면 15가 나옴
	return 5 + 10 << 반환된 10          sum(5 - 1) 9
	return 4 +  6 << 반환된 6           sum(4 - 1) 7
	return 3 +  3 << 반환된 3           sum(3 - 1) 5
	return 2 +  1 << 반환된 1           sum(2 - 1) 얘가 사라지고 
	1 == return 1  1을 반납하고 종료 위로 올라감
*/


}


int main(void)
{
	//Recursive(3);
	
	int num;

	printf("입력 : ");
	scanf_s("%d", &num);

	

	printf("출력 : %d\n", Sum(num));
	return 0;
}