#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	int size;
	printf("���ܾ� ���� �Է� : ");
	scanf_s("%d", &size);
	char* enword;
	
	enword = (char*)malloc(sizeof(char) * (size+1));
	printf("���ܾ� �Է� : ");
	scanf_s("%s", enword,size+1);
	printf("%s\n", enword);

	printf("���ܾ� ��� : ");
	for (int i = size-1; i >= 0; i--)
	{
		printf("%c", enword[i]);
	}
	free(enword);








	return 0;
}