//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h> 
//
//struct GM {
//	int no;
//	char name[10];
//	int part;
//	int salary;
//};
//struct COMPANY {
//	GM gms[5];
//	int gmCount = 0;
//};
//
//COMPANY HireCM_once(COMPANY gameCo) {
//	gameCo.gms[gameCo.gmCount].no = gameCo.gmCount + 1;
//	printf("�̸�: ");
//	scanf(" %s", gameCo.gms[gameCo.gmCount].name);
//	printf("�μ�: ");
//	scanf("%d", &gameCo.gms[gameCo.gmCount].part);
//	printf("����: ");
//	scanf("%d", &gameCo.gms[gameCo.gmCount].salary);
//	gameCo.gmCount++;
//	return gameCo;
//}
//
//int main(void) {
//	printf("������ ����غ���!\n");
//	COMPANY gameCo;
//
//	printf("���� GM���� ����ұ�?\n");
//	while (1) {
//		gameCo = HireCM_once(gameCo);
//		printf("�� ����ұ�?(y/n) : ");
//		char ch;
//		do {
//			ch = getchar();
//		} while (ch != 'y' && ch != 'n');
//		if (ch == 'n') break;
//	}
//	printf("GM %d���� �̾Ҵ�!\n", gameCo.gmCount);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//struct SNACK {
//	int price;
//	int stock;
//	char name[20];
//};
//
//void main() {
//	const int N = 2;
//	SNACK snacks[N] = { {1500, 3, "����Ĩ"}, {1000, 2, "�ް�"} };
//
//	printf("<<�������Ǳ�!>>\n");
//	for (int i = 0; i < N; i++) {
//		printf("%d.[%6s] %4d�� (%d������)\n", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);
//	}
//
//	int choice;
//	scanf("%d", &choice);
//	printf("%s�� ���Խ��ϴ�\n", snacks[choice - 1].name);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//struct SNACK {
//	int price;
//	int stock;
//	char name[20];
//};
//
//void main() {
//	const int N = 5;
//	SNACK snacks[N] = { {1500, 3, "����Ĩ"}, {1000, 2, "�ް�"},{1000, 3, "����"}, {1500, 2, "�ݶ�"}, {1000, 3, "���ݸ�"}};
//
//	int choice;
//	int money_1 = 0;
//	int money_2 = 0;
//	int M_flag = 1;
//
//	printf("<<�������Ǳ�!>>\n");
//	for (int i = 0; i < N; i++) {
//		printf("\n%d.[%6s] %4d�� (%d������)", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);
//	}
//
//	while (1) {
//		while (M_flag) {
//			printf("\n\n���ұݾ��� �Է����ּ���! >> ");
//			scanf("%d", &money_2);
//			if (money_2 < 0) {
//				printf("\n���ұݾ��� �߸��Ǿ����ϴ�\n");
//				continue;
//			}
//			money_1 += money_2;
//			M_flag = 0;
//		}
//
//		for (int i = 0; i < N; i++) {
//			printf("\n%d.[%6s] %4d�� (%d������)", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);
//		}
//		printf("\n�ܿ��ݾ� : %d\n\n", money_1);
//
//		printf("\n���Ĺ�ȣ�� �Է����ּ��� (0 �Է½� ����)>> ");
//		scanf("%d", &choice);
//
//		if (!choice) break;
//
//		if (choice < 1 || choice > N) {
//			printf("�߸��� ��ȣ�� �Է��Ͽ����ϴ�\n");
//			continue;
//		}
//
//		if (!snacks[choice - 1].stock) {
//			printf("%s�� ��� �����մϴ�\n)", snacks[choice - 1].name);
//			continue;
//		}
//
//		if (money_1 < snacks[choice - 1].price) {
//			printf("�ݾ��� �����մϴ�. (�ܿ��ݾ� : %d)\n", money_1);
//			M_flag = 1;
//			continue;
//		}
//
//		money_1 -= snacks[choice - 1].price;
//		printf("%s(��)�� ���Խ��ϴ�.\n", snacks[choice - 1].name);
//		snacks[choice - 1].stock -= 1;
//	}
//	printf("�Ž�����: %d", money_1);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//	int* iptr = (int*)malloc(sizeof(int));
//	char* cptr = (char*)malloc(sizeof(char));
//	double* dptr = (double*)malloc(sizeof(double));
//	*iptr = 5;
//	*cptr = 'a';
//	*dptr = 3.5;
//	printf("%d %c %lf", *iptr, *cptr, *dptr);
//
//	free(iptr);
//	free(cptr);
//	free(dptr);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//	int nRow = 5, nCol = 4;
//	int** aNum;
//
//	aNum = (int**)malloc(nRow * sizeof(int*)); // int�� ����� 
//	for (int i = 0; i < nRow; i++) {
//		aNum[i] = (int*)malloc(nCol * sizeof(int)); // int �����ͷ� ����� ������ ����Ʈ ���� Ŀ��.
//
//		for (int j = 0; j < nCol; j++) {
//			aNum[i][j] = i * 10 + j;
//		}
//	}
//
//	for (int i = 0; i < nRow; i++) {
//		for (int j = 0; j < nCol; j++) {
//			printf("%02d ", aNum[i][j]);
//		}
//		printf("\n");
//	}
//
//	for (int i = 0; i < nRow; i++) {
//		free(aNum[i]);
//	}
//	free(aNum);
//
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int nRow = 5, nCol = 4;
	int** aNum;

	int** aNum = (int*)(new int[40]);
	for (int i = 0; i < nRow; i++) {
		aNum[i] = new int[16];

		for (int j = 0; j < nCol; j++) {
			aNum[i][j] = i * 10 + j;
		}
	}

	for (int i = 0; i < nRow; i++) {
		for (int j = 0; j < nCol; j++) {
			printf("%02d ", aNum[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < nRow; i++) {
		delete aNum[i];
	}
	delete aNum;

	return 0;
}