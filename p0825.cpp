#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAXENERGY 6

void printenergy(int my) {
	printf("내 목숨 : ");
	for (int i = 0; i < my; i++) {
		printf("■");
	}
	for (int i = my; i < MAXENERGY; i++) {
		printf("□");
	}
	printf("\n");
}

char* getAnswer()
{
	srand((unsigned)time(NULL));
	int N = 0;
	char x[20];
	char* w;
	FILE* Word = fopen("행맨.txt", "r");
	fscanf(Word, "%d", &N);

	int T = rand() % N;

	for (int i = 0; i < N - T; i++) {
		fscanf(Word, "%s", x);
	}

	fclose(Word);

	w = (char*)malloc(sizeof(char) * strlen(x) + 1);
	strcpy(w, x);

	return w;
}

void word_temp(char* Answer, char*& word) {
	int size = strlen(Answer);
	word = (char*)malloc(sizeof(char) * size + 1);

	memset(word, '_', sizeof(word));
	word[size] = '\0';
}

int main() {
	char* Answer = getAnswer();
	
	puts(Answer);

	char* word;
	word_temp(Answer, word);

	int energy = MAXENERGY;
	char input;
	char wrong_alphabet[7];

	while (1) {
		printenergy(energy);
		if (!energy) {
			printf("게임 오버...\n");
			printf("정답 : %s", Answer);
			break;
		}
		printf("\n정답 : %s\n\n", word);
		if (strcmp(word, Answer) == 0) {
			printf("게임 승리!\n");
			break;
		}
		printf("단어를 맞춰보세요 : ");
		scanf(" %c", &input);

		bool check = true;
		for (int j = 0; j < strlen(word); j++) {
			if (Answer[j] == input) {
				word[j] = input;
				check = false;
			}
		}
		if (check) {
			int i = 6 - energy;
			wrong_alphabet[i] = input;
			wrong_alphabet[i + 1] = NULL;
			printf("틀린 알파벳 ==> ");
			puts(wrong_alphabet);
			energy--;
		}
	}

	free(Answer);
	free(word);

	return 0;
}