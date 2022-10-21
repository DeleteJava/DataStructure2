#include <stdio.h>



void Total(int kor, int math, int eng,int* total)
{
	*total = kor + math + eng;
}

void Avg(int total, double* avg)
{
	*avg = total / 3.0;
}

void Grade(double avg, char* grade)
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
	int kor;
	int math;
	int eng;
	int total;
	double avg;
	char grade;
	printf("국어, 수학 ,영어 점수 입력 : ");
	scanf_s("%d%d%d", &kor, &math, &eng);

	Total(kor, math, eng, &total);
	printf("총합 : %d\n", total);
	Avg(total, &avg);
	printf("평균 : %.2f\n", avg);
	Grade(avg, &grade);
	printf("등급 : %c\n", grade);
	return 0;
}