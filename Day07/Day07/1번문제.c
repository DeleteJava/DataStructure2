#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int data1;
	int data2;
}Data1;

int main()
{
	Data1* p = (Data1*)malloc(sizeof(Data1));

	Func1(&p);
	//Func1()함수를 만들어서 Func1()안에서 data1에 100을 넣으세요.
	Func2(p);
	//Func2()함수를 만들어서 Func2()안에서 data2에 200을 넣으세요.	

	//data1과 data2를 출력하세요.

	// 동적해제 코드를 추가하세요.

	free(p);

	return 0;
}