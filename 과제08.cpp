#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare_victory(int com, int me) {
	if (com == 0) {
		printf("��ǻ�� : ����\n\n");
		if (me == 0) return 2;
		else if (me == 1) return 1;
		else if (me == 2) return 0;
	} 
	else if (com == 1) {
		printf("��ǻ�� : ����\n\n");
		if (me == 0) return 0;
		else if (me == 1) return 2;
		else if (me == 2) return 1;
	} 
	else if (com == 2) {
		printf("��ǻ�� : ��\n\n");
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
		printf("0: ����, 1: ����, 2: ��\n����� �� ����?: ");
		scanf("%d", &me);
		if (me == 0) printf("��� : ����\n");
		else if (me == 1) printf("��� : ����\n");
		else if (me == 2) printf("��� : ��\n");
		else {
			printf("\n��Ģ! �ٽ� �� �ּ���.\n");
			continue;
		}
		tmp = compare_victory(com, me);
		if (tmp == 0) {
			printf("��ǻ�Ͱ� �̰���ϴ�.\n");
			computer++;
		}
		else if (tmp == 1) {
			printf("����� �̰���ϴ�.\n");
			human++;
		}
		else if (tmp == 2) {
			printf("�����ϴ�.\n");
			draw++;
		}
		printf("\n�縲�� �̱� Ƚ�� = %d, ", human);
		printf("��ǻ�Ͱ� �̱� Ƚ�� = %d, ���� = %d\n\n", computer, draw);
		printf("�ٽ� ������ �Ͻðڽ��ϱ�?(y/n) : ");
		do {
			ask_finish = (char)getchar();
		} while (ask_finish == '\n');
		if (ask_finish == 'n') break;
		printf("\n");
	}

	FILE* save_load_W = fopen("save_load.txt", "w");
	fprintf(save_load_W, "��ǻ�� �¸�: %d\n", computer);
	fclose(save_load_W);

	FILE* save_load_A = fopen("save_load.txt", "a");
	fprintf(save_load_A, "��� �¸�: %d\n", human);
	fprintf(save_load_A, "����: %d\n", draw);
	fclose(save_load_A);

}