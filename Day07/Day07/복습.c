#include <stdio.h>
#include <stdlib.h>





int main(void)
{
	// malloc()�Լ��� ���� : (������ ������ �ڷ���)�ּҸ� ������ ���� = ()malloc(ũ��)

	int word_size = 0;
	char* word;
	printf("���ܾ� ���� �Է� : ");
	scanf_s("%d", &word_size);
	word = (char*)malloc(sizeof(char) * (word_size+1));
	printf("���ܾ� �Է� : ");
	scanf("%s", word);
	printf("���ܾ� ��� : ");
	for (int i = word_size - 1; i >= 0; i--)
	{
		printf("%c", word[i]);
	}printf("\n");
	free(word);

	return 0;
}