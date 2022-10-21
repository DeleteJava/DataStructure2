#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	int size;
	printf("영단어 길이 입력 : ");
	scanf_s("%d", &size);
	char* enword;
	
	enword = (char*)malloc(sizeof(char) * (size+1));
	printf("영단어 입력 : ");
	scanf_s("%s", enword,size+1);
	printf("%s\n", enword);

	printf("영단어 출력 : ");
	for (int i = size-1; i >= 0; i--)
	{
		printf("%c", enword[i]);
	}
	free(enword);








	return 0;
}