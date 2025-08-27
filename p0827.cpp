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
//	if (what == SCISSORS) printf("%s : 가위\n", who);
//	else if (what == ROCK) printf("%s : 바위\n", who);
//	else if (what == PAPER) printf("%s : 보\n", who);
//	else return ERROR;
//
//	return NO_ERROR;
//}
//
//int compare_victory(int com, int me) {
//
//	Rock_Paper_Scissors("컴퓨터", com);
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
//		printf("세이브한 파일을 로드하시겠습니까? (y/n) : ");
//		load_ok = getchar();
//
//		if (load_ok == 'y') {
//			fscanf(save_load_R, "%d", &computer);
//			fscanf(save_load_R, "%d", &human);
//			fscanf(save_load_R, "%d", &draw);
//			printf("\n사림이 이긴 횟수 = %d, ", human);
//			printf("컴퓨터가 이긴 횟수 = %d, 동점 = %d\n\n", computer, draw);
//		}
//		fclose(save_load_R);
//	}
//	
//
//	while (true) {
//		com = rand() % 3;
//		printf("0: 가위, 1: 바위, 2: 보\n당신이 낼 것은?: ");
//		scanf("%d", &me);
//		if (Rock_Paper_Scissors("당신", me) == ERROR) {
//			printf("\n반칙! 다시 내 주세요.\n");
//			continue;
//		}
//
//		tmp = compare_victory(com, me);
//		if (tmp == COMPUTER_WIN) {
//			printf("컴퓨터가 이겼습니다.\n");
//			computer++;
//		}
//		else if (tmp == HUMAN_WIN) {
//			printf("사람이 이겼습니다.\n");
//			human++;
//		}
//		else if (tmp == DRAW) {
//			printf("비겼습니다.\n");
//			draw++;
//		}
//		printf("\n사람이 이긴 횟수 = %d, ", human);
//		printf("컴퓨터가 이긴 횟수 = %d, 동점 = %d\n\n", computer, draw);
//		printf("다시 게임을 하시겠습니까?(y/n) : ");
//		do {
//			ask_finish = (char)getchar();
//		} while (ask_finish == '\n');
//		if (ask_finish == 'n') break;
//		printf("\n");
//	}
//	char save_ok = 0;
//	printf("진행 상황을 세이브하시겠습니까?(y/n) : ");
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

class CStack {
public://전체공개
	int stack_buff[256];//멤버변수
	int top;
	void push() {//멤버함수=메서드
		int value;
		printf("stack에 넣을 값을 입력해주세요: ");
		scanf("%d", &value);
		stack_buff[top++] = value;
	}
};


void pop(int* top, int* stack_buff) {
	if (*top > 0)
		printf("빠져나온값: %d\n", stack_buff[--(*top)]);
	else
		printf("stack 이 비어있습니다");
}

void print(int top, int* stack_buff) {
	printf("\nstack 내부>\n"); 
	for (int i = 0; i < top; i++) {
		printf(" | %d ", stack_buff[i]);
	}
	printf("\n\n");
}

int main() {
	CStack st;
	int value, choice;
	bool while_flag = true;

	while (while_flag) {
		printf("[stack]\n1. push\n2. pop\n: ");
		scanf("%d", &choice);

		switch (choice) {
		case 1: // push 기능 함수
			st.push();
			break;
		case 2: // pop 기능 함수
			pop(&top, stack_buff);
		default:
			while_flag = false;
			break;
		}
		// print 기능 함수
		print(top, stack_buff);
	}
}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define MAXSIZE 10
//
//int queue[MAXSIZE];
//int front, rear;
//
//void init_queue(void) {
//	front = rear = 0;
//	printf("QUEUE SIZE is %d\n\n", MAXSIZE);
//}
//
//void clear_queue(void) {
//	front = rear;
//}
//
//int enqueue(int val) {
//	if ((rear + 1) % MAXSIZE == front) {
//		printf("Queue Overflow, \n");
//		return -1;
//	}
//	queue[rear] = val;
//
//	rear = ++rear % MAXSIZE;
//
//	return val;
//}
//
//int dequeue(void) {
//	int i;
//	if (front == rear) {
//		printf("Queue Overflow \n");
//		return -1;
//	} 
//	i = queue[front];
//	front = ++front % MAXSIZE;
//	return i;
//}
