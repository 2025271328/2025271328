#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare_victory(int com, int me) {
	if (com == 0) {
		printf("컴퓨터 : 가위\n\n");
		if (me == 0) return 2;
		else if (me == 1) return 1;
		else if (me == 2) return 0;
	} 
	else if (com == 1) {
		printf("컴퓨터 : 바위\n\n");
		if (me == 0) return 0;
		else if (me == 1) return 2;
		else if (me == 2) return 1;
	} 
	else if (com == 2) {
		printf("컴퓨터 : 보\n\n");
		if (me == 0) return 1;
		else if (me == 1) return 0;
		else if (me == 2) return 2;
	}
}

void main() {
	int com = 0;
	int me = 0;
	char ask_finish = 0;
	int human = 0, computer = 0, draw = 0;
	int tmp = 0;

	srand(time(NULL));

	while (true) {
		com = rand() % 3;
		printf("0: 가위, 1: 바위, 2: 보\n당신이 낼 것은?: ");
		scanf("%d", &me);
		if (me == 0) printf("당신 : 가위\n");
		else if (me == 1) printf("당신 : 바위\n");
		else if (me == 2) printf("당신 : 보\n");
		else {
			printf("\n반칙! 다시 내 주세요.\n");
			continue;
		}
		tmp = compare_victory(com, me);
		if (tmp == 0) {
			printf("컴퓨터가 이겼습니다.\n");
			computer++;
		}
		else if (tmp == 1) {
			printf("사람이 이겼습니다.\n");
			human++;
		}
		else if (tmp == 2) {
			printf("비겼습니다.\n");
			draw++;
		}
		printf("\n사림이 이긴 횟수 = %d, ", human);
		printf("컴퓨터가 이긴 횟수 = %d, 동점 = %d\n\n", computer, draw);
		printf("다시 게임을 하시겠습니까?(y/n) : ");
		do {
			ask_finish = (char)getchar();
		} while (ask_finish == '\n');
		if (ask_finish == 'n') break;
		printf("\n");
	}

	FILE* save_load_W = fopen("save_load.txt", "w");
	fprintf(save_load_W, "컴퓨터 승리: %d\n", computer);
	fclose(save_load_W);

	FILE* save_load_A = fopen("save_load.txt", "a");
	fprintf(save_load_A, "사람 승리: %d\n", human);
	fprintf(save_load_A, "동점: %d\n", draw);
	fclose(save_load_A);

}