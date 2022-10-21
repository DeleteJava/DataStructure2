#include <stdio.h>
#include <stdlib.h>





int main(void)
{
	// malloc()함수의 원형 : (저장할 변수의 자료형)주소를 저장할 변수 = ()malloc(크기)

	int word_size = 0;
	char* word;
	printf("영단어 길이 입력 : ");
	scanf_s("%d", &word_size);
	word = (char*)malloc(sizeof(char) * (word_size+1));
	printf("영단어 입력 : ");
	scanf("%s", word);
	printf("영단어 출력 : ");
	for (int i = word_size - 1; i >= 0; i--)
	{
		printf("%c", word[i]);
	}printf("\n");
	free(word);

	return 0;
}