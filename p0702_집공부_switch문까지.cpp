//#include <stdio.h>
//
//int main(void) {
//	int data1 = 6 / 2;
//	printf("%d = 6/2\n", data1);
//	int data2 = 6 / 3;
//	printf("%d = 6/3\n", data2);
//	int data3 = 6 / 4;
//	printf("%d = 6/4\n", data3);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int number1, number2;
//	scanf_s("%d %d", &number1, &number2);
//	printf("%d, %d \n", number1, number2);
//	printf("%d / %d = %d\n", number1, number2, number1 / number2);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int coin;
//	printf("���� �Է����ּ���.(��): ");
//	scanf_s("%d", &coin);
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//	printf("������ %d��, ", coin10000);
//	printf("��õ���� %d��, ", coin5000);
//	printf("õ���� %d��, ", coin1000);
//	printf("�������� �����Դϴ�.");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int coin;
//	printf("���� �Է����ּ���.(��): ");
//	scanf_s("%d", &coin);
//
//	int coin500 = coin / 500;
//	coin %= 500;
//	int coin100 = coin / 100;
//	coin %= 100;
//	int coin50 = coin / 50;
//	coin %= 50;
//	int coin10 = coin / 10;
//
//	printf("����� %d��, ", coin500);
//	printf("��� %d��, ", coin100);
//	printf("���ʿ� %d��, ", coin50);
//	printf("�ʿ� %d��, ", coin10);
//	printf("�������� 1�� �����Դϴ�.");
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("ù���� : %d\n", randInt);
//	printf("�������� : %d", nextInt);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void) {
//	
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("ù���� : %d\n", randInt);
//	printf("�������� : %d\n", nextInt);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void) {
//
//	srand((unsigned int)time(NULL));
//	printf("�� �ָӴϿ� �ִ� ����");
//	int myMoney = (rand() % 10 + 1) * 1000;
//	printf("%d���̴�.\n", myMoney);
//	int coin500 = rand() % 4 * 500;
//	int coin100 = rand() % 5000;
//	coin100 = coin100 / 100 * 100;
//	printf("�׸��� ������ ������");
//	printf("%d���̴�.", coin500 + coin100);
//	printf("\n���� ���ڸ� �� �� ������?");
//
//	return 0;
//}

//���� ���� �����ϱ� (����) ^^

//#include <stdio.h>
//
//int main(void) {
//	int apple = 15;
//	if (apple == 15) {
//		printf("apple�� 15�� �ֽ��ϴ�.\n");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main(void) {
//	int apple = 15;
//	if (apple != 17) {
//		printf("apple�� 17���� �ƴմϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int apple = 15;
//	if (apple > 7) {
//		printf("apple�� 7������ �����ϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int apple = 15;
//	if (apple < 20) {
//		printf("apple�� 20������ �����ϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int apple = 15;
//	if (apple) {
//		printf("apple�� 0���� �ƴմϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int apple = 15;
//	if (!apple) {
//		printf("apple�� �ϳ��� �����ϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int apple = 0;
//	if (apple == 10) {
//		printf("apple�� 10�� �ֽ��ϴ�.\n");
//	}
//	else if (apple == 0) {
//		printf("apple�� �ϳ��� �����ϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int apple = 15;
//	if (!apple) {
//		printf("apple�� �ϳ��� �����ϴ�.\n");
//	}
//	else {
//		printf("apple�� 0���� �ƴմϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int input = 0;
//	printf("���� �Է� : ");
//	scanf_s("%d", &input);
//
//	if (input % 2 == 0) {
//		printf("input���� ����Դϴ�.");
//	}
//	else {
//		printf("input���� �����Դϴ�.");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int input = 0;
//	printf("���� �Է� : ");
//	scanf_s("%d", &input);
//
//	if (input >= 10 && input <= 99) {
//		printf("input�� �� �ڸ� �����Դϴ�.");
//	}
//	else {
//		printf("input�� �� �ڸ� ���ڰ� �ƴմϴ�.");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int height = 170;
//	if (height > 150) {
//		printf("Ű�� 150 �̻��Դϴ�.\n");
//	}
//	if (height > 160) {
//		printf("Ű�� 160 �̻��Դϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int height = 170;
//	if (height > 150) {
//		printf("Ű�� 150 �̻��Դϴ�.\n");
//	}
//	else if (height > 160) {
//		printf("Ű�� 160 �̻��Դϴ�. \n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int y_age = 0;
//	printf("���� : ");
//	scanf_s("%d", &y_age);
//
//	if (y_age >= 30) {
//		printf("��ü ������ ");
//	}
//	if (y_age >= 12) {
//		printf("12�� ������ ");
//	}
//	if (y_age >= 15) {
//		printf("15�� ������ ");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char initial;
//	printf("���ĺ� �ϳ� �Է� >> ");
//	scanf_s("%c", &initial, 1);
//
//	if (initial >= 65 && initial <= 90) {
//		printf("�빮��");
//	}
//	else if (initial >= 97 && initial <= 132) {
//		printf("�ҹ���");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int number, answer;
//	scanf_s("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("����1�� ����2���� Ů�ϴ�. \n");
//	}
//	else {
//		if (number < answer) {
//			printf("����2�� ����1���� Ů�ϴ�.\n");
//		}
//		else {
//			printf("����1�� ����2�� �����ϴ�.\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int number, answer;
//	scanf_s("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("����1�� ����2���� Ů�ϴ�. \n");
//	}
//	else if (number < answer) {
//		printf("����2�� ����1���� Ů�ϴ�. \n");
//	}
//	else {
//		printf("����1�� ����2�� �����ϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int score = 75;
//	if (score > 90) {
//		printf("������ A����Դϴ�.\n");
//	}
//	else if (score > 80) {
//		printf("������ B����Դϴ�.\n");
//	}
//	else if (score > 70) {
//		printf("������ C����Դϴ�.\n");
//	}
//	else if (score > 60) {
//		printf("������ D����Դϴ�.\n");
//	}
//	else {
//		printf("������ F����Դϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int number = -11;
//	if (number > 0) {
//		printf("number�� ����Դϴ�.\n");
//	}
//	else if (number < 0) {
//		printf("number�� �����Դϴ�.\n");
//	}
//	else {
//		printf("number�� 0�Դϴ�.\n");
//	}
//	if (number % 2 == 0) {
//		printf("number�� ¦���Դϴ�.\n");
//	}
//	else {
//		printf("number�� Ȧ���Դϴ�.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char initial;
//	printf("����Ű(w a d s) �Է� >> ");
//	scanf_s("%c", &initial, 1);
//
//	if (initial == 'w') {
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.");
//	}
//	else if (initial == 'a') {
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.");
//	}
//	else if (initial == 'd') {
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.");
//	}
//	else if (initial == 's') {
//		printf("�Ʒ� ����Ű�� �Է��ϼ̽��ϴ�.");
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int gauge;
//	printf("���� �Է� (0 ~ 100) >> ");
//	scanf("%d", &gauge);
//	
//	if (gauge >= 45 && gauge <= 55) {
//		printf("Perfect");
//	}
//	else if (gauge >= 35 && gauge <= 65) {
//		printf("Excellent");
//	}
//	else {
//		printf("good");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int input = 0;
//	printf("���� �Է� >> ");
//	scanf_s("%d", &input);
//
//	if (input % 3 == 0) {
//		printf("input�� 3�� ����Դϴ�. ");
//	}
//	if (input % 6 == 0) {
//		printf("input�� 6�� ����Դϴ�. ");
//	}
//	if (input % 9 == 0) {
//		printf("input�� 9�� ����Դϴ�. ");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char command = 'i';
//
//	switch (command) {
//	case 'i':
//		printf("������â ����\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char command = 'i';
//
//	switch (command) {
//	case 'i':
//		printf("������â ����\n");
//	case 'm':
//		printf("����â ����\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char command = 'm';
//
//	switch (command) {
//	case 'i':
//		printf("������â ����\n");
//	case 'm':
//		printf("����â ����\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char command = 'm';
//
//	switch (command) {
//	case 'i':
//		printf("������â ����\n");
//		break;
//	case 'm':
//		printf("����â ����\n");
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	char command;
//	printf("Ŀ��带 �Է��ϼ���: ");
//	scanf_s("%c", &command);
//
//	switch (command) {
//	case 'i':
//		printf("������â ����\n");
//		break;
//	case 'm':
//		printf("����â ����\n");
//		break;
//	default :
//		printf("������ ����� �����ϴ�.\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char number = 1;
//
//	switch (number) {
//	case 1:
//		printf("one\n");
//		break;
//	case 2:
//		printf("two\n");
//		break;
//	case 3:
//		printf("three\n");
//		break;
//
//	}
//
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int input1, input2;
//	char oper;
//	printf("������ ���� 2�� : ");
//	scanf("%d %d", &input1, &input2);
//	printf("������ : ");
//	scanf(" %c", &oper);
//
//	switch (oper) {
//	case '+':
//		printf("%d %c %d = %d", input1, oper, input2, input1 + input2);
//		break;
//	case '-':
//		printf("%d %c %d = %d", input1, oper, input2, input1 - input2);
//		break;
//	case '*':
//		printf("%d %c %d = %d", input1, oper, input2, input1 * input2);
//		break;
//	case '/':
//		printf("%d %c %d = %.3f", input1, oper, input2, (float)input1 / input2);
//		break;
//	case '%':
//		printf("%d %c %d = %d", input1, oper, input2, input1 % input2);
//		break;
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int month;
//	printf("�� : ");
//	scanf("%d", &month);
//
//	switch (month) {
//	case 1:
//		printf("%d > January", month);
//		break;
//	case 2:
//		printf("%d > February", month);
//		break;
//	case 3:
//		printf("%d > Marth", month);
//		break;
//	case 4:
//		printf("%d > April", month);
//		break;
//	case 5:
//		printf("%d > May", month);
//		break;
//	case 6:
//		printf("%d > June", month);
//		break;
//	case 7:
//		printf("%d > July", month);
//		break;
//	case 8:
//		printf("%d > August", month);
//		break;
//	case 9:
//		printf("%d > September", month);
//		break;
//	case 10:
//		printf("%d > October", month);
//		break;
//	case 11:
//		printf("%d > November", month);
//		break;
//	case 12:
//		printf("%d > December", month);
//		break;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char command;
//	printf("<, a ���� �̵� \n");
//	printf(">, d ������ �̵� \n");
//	scanf_s("%c", &command, 1);
//	switch (command) {
//	case '<':
//	case 'a':
//		printf("�������� �̵��մϴ�.\n");
//		break;
//	case '>':
//	case 'd':
//		printf("���������� �̵��մϴ�.\n");
//		break;
//	}
//
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int number;
//	int option = 3;
//	printf("�޴��� �����ϼ���");
//	printf("1.�� ���� 2.�̾��ϱ� 3.�ɼ�\n");
//	scanf_s("%d", &number);
//
//	switch (number) {
//	case 1:
//		printf("�� ���� ����.\n");
//		break;
//	case 2:
//		printf("���̺� ������ �ε�.\n");
//		break;
//	case 3:
//		printf("�ɼ� ����.\n");
//		break;
//	default:
//		printf("������ ����� �����ϴ�.\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int number;
//	int option = 3;
//	printf("�޴��� �����ϼ���");
//	printf("1.�� ���� 2.�̾��ϱ� 3.�ɼ�\n");
//	scanf_s("%d", &number);
//
//	switch (number) {
//	case 1:
//		printf("�� ���� ����.\n");
//		break;
//	case 2:
//		printf("���̺� ������ �ε�.\n");
//		break;
//	case 3:
//		printf("�ɼ� ����.\n");
//		break;
//	default:
//		printf("������ ����� �����ϴ�.\n");
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int number;
//	printf("���� �Է� (0 ~ 9) >> ");
//	scanf("%d", &number);
//
//	switch (number) {
//	case 3:
//	case 6:
//	case 9:
//		printf("¦\n");
//		break;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char command = 'x';
//
//	switch (command) {
//	case 'x':
//		printf("���ĺ� x �Է�./n");
//		break;
//	case 'x':
//		printf("����ǥ �Է�./n");
//		break;
//	} 
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char command = 'x';
//
//	switch (command) {
//	case 'x':
//		printf("���ĺ� x �Է�.\n");
//	case 78:
//		printf("����ǥ �Է�.\n");
//		break;
//	} 
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int i_menu;
//	printf("1.���ϱ� 2.����\n");
//	scanf("%d", &i_menu);
//	switch (i_menu) {
//	case 1: 
//		int number1, number2;
//		printf("���� �� ���� �Է��ϼ��� \n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d\n", number1, number2, number1 + number2);
//		break;
//	case 2:
//		int number3, number4;
//		printf("���� �� ���� �Է��ϼ��� \n");
//		scanf("%d %d", &number3, &number4);
//		printf("%d + %d = %d\n", number3, number4, number3 - number4);
//		break;
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int i_menu;
//	printf("1.���ϱ� 2.����\n");
//	scanf("%d", &i_menu);
//	switch (i_menu) {
//	case 1: {
//		int number1, number2;
//		printf("���� �� ���� �Է��ϼ��� \n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d\n", number1, number2, number1 + number2);
//		break;
//	}
//	case 2: {
//		int number3, number4;
//		printf("���� �� ���� �Է��ϼ��� \n");
//		scanf("%d %d", &number3, &number4);
//		printf("%d + %d = %d\n", number3, number4, number3 - number4);
//		break;
//	}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char initial;
//	printf("����Ű(w a d s) �Է� >> ");
//	scanf_s("%c", &initial, 1);
//
//	switch (initial) {
//	case 'w':
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.");
//		break;
//	case 'a':
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.");
//		break;
//	case 'd':
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.");
//		break;
//	case 's':
//		printf("�Ʒ� ����Ű�� �Է��ϼ̽��ϴ�.");
//		break;
//	}
//
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int appetizer, mainDish, dessert;
	printf("appetizer 1.ĳ��� 2.������ 3.Ǫ�Ʊ׶�\n");
	printf("mainDish 1.������ũ 2.�����丮 3.�簥��\n");
	printf("dessert 1.�ɟ� 2.���̽�ũ�� 3.���ݸ�����\n");

	printf("appetizer, mainDish, dessert >> ");
	scanf("%d %d %d", &appetizer, &mainDish, &dessert);

	printf("�ֹ��� ������ ");
	switch (appetizer) {
	case 1:
		printf("ĳ���, ");
		break;
	case 2:
		printf("������, ");
		break;
	case 3:
		printf("Ǫ�Ʊ׶�, ");
		break;
	}
	switch (mainDish) {
	case 1:
		printf("������ũ, ");
		break;
	case 2:
		printf("�����丮, ");
		break;
	case 3:
		printf("�簥��, ");
		break;
	}
	switch (dessert) {
	case 1:
		printf("�ɟ�");
		break;
	case 2:
		printf("���̽�ũ��");
		break;
	case 3:
		printf("���ݸ�����");
		break;
	}
	printf("�Դϴ�");

	return 0;
}