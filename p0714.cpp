//#include <stdio.h>
//
//int main(void) {
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("*");
//  printf("\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	for (int x = 1; x <= 1; x++) {
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 2; x++) {
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 3; x++) {
//		printf("*");
//	}
//  printf("\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int y = 1;
//	for (int x = 1; x <= y; x++) {
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 2; x++) {
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 3; x++) {
//		printf("*");
//	}
//	printf("\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int y = 1;
//	for (int x = 1; x <= y; x++) {
//		printf("*");
//	}	
//	printf("\n");
//	y += 1;
//	for (int x = 1; x <= y; x++) {
//		printf("*");
//	}
//	printf("\n");
//	y += 1;
//	for (int x = 1; x <= y; x++) {
//		printf("*");
//	}
//	printf("\n");
//	y += 1;
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int y = 1;
//	for (; y <= 3;) {
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n");
//		y++;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	for (int y = 1; y <= 3; y += 1) {
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int LINE = 3;
//	for (int y = 1; y <= LINE; y += 1) {
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int LINE = 3;
//	scanf("%d", &LINE);
//	for (int y = 1; y <= LINE; y += 1) {
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int LINE = 4;
//	scanf("%d", &LINE);
//	for (int y = LINE; y >= 1; y -= 1) {
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n"); 
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int LINE = 0;
//	scanf("%d", &LINE);
//
//	for (int outer1 = LINE - 1, outer2 = 0; outer2 < LINE; outer1 -= 1, outer2 += 1) {
//		for (int inter1 = 1; inter1 <= outer1; inter1++) {
//			printf(" ");
//		}
//		printf("*");
//		for (int inter2 = 1; inter2 <= outer2; inter2++) {
//			printf("**");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//
//	for (int outer = 0; outer < 3; outer += 1) {
//		for (int inter1 = 1; inter1 <= 2 - outer; inter1++) {
//			printf(" ");
//		}
//		printf("*");
//		for (int inter2 = 1; inter2 <= outer; inter2++) {
//			printf("**");
//		}
//		printf("\n");
//	}
//	for (int outer = 0; outer < 3; outer += 1) {
//		for (int inter1 = 1; inter1 <= outer; inter1++) {
//			printf(" ");
//		}
//		printf("*");
//		for (int inter2 = 1; inter2 <= 2 - outer; inter2++) {
//			printf("**");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//
//	for (int outer = 1; outer <= 4; outer += 1) {
//		for (int inter1 = 1; inter1 <= 4 - outer; inter1++) {
//			printf(" ");
//		}
//		for (int inter2 = 1; inter2 <= outer; inter2++) {
//			printf("%d", outer);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int number, hap = 0, count = 1;
//	printf("<���� Ų ��� 31!> \n ������ �����մϴ�! : �ڿ� ���ڸ� �Է����ּ���.\n");
//	for (int outer = 1; ; outer += 1) {
//		printf("%c: ", 'A' + (count % 2 == 0));
//		scanf("%d", &number);
//
//		if (outer % 3 == 0) {
//			printf("���� �Ѿ�ϴ�.\n");
//			count++;
//		}
//	}
//	
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int number, hap = 0, count = 0;
//	printf("<���� Ų ��� 31!> \n ������ �����մϴ�! 31�� ���ϴ� ����� ���Ե˴ϴ�.\n");
//	for (int outer = 1; ; outer += 1) {
//		printf("%c: ", 'A' + count);
//		scanf("%d", &number);
//		if (number == 31) {
//			break;
//		}
//		if (outer % 3 == 0) {
//			printf("���� �Ѿ�ϴ�.\n");
//			count = !count;
//		}
//	}
//	printf("���� %c�� �¸��Դϴ�!", 'A' + !count);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int number, hap = 0, count = 0;
//	printf("<���� Ų ��� 31!> \n ������ �����մϴ�! 31�� ���ϴ� ����� ���Ե˴ϴ�.\n");
//	for (int outer = 1; ; outer += 1) {
//		printf("%c: ", 'A' + count);
//		scanf("%d", &number);
//		if (number != outer) {
//			printf("�߸��� �Է��Դϴ�.\n");
//			printf("���� �Է��ؾ��ϴ� ���� %d�Դϴ�.\n", outer);
//			outer--;
//			continue;
//		}
//		if (number == 31) {
//			break;
//		}
//		if (outer % 3 == 0) {
//			printf("���� �Ѿ�ϴ�.\n");
//			count = !count;
//		}
//	}
//	printf("���� %c�� �¸��Դϴ�!", 'A' + !count);
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int number, hap = 0, count = 0;
	printf("<���� Ų ��� 31!> \n ������ �����մϴ�! 31�� ���ϴ� ����� ���Ե˴ϴ�. (0 �Է½� �ϳѱ�)\n");
	for (int outer = 1; ; outer += 1) {
		printf("%c: ", 'A' + count);
		scanf("%d", &number);
		if (number == 0) {
			printf("���� �Ѿ�ϴ�.\n");
			count = !count;
			outer--;
			continue;
		}
		if (number != outer) {
			printf("�߸��� �Է��Դϴ�.\n");
			printf("���� �Է��ؾ��ϴ� ���� %d�Դϴ�.\n", outer);
			outer--;
			continue;
		}
		if (number == 31) {
			break;
		}
		if (outer % 3 == 0) {
			printf("���� �Ѿ�ϴ�.\n");
			count = !count;
		}
	}
	printf("���� %c�� �¸��Դϴ�!", 'A' + !count);
	return 0;
}

//#include <stdio.h>
//
//int main(void) {
//
//	float conversion = 0;
//	while (conversion < 2) {
//		printf("%.1f\n", conversion);
//		conversion = conversion + 0.1;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//
//	float conversion = 0;
//	for (; conversion < 2; conversion += 0.1) {
//		printf("%.1f\n", conversion);
//		
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	for (double conversion = 90; conversion > 0.1; conversion /= 3) {
//		if (conversion == 10.0) {
//			continue;
//		}
//		printf("%.31f\n", conversion);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	double conversion = 90;
//	while (conversion > 0.1) {
//		if (conversion == 10.0) {
//			conversion /= 3;
//			continue;
//		}
//		printf("%.31f\n", conversion);
//		conversion /= 3;
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int number;
//	while (1) {
//		scanf("%d", &number);
//		if (number == 0) {
//			printf("���α׷� ����\n");
//			break;
//		}
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	for (int number = 1; number != 0; scanf("%d", &number));
//	printf("���α׷� ����\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) 
//{
//	int for_flag = 1;
//	int number = 0;
//	while (for_flag) {
//		printf("number = %d\n", number);
//		while (number++) {
//			printf(" >number = %d\n", number);
//			if (number == 3) {
//				for_flag = 0;
//				break;
//			}
//		}
//		number++;
//		printf(">>number = %d\n", number);
//	}
//	printf("%d %d\n", for_flag, number);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int for_flag = 1;
//	int number = 1;
//	while (for_flag) {
//		printf("number = %d\n", number);
//		while (number++) {
//			printf(" >number = %d\n", number);
//			if (number == 3) {
//				for_flag = 0;
//				break;
//			}
//		}
//		number++;
//		printf(">>number = %d\n", number);
//	}
//	printf("%d %d\n", for_flag, number);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int for_flag;
//	int number = 0;
//	for (for_flag = 1; for_flag != 0;) {
//		printf("number = %d\n", number);
//		while (number++) {
//			printf(" >number = %d\n", number);
//			if (number == 3) {
//				for_flag = 0;
//				break;
//			}
//		}
//		number++;
//		printf(">>number = %d\n", number);
//	}
//	printf("%d %d\n", for_flag, number);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int for_flag = 1;
//	int number = 0;
//	while (for_flag) {
//		printf("number = %d\n", number);
//		for (; number++ != 0;) {
//			printf(" >number = %d\n", number);
//			if (number == 3) {
//				for_flag = 0;
//				break;
//			}
//		}
//		number++;
//		printf(">>number = %d\n", number);
//	}
//	printf("%d %d\n", for_flag, number);
//	return 0;
//}

