//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define ERROR -1
//#define NO_ERROR 0
//
//#define ROCK 1
//#define PAPER 2
//#define SCISSORS 0
//
//#define COMPUTER_WIN 0
//#define HUMAN_WIN 1
//#define DRAW 2
//
//
//int Rock_Paper_Scissors(const char* who, int what) {
//	if (what == SCISSORS) printf("%s : ����\n", who);
//	else if (what == ROCK) printf("%s : ����\n", who);
//	else if (what == PAPER) printf("%s : ��\n", who);
//	else return ERROR;
//
//	return NO_ERROR;
//}
//
//int compare_victory(int com, int me) {
//
//	Rock_Paper_Scissors("��ǻ��", com);
//
//	if (com == me) return DRAW;
//	else if (com - me == 1 || com - me == -2) return COMPUTER_WIN;
//	else  return HUMAN_WIN;
//}
//
//void main() {
//	int com = 0;
//	int me = 0;
//	char ask_finish = 0;
//	int human = 0, computer = 0, draw = 0;
//	int tmp = 0;
//	int test = 0;
//
//	srand(time(NULL));
//
//	FILE* save_load_R = fopen("save_load.txt", "r");
//	fscanf(save_load_R, "%d", &test);
//	
//	if (test != NULL) {
//		char load_ok = 0;
//		printf("���̺��� ������ �ε��Ͻðڽ��ϱ�? (y/n) : ");
//		load_ok = getchar();
//
//		if (load_ok == 'y') {
//			fscanf(save_load_R, "%d", &computer);
//			fscanf(save_load_R, "%d", &human);
//			fscanf(save_load_R, "%d", &draw);
//			printf("\n�縲�� �̱� Ƚ�� = %d, ", human);
//			printf("��ǻ�Ͱ� �̱� Ƚ�� = %d, ���� = %d\n\n", computer, draw);
//		}
//		fclose(save_load_R);
//	}
//	
//
//	while (true) {
//		com = rand() % 3;
//		printf("0: ����, 1: ����, 2: ��\n����� �� ����?: ");
//		scanf("%d", &me);
//		if (Rock_Paper_Scissors("���", me) == ERROR) {
//			printf("\n��Ģ! �ٽ� �� �ּ���.\n");
//			continue;
//		}
//
//		tmp = compare_victory(com, me);
//		if (tmp == COMPUTER_WIN) {
//			printf("��ǻ�Ͱ� �̰���ϴ�.\n");
//			computer++;
//		}
//		else if (tmp == HUMAN_WIN) {
//			printf("����� �̰���ϴ�.\n");
//			human++;
//		}
//		else if (tmp == DRAW) {
//			printf("�����ϴ�.\n");
//			draw++;
//		}
//		printf("\n����� �̱� Ƚ�� = %d, ", human);
//		printf("��ǻ�Ͱ� �̱� Ƚ�� = %d, ���� = %d\n\n", computer, draw);
//		printf("�ٽ� ������ �Ͻðڽ��ϱ�?(y/n) : ");
//		do {
//			ask_finish = (char)getchar();
//		} while (ask_finish == '\n');
//		if (ask_finish == 'n') break;
//		printf("\n");
//	}
//	char save_ok = 0;
//	printf("���� ��Ȳ�� ���̺��Ͻðڽ��ϱ�?(y/n) : ");
//	do {
//		save_ok = getchar();
//	} while (save_ok == '\n');
//
//	if (save_ok == 'y') {
//		FILE* save_load_W = fopen("save_load.txt", "w");
//		fprintf(save_load_W, "%d\n", computer);
//		fprintf(save_load_W, "%d\n", human);
//		fprintf(save_load_W, "%d\n", draw);
//		fclose(save_load_W);
//	}
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void push(int* top, int* stack_buff) { 
	int value;
	printf("stack�� ���� ���� �Է����ּ���: ");
	scanf("%d", &value);
	stack_buff[(*top)++] = value;
}

void pop(int* top, int* stack_buff) {
	if (*top > 0)
		printf("�������°�: %d\n", stack_buff[--(*top)]);
	else
		printf("stack �� ����ֽ��ϴ�");
}

void print(int* top, int* stack_buff) {
	printf("\nstack ����>\n"); 
	for (int i = 0; i < *top; i++) {
		printf(" | %d ", stack_buff[i]);
	}
	printf("\n\n");
}

int main() {
	int stack_buff[256];
	int top = 0, value, choice;
	bool while_flag = true;

	while (while_flag) {
		printf("[stack]\n1. push\n2. pop\n: ");
		scanf("%d", &choice);

		switch (choice) {
		case 1: // push ��� �Լ�
			push(&top, stack_buff);
			break;
		case 2: // pop ��� �Լ�
			pop(&top, stack_buff);
		default:
			while_flag = false;
			break;
		}
		// print ��� �Լ�
		print(&top, stack_buff);
	}
}