//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int input;
//	enum {GAMEOVER, NEWGAME, LOADGAME, OPTION};
//	do {
//		printf("\n�޴��� �����ϼ���\n");
//		printf("1.�� ���� 2.�̾��ϱ� 3.�ɼ� (0:��������)\n");
//		scanf("%d", &input);
//		
//		switch (input) {
//		case NEWGAME:
//			printf("�� ���� ����\n");
//			break;
//		case LOADGAME:
//			printf("���̺� ������ �ε�\n");
//			break;
//		case OPTION:
//			printf("�ɼ� ����\n");
//			break;
//		}
//	} while (input != GAMEOVER);
//
//	printf("������ �����մϴ�.\n");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int select;
//	enum {������, �α���, ȸ������, �ɼ�, ��������};
//	do {
//		printf("\n�޴��� �����Ͻÿ�.\n");
//		printf("1.�α��� \n2.ȸ������ \n3.�ɼ� \n4.���� �����\n");
//		scanf("%d", &select);
//
//		if (select > 4) {
//			break;
//		}
//
//		switch (select) {
//		case �α���:
//			printf("���̵�: \n��й�ȣ: \n");
//			break;
//		case ȸ������:
//			printf("����: \n��й�ȣ: \n");
//			break;
//		case �ɼ�:
//			printf("�ɼ� ���� \n");
//			break;
//		case ��������:
//			printf("��ö�� ��ö�� ��ö��");
//			break;
//		}
//	} while (select != ������);
//	
//	printf("����\n");
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void) {
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	do {
//		printf("\n%d��° �� !!\n", ++day);
//		printf("���õ� �ڵ��ұ��?\n");
//		printf("1. �����Ѵ�\n");
//		printf("�׿�. ������.\n >>");
//		scanf("%d", &command);
//		if (command != 1) break;
//		int randInt = rand() % 5 + 1;
//
//		switch (randInt) {
//		case 1: 
//			printf("����� ���׿�.\n");
//		case 3:
//			printf("����������. ");
//			break;
//		case 2:
//			printf("����� ������\n ");
//		case 4:
//			printf("ī�信�� ");
//			break;
//		case 5:
//			printf("�п����� ");
//		}
//		printf("�ڵ������մϴ�. \n");
//		study++;
//	} while (1);
//
//	if (day <= 3) {
//		printf("�״���Դϴ�...\n");
//	}
//	else {
//		int level = study / 8;
//		switch (level) {
//		case 0:
//			printf("�ڵ������� �Ǿ����ϴ�!\n");
//			break;
//		case 1:
//			printf("���α׷��Ӱ� �Ǿ����ϴ�!\n");
//			break;
//		case 2:
//			printf("FrontEnd �����ڰ� �Ǿ����ϴ�!\n");
//			break;
//		case 3:
//			printf("BackEnd �����ڰ� �Ǿ����ϴ�!\n");
//			break;
//		default:
//			printf("Ǯ���� �����ڰ� �Ǿ����ϴ�!\n");
//			break;
//		}
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void) {
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	int run = 0;
//	int eat = 0;
//	int book = 0;
//
//	do {
//		printf("\n%d��° �� !!\n", ++day);
//		printf("���õ� �ڵ��ұ��?\n");
//		printf("1. �����Ѵ�\n");
//		printf("2. ������ �޸���\n");
//		printf("3. �� �Դ´�\n");
//		printf("4. å �д´�\n");
//		printf("�׿�. ������.\n >>");
//		scanf("%d", &command);
//		if (command < 1 || command > 4) break;
//		int randInt = rand() % 5 + 1;
//
//		if (command == 1) {
//			switch (randInt) {
//			case 1:
//				printf("����� ���׿�.\n");
//			case 3:
//				printf("����������. ");
//				break;
//			case 2:
//				printf("����� ������\n ");
//			case 4:
//				printf("ī�信�� ");
//				break;
//			case 5:
//				printf("�п����� ");
//			}
//			printf("�ڵ������մϴ�. \n");
//			study++;
//		}
//
//		if (command == 2) {
//			run++;
//			printf("\n");
//		}
//
//		if (command == 3) {
//			eat++;
//			printf("\n");
//		}
//
//		if (command == 4) {
//			book++;
//			printf("\n");
//		}
//	} while (1);
//
//	if (day <= 3) {
//		printf("�״���Դϴ�...\n");
//	}
//	else {
//		int level01 = study / 8;
//		int level02 = run / 8;
//		int level03 = eat / 8;
//		int level04 = book / 8;
//
//		switch (level01) {
//		case 0:
//			printf("�ڵ������� �Ǿ����ϴ�!\n");
//			break;
//		case 1:
//			printf("���α׷��Ӱ� �Ǿ����ϴ�!\n");
//			break;
//		case 2:
//			printf("FrontEnd �����ڰ� �Ǿ����ϴ�!\n");
//			break;
//		case 3:
//			printf("BackEnd �����ڰ� �Ǿ����ϴ�!\n");
//			break;
//		default:
//			printf("Ǯ���� �����ڰ� �Ǿ����ϴ�!\n");
//			break;
//		}
//		switch (level02) {
//		case 0:
//			printf("���׻����� �Ǿ����ϴ�!\n");
//			break;
//		case 1:
//			printf("���� ��ȣȸ ȸ���� �Ǿ����ϴ�!\n");
//			break;
//		default:
//			printf("������ʰ� �Ǿ����ϴ�!\n");
//			break;
//		}
//		switch (level03) {
//		case 0:
//			printf("�Թ������ �Ǿ����ϴ�!\n");
//			break;
//		case 1:
//			printf("��¯�� �Ǿ����ϴ�!\n");
//			break;
//		default:
//			printf("�̽İ��� �Ǿ����ϴ�!\n");
//			break;
//		}
//		switch (level04) {
//		case 0:
//			printf("���������� �Ǿ����ϴ�!\n");
//			break;
//		case 1:
//			printf("å������ �Ǿ����ϴ�!\n");
//			break;
//		default:
//			printf("���� ��а��� �Ǿ����ϴ�!\n");
//			break;
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		printf("�� %d����\n", sheep);
//	}
//	printf("������!\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		printf("�� %d����\n", sheep);
//		if (sheep == 3) {
//			printf("���߿� ������!\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		if (sheep == 3) {
//			printf("���Ƽ� ���� ���� ���ߴ�!\n");
//			continue;
//		}
//		printf("�� %d����\n", sheep);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++) {
//		printf("�� %d����\n", sheep);
//	}
//	printf("������!\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++) {
//		if (sheep % 10 == 0) {
//			printf("���Ƽ� ���� ���� ���ߴ�!\n");
//			continue;
//		}
//		printf("�� %d����\n", sheep);
//		if (sheep == 45) break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int round;
//	for (round = 0; round < 10; round++) {
//		printf("���� %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int round;
//	for (round = 1; round <= 10; round++) {
//		printf("���� %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int count;
//	for (count = 101; count < 111; count++) {
//		printf("����Ʈ %d��\n", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int number;
//	int sum_number = 0;
//	for (number = 1; number <= 20; number++) {
//		sum_number = sum_number + number;
//	}
//	printf("����: %d\n", sum_number);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int count;
//	int number;
//	printf("�ݺ��� Ƚ���� �Է��ϼ��� : ");
//	scanf("%d", &count);
//	for (number = 0; number < count; number++) {
//		printf("�߾�");
//	}
//	printf("\n");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int number;
//	for (number = 10; number < 100; number++) {
//		printf("%d ", number);
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int number;
//	int multi_number = 1;
//	for (number = 3; number <= 8; number++) {
//		multi_number *= number;
//	}
//	printf("����: %d", multi_number);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int number;
//	for (number = 1; number <= 50; number++) {
//		if (number % 10 == 3) {
//			printf("%d ", number);
//			continue;
//		}
//		if (number % 10 == 6) {
//			printf("%d ", number);
//			continue;
//		}
//		if (number % 10 == 9) {
//			printf("%d ", number);
//			continue;
//		}
//		if (number / 10 == 3) {
//			printf("%d ", number);
//			continue;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int number;
//	printf("100 ������ �������� ����մϴ�.\n");
//
//	for (number = 1; (number * number) <= 100; number++) {
//		printf("%d\n", number * number);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int num;
//	printf("100 ������ 7�� ����� ����մϴ�.\n");
//
//	for (num = 7; num <= 100; num += 7) {
//		printf("%d\n", num);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char input;
//	for (;;) {
//		scanf("%c", &input);
//		switch (input) {
//		case 's' :
//			printf("START GAME\n");
//			break;
//		case 'e':
//			printf("EXIT GAME\n");
//			return 0;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int exitFor, number;
//	printf("1���� 10���� ���� �� ��� : ");
//	for (number = 10, exitFor = number - 1; exitFor; number *= exitFor, exitFor--) {
//	}
//	printf("%d\n", number);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	printf("1���� 10���� ���� �� ��� : ");
//	for (int number = 10, int exitFor = number - 1; exitFor; number *= exitFor, exitFor--) {
//	}
//	printf("%d\n", number);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int count;
//	for (count = 0; count < 5; count++); {
//		printf("%d\n", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int number;
//	for (number = 11; number <= 200; number += 11) {
//		printf("%d ", number);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	float spLine;
//	for (spLine = 0.1; spLine * 4 <= 21; spLine += 0.1) {
//		printf("%.1f ", spLine);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	printf("1�� 1��\n");
//	printf("1�� 2��\n");
//	printf("1�� 3��\n");
//	printf("2�� 1��\n");
//	printf("2�� 2��\n");
//	printf("2�� 3��\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int myClass = 1;
//	int student = 1;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//
//	myClass++; student = 1;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int myClass = 1;
//	int student;
//	for (student = 1; student <= 3; student++) {
//		printf("%d�� %d��\n", myClass, student);
//	}
//	myClass++; student = 1;
//	for (student = 1; student <= 3; student++) {
//		printf("%d�� %d��\n", myClass, student);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 2; myClass++) {
//		for (student = 1; student <= 3; student++) {
//			printf("%d�� %d��\n", myClass, student);
//		}
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 8; myClass++) {
//		for (student = 1; student <= 30; student++) {
//			printf("%d�� %d��\n", myClass, student);
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int grade;
//	int myClass;
//	int student;
//	for (grade = 1; grade <= 8; grade++) {
//		for (myClass = 1; myClass <= 8; myClass++) {
//			for (student = 1; student <= 30; student++) {
//				printf("%d�г� %d�� %d��\n", grade, myClass, student);
//			}
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int number1;
//	int number2;
//	for (number1 = 1; number1 <= 9; number1++) {
//		for (number2 = 1; number2 <= 9; number2++) {
//			printf("%d * %d = %d\n", number1, number2, number1 * number2);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int number1;
//	int number2;
//	for (number1 = 1; number1 <= 9; number1++) {
//		if (number1 == 3) {
//			continue;
//		}
//		for (number2 = 1; number2 <= 9; number2++) {
//			printf("%d * %d = %d\n", number1, number2, number1 * number2);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int number1;
//	int number2;
//	for (number1 = 1; number1 <=4; number1++) {
//		for (number2 = 1; number2 <= 6; number2++) {
//			printf("%d ", number1 + number2);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int inter;
//	int outer;
//	for (outer = 0; outer < 5; outer++) {
//		printf("%d��° ���� �ݺ��� ���� \n", outer);
//
//		for (inter = 0; inter < 5; inter++) {
//			printf("���� �ݺ��� %d�� �ݺ�\n", inter);
//		}
//
//		printf("%d��° ���� �ݺ��� Ż��\n\n", outer);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int inter;
//	int outer;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter = 0; inter < 5; inter++) {
//			printf("*");
//		}
//
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int inter;
//	int outer;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter = 0; inter < outer + 1; inter++) {
//			printf("*");
//		}
//
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int outer, inter1, inter2;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter1 = 0; inter1 < 5 - outer; inter1++) {
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int outer;
//	int inter1, inter2;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter1 = 0; inter1 < 5 - outer; inter1++) {
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int outer;
//	int inter;
//	for (outer = 0; outer < 4; outer++) {
//		for (inter = 0; inter < 4 - outer; inter++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

#include <stdio.h>

int main(void) {
	int outer;
	int inter;
	for (outer = 0; outer < 4; outer++) {
		for (inter = 0; inter < 4 - outer; inter++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}