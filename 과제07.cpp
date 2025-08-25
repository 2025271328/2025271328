#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAXENERGY 6

void printenergy(int my) {
	printf("�� ��� : ");
	for (int i = 0; i < my; i++) {
		printf("��");
	}
	for (int i = 0; i < MAXENERGY; i++) {
		printf("��");
	}
	printf("\n");
}

char* getAnswer()
{
	char n[3];
	char x[10];
	char* w;
	FILE* Word = fopen("C:\\���.txt", "r");
	fscanf(Word, "%s", x);
	int N = atoi(n);

	fgets(x, 10, Word);
	w = (char*)malloc(sizeof(char) * strlen(x) + 2);
	strcpy(w, x);

	return w;
}

void word_temp(char* Answer, char* &word, char* &temp) {
	int size = strlen(Answer);
	word = (char*)malloc(sizeof(char) * size + 2);
	temp = (char*)malloc(sizeof(char) * size + 2);
	for (int i = 0; i < size - 1; i++) {
		strcpy(word + i, "_");
	}
}

int main() {
	char* Answer = getAnswer();
	puts(Answer);

	char* word;
	char* temp;
	word_temp(Answer, word, temp);

	int energy = MAXENERGY;
	char input;
	while (1) {
		printenergy(energy);
		if (!energy) {
			printf("���� ����...\n");
			printf("���� : %s", Answer);
			break;
		}
		printf("\n���� : %s\n\n", word);
		if (word == Answer) {
			printf("���� �¸�!\n");
			break;
		}
		printf("�ܾ ���纸���� : ");
		scanf(" %c", &input);

		bool check = true;
		for (int i = 0; i < strlen(word); i++) {
			if (Answer[i] == input) {
				word[i] = input;
				check = false;
			}
		}
		if (check) energy--;
	}
	return 0;
}