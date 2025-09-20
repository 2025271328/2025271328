//#include <stdio.h>
//
//int main(void) {
//	int i;
//
//	for (i = 1; i <= 100; i++) {
//		printf("%-3d", i);
//		if (i % 10 == 0) printf("\n");
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int n1;
//	int n2;
//	
//	printf("������ �Է��ϼ��� >> ");
//	scanf("%d", &n1);
//
//	n2 = n1 / 10;
//
//	switch (n2) {
//	case 10:
//		printf("A+ (100)");
//		break;
//	case 9:
//		printf("A (90�̻�)");
//		break;
//	case 8:
//		printf("B (80�̻�)");
//		break;
//	case 7:
//		printf("C (70�̻�)");
//		break;
//	case 6:
//		printf("D (60�̻�)");
//		break;
//	default:
//		printf("F (60�̸�)");
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int i;
//	int n;
//	int sum = 0;
//
//	printf("n�� �Է� >> ");
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++) {
//		sum += i;
//	}
//
//	printf("1 ~ %d������ �� >> %d", n, sum);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int sum(int n, int* hap) {
//	if (n == 0) return 0;
//	*hap += n;
//	sum(--n, hap);
//}
//
//int main(void) {
//	int n;
//	int hap = 0;
//
//	printf("n�� �Է� >> ");
//	scanf("%d", &n);
//
//	sum(n, &hap);
//
//	printf("1 ~ %d������ �� >> %d", n, hap);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int i;
//	int x, y;
//	int GCD;
//	int small;
//
//	printf("x�� �Է� >> ");
//	scanf("%d", &x);
//	printf("y�� �Է� >> ");
//	scanf("%d", &y);
//
//	small = x > y ? x : y;
//
//	for (i = 1; i <= small; i++) {
//		if (x % i == 0 && y % i == 0) {
//			GCD = i;
//		}
//	}
//
//	printf("%d, %d�� �ִ����� >> %d", x, y, GCD);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int Greatest_Commom_divisor(int x, int y, int i, int* GCD) {
//	if (i > x || i > y) return 0;
//	if (x % i == 0 && y % i == 0) {
//		*GCD = i;
//	}
//	Greatest_Commom_divisor(x, y, ++i,  GCD);
//}
//
//int main(void) {
//	int i = 1;
//	int x, y;
//	int GCD;
//
//	printf("x�� �Է� >> ");
//	scanf("%d", &x);
//	printf("y�� �Է� >> ");
//	scanf("%d", &y);
//
//	Greatest_Commom_divisor(x, y, i, &GCD);
//
//	printf("%d, %d�� �ִ����� >> %d", x, y, GCD);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int i;
//	int n;
//
//	printf("n�� >> ");
//	scanf("%d", &n);
//
//	printf("n�� ��� >>");
//	for (i = 1; i <= n; i++) {
//		if (n % i == 0) printf(" %d", i);
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int person() {
//	int n;
//	printf("�Է� (����: 0, ����: 1, ��: 2) >> ");
//	do {
//		scanf("%d", &n);
//	} while (n < 0 || n > 2);
//
//	return n;
//}
//
//int computer() {
//	int n = rand() % 3;
//	switch (n) {
//	case 0: printf("��ǻ�� >> ����\n\n"); break;
//	case 1: printf("��ǻ�� >> ����\n\n"); break;
//	case 2: printf("��ǻ�� >> ��\n\n"); break;
//	}
//	return n;
//}
//
//void match(int p, int c, int* p_W, int* c_W, int* draw) {
//	if (p - c == 1 || p - c == -2) (*p_W)++;
//	else if (c - p == 1 || c - p == -2) (*c_W)++;
//	else (*draw)++;
//}
//
//int main(void) {
//	int p, c;
//	int p_W = 0, c_W = 0, draw = 0;
//	srand((unsigned)time(NULL));
//
//	printf("���������� ���� ����!\n\n");
//	while (1) {
//		p = person();
//		c = computer();
//		match(p, c, &p_W, &c_W, &draw);
//		printf("��: %d, ��ǻ��: %d, ���º�: %d\n\n", p_W, c_W, draw);
//	}
//
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Game_369(int n) {
	int flag = 0;
	int size;
	char number;
	char game[10];

	for (int i = 1; i <= n; i++) {
		int count_369 = 0;

		printf("%c: ", 'A' + flag);
		scanf("%d", &number);
		sprintf(game, "%d", i);

		size = strlen(game);
		for (int i = 0; i < size; i++) {
			if (game[i] == 3 || game[i] == 6 || game[i] == 9) {
				count_369++;
			}
		}
	}
}

int main(void) {
	int n;

	printf("n���� �Է��ϼ��� >> ");
	scanf("%d", &n);

	printf("%d���� 369���� ����!\n\n");

	Game_369(n);

	return 0;
}