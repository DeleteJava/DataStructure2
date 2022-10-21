#include <stdio.h>

typedef struct
{
	int kor;
	int math;
	int eng;
	int subject;
	int total;
	double avg;
	char grade;
}Data;

void Total(Data* score)
{
	(*score).total = score->kor + score->math + score->eng;
}
void Avg(Data* score)
{
	score->avg = score->total / (double)score->subject;
}
void Grade(Data* score)
{
	switch ((int)score->avg / 10)
	{
	case 10:
	case 9:
		score->grade = 65;
		break;
	case 8:
		score->grade = 66;
		break;
	case 7:
		score->grade = 67;
		break;
	case 6:
		score->grade = 68;
		break;
	default:
		score->grade = 70;
	}
}
int main(void)
{
	Data score;
	score.subject = 0;
	while (score.subject != 3)
	{
		printf("����, ����, ���� ���� �Է� : ");
		score.subject = scanf_s("%d%d%d", &score.kor, &score.math, &score.eng);
		rewind(stdin);
	}
	Total(&score);
	printf("���� : %d\n", score.total);
	Avg(&score);
	printf("��� : %.2f\n", score.avg);
	Grade(&score);
	printf("��� : %c\n", score.grade);
	return 0;
}