#include <stdio.h>

/*
----구조체----
여러개의 멤버들을 모아서 하나의 새로운 자료형을 만드는 개념	
구조체 변수의 멤버에 접근할 때는  구조체변수.멤버 형식으로 접근한다.
			ex) struct Data d;
					d.data1 = 10;
구조체의 크기는 구조체 멤버들을 모두 더한 크기이다.



기본 구조체 정의 원형:
struct 구조체 이름 
{
	멤버;
}; << 세미콜론 붙힌다.


*/

// 기본 구조체 정의
/*
struct Data
{
	int data1;
	int data2;
	double num2;
};
*/
/*
// 별칭 구조체 정의
// 별칭 구조체를 사용하면 구조체 이름, 별칭 모두 사용 가능
typedef struct Data 
{
	int data1;
	int data2;
}Da;
*/

// 익명 구조체 정의
// 익명 구조체를 사용하면 구조체 이름으로 변수선언 x, 별칭만 사용 가능하다.
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