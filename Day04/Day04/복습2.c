#include <stdio.h>

// ----재귀 함수----
// 재귀 : 원래의 자리로 되돌아가거나 되돌아옴. 반복, 되풀이
// 재귀 함수 : 함수 내에서 자기 자신을 다시 호출하는 함수

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
// 1 + (0반환)


int main(void)
{
	int result1;
	result1 = Recursive(5);  // 함수를 끝마치면 14번째 줄로 복귀한다.
	printf("%d\n", result1);
	int result2 = 0;
	for (int i = 5; i > 0; i--)
	{
		result2 += i;
	}
	printf("%d\n", result2);
	


	return 0;
}