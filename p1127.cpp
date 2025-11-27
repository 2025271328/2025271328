#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//enum SHAPE { spade , heart, diamond, club};

// 구조체 당 카드 한 장
struct card {
	int number;
	char shape;
};

void shuffling(card* A, int size_A) {
	srand(time(NULL));
	struct card tmp;

	for (int i = size_A - 1; i > 0; i--) {
		int j = rand() % (i + 1);  // 0 ~ i 범위
		tmp = A[i];   // 카드 전체 복사
		A[i] = A[j];
		A[j] = tmp;
	}
}


int main() {
	char shape[4] = { 'S','H','D','C' };
	struct card A[52];

	for (int i = 0; i < 13; i++) {
		A[i].shape = shape[0];
		A[i].number = i + 1;
		A[i + 13].shape = shape[1];
		A[i + 13].number = i + 1;
		A[i + 26].shape = shape[2];
		A[i + 26].number = i + 1;
		A[i + 39].shape = shape[3];
		A[i + 39].number = i + 1;
	}

	printf("카드\n");
	for (int i = 0; i < 52; i++) {
		printf("%c%d ", A[i].shape, A[i].number);
	}

	shuffling(A, 52);

	printf("\n\n카드 섞은 후 카드\n");
	for (int i = 0; i < 52; i++) {
		printf("%c%d ", A[i].shape, A[i].number);
	}
}