#include <stdio.h>


// ����ü
// �������� ������� ��Ƽ� �ϳ��� ���ο� �ڷ����� ����� ����
// ����ü ������ ����� ������ ���� ����ü����.��� �������� �����Ѵ�.
// ����ü�� ũ��� ����ü ������� ��� ���� ũ���̴�.


// �⺻ ����ü ���� ����
// struct ����ü �̸�{
//		���;
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
	printf("����, ����, ���� ���� �Է� : ");
	num.subject_count = scanf_s("%d%d%d", &num.kor, &num.math, &num.eng);
	Total(num.kor,num.math,num.eng,&num.total);
	printf("���� : %d\n", num.total);
	Avg(num.total, num.subject_count,&num.avg);
	printf("��� : %.2f\n", num.avg);
	Grade(num.avg,&num.grade);
	printf("��� : %c\n", num.grade);

	return 0;
}