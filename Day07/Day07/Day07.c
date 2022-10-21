#include <stdio.h>
#include <stdlib.h>

/*
----구조체 포인터----
구조체 포인터를 이용해서 역참조를 진행할 때는 기본적으로 ->(애로우)를 사용해서 진행한다.

별도로 *(애스터리스크) 사용할 수 있는데, 이때는 우선 순위를 고려해서 괄호로 묶어준다.
   . << 도트연산자는 이상할 정도로 우선 순위가 높다.
	        ex)   (*d).data1  ==  d->data1
*/

/*
----포인터와 배열의 관계----
 포인터와 배열은 밀접한 관계를 갖고 있으나, 분명한 차이점이 있다.
 배열은 선언하게 되면 기본적으로 배열 자기 자신의 시작 주소를 갖고 있다.
 포인터와 배열은 둘다 주소를 가지고 연산을 진행하기 때문에 포인터를 배열처럼 인덱스를 통해 접근 할 수있다.
 배열은 자기 자신의 공간을 사용하고, 포인터는 다른 누군가의 공간을 빌려서 사용한다.
 */

/*
---- 동적 할당 ----
프로그램 중간에 메모리 공간의 크기를 지정해서 할당 받고 그 공간을 사용 후, 원하는 시점에 해제하는 방식
메모리 공간을 할당 받을 때는 malloc()라는 함수를 사용해서 할당 받을 수 있다.
malloc == memory(메모리) allocation(할당) 의 약자
이때, 반드시 stdlib.h 헤더파일을 선언해줘야 한다. (malloc.h)도 가능
malloc()함수의 원형 : 주소를 저장할 변수 = (저장할 변수의 자료형)malloc(크기)
											   <형변환을 위함>
※ 동적 할당을 통해서 할당 받은 메모리 공간은 heap 메모리 영역에 속함
동적 할당 받은 메모리 공간을 해제 할 때는 free(해제할 공간의 주소); 형식으로 해제할 수 있다.
한 번의 동적 할당에는 반드시 한 번의 동적 해제가 진행되야 한다.
// malloc()함수에서 크기를 넘겨줄 때는 기본적으로 sizeof()연산자를 이용해서 넘겨준다.


*/
/*
typedef struct
{
	int data1;
	int data2;
}Data;
*/
/*
void Func(Data* d)// 매개변수로 구조체 불러옴
{
	(*d).data1 = 11;
	d->data2 = 27;
}
*/
/*
typedef struct {
	int data1;
	int data2;
	int data3;
}Data;
*/
// 포인터의 크기는 무조건 4바이트


int main(void)
{
	/*
	Data d;
	d.data1 = 10;
	d.data2 = 20;
	Func(&d); // 주소값을 보냈으니 Func의 매개변수는 main함수의 값을 가짐
	printf("%d %d\n", d.data1,d.data2);
	*/
	/*Data d;
	Data* pd;
	pd = &d;

	printf("d의 크기 : %d\n", sizeof(d));
	printf("pd의 크기 : %d\n", sizeof(pd));

	printf("\nd의 값 : %p\n", &d);
	printf("pd의 값 : %p\n", pd);
	*/
	/*
	char str[10];

	printf("str의 주소 : %p\n", &str);
	printf("str의 값 : %p\n", str);

	printf("입력 : ");
	scanf_s("%s", str,10);
	printf("출력 : %s\n", str);
	*/
	/*
	char str1[10] = "Hello";
	char str3[10] = "ABCD";
	char* str2 = &str3;

	//printf("str1 : %s\n",str1);
	//printf("str2 : %s\n", str2);

	str1[0] = 'B';
	str2[0] = 'Z';

	printf("str1 : %c%c%c%c%c\n",str1[0], str1[1], str1[2], str1[3], str1[4]);
	printf("str2 : %c%c%c%c%c\n", str2[0], str2[1], str2[2], str2[3], str2[4]);
*/
	/*// 저장할 공간의 자료형* 변수명;
	int* ptr;
	ptr = (int*)malloc(4);
	*ptr = 10;
	printf("출력 : %d\n", *ptr);
	free(ptr); // 절대 까먹으면 안됨 (메모리 누수가 일어난다)
	*/
	int* ptr;
	ptr = (int*)malloc(sizeof(int)*2);
	ptr[0] = 100;
	ptr[1] = 200;
	printf("출력 : %d %d \n", *ptr, *(ptr + 1));
	free(ptr);


	return 0;
}