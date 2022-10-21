#include <stdio.h>


// 구조체
// 여러개의 멤버들을 모아서 하나의 새로운 자료형을 만드는 개념
// 구조체 변수의 멤버에 접근할 때는 구조체변수.멤버 형식으로 접근한다.
// 구조체의 크기는 구조체 멤버들을 모두 더한 크기이다.


// 기본 구조체 정의 원형
// struct 구조체 이름{
//		멤버;
// };


typedef struct {
	int kor;
	int math;
	int eng;
	int total;
	int subject_count;
	double avg;
	char grade;
}Data;

void Total(int kor,int math,int eng,int* total)
{
	*total = kor + math + eng;

}

void Avg(int total, int subject_count,double* avg)
{
	*avg = total / (double)subject_count;
}

void Grade(double avg,char* grade)
{
	switch ((int)avg / 10)
	{
	case 10:
	case 9:
		*grade = 'A';
		break;
	case 8:
		*grade = 'B';
		break;
	case 7:
		*grade = 'C';
		break;
	case 6:
		*grade = 'D';
		break;
	default: 
		*grade = 'F';
	}
}
int main(void)
{
	Data num;
	printf("국어, 수학, 영어 점수 입력 : ");
	num.subject_count = scanf_s("%d%d%d", &num.kor, &num.math, &num.eng);
	Total(num.kor,num.math,num.eng,&num.total);
	printf("총합 : %d\n", num.total);
	Avg(num.total, num.subject_count,&num.avg);
	printf("평균 : %.2f\n", num.avg);
	Grade(num.avg,&num.grade);
	printf("등급 : %c\n", num.grade);

	return 0;
}