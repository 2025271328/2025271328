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
//	printf("<<�������Ǳ�!>>\n");
//	for (int i = 0; i < N; i++) {
//		printf("%d.[%6s] %4d�� (%d������)\n", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);
//	}
//
//	int choice;
//	int money;
//	
//	printf("���ұݾ��� �Է����ּ���! >> ");
//	scanf("%d", &money);
//	while (1) {
//		printf("\n���Ĺ�ȣ�� �Է����ּ��� (0 �Է½� ����)>> ");
//		scanf("%d", &choice);
//		if (!choice) break;
//		if (money >= snacks[choice - 1].price) {
//			money -= snacks[choice - 1].price;
//			printf("%s(��)�� ���Խ��ϴ�.(�ܿ��ݾ� : %d)\n", snacks[choice - 1].name, money);
//		}
//		else {
//			printf("�ݾ��� �����մϴ�. (�ܿ��ݾ� : %d)\n", money);
//		}
//	}
//	printf("�Ž�����: %d", money);
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

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int nRow = 5, nCol = 4;
	int** aNum;

	aNum = (int**)malloc(nRow * sizeof(int*));
	for (int i = 0; i < nRow; i++) {
		aNum[i] = (int*)malloc(nCol * sizeof(int));

		for (int j = 0; j < nCol; j++) {
			aNum[i][j] = i * 10 + j;
		}
	}

	for (int i = 0; i < nRow; i++) {
		for (int j = 0; j < nCol; j++) {
			printf("&02d", aNum[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < nRow; i++) {
		free(aNum[i]);
	}
	free(aNum);
	return 0;
}