#include <stdio.h>



typedef struct Data
{
	int kor;
	int math;
	int eng;
	int total;
	double avg;
	char grade;
}Student;

void Total(int kor, int math, int eng, int* total)
{
	*total = kor + math + eng;
}

void Avg(int total, int count , double* avg)
{
	*avg = total / (double)count;
}

void Grade(double avg, char* grade)
{
	switch ((int)avg / 10)
	{
	case 10:
	case 9:
		*grade = 65;
		break;
	case 8:
		*grade = 66;
		break;
	case 7:
		*grade = 67;
		break;
	case 6:
		*grade = 68;
		break;
	default:
		*grade = 70;
	}
}
// 애스터리스크 앰퍼샌드
int main(void)
{
	int subject;
	Student num; // struct Data num;
	Student num2; // 따로 공간이 더 생성된다.
	printf("국어, 수학, 영어 입력 : ");
	subject = scanf_s("%d%d%d", &num.kor, &num.math, &num.eng);
	Total(num.kor, num.math, num.eng, &num.total);
	Avg(num.total,subject,&num.avg);
	Grade(num.avg, &num.grade);
	printf("총합 : %d\n", num.total);
	printf("평균 : %.2f\n", num.avg);
	printf("등급 : %c\n", num.grade);
	return 0;
}