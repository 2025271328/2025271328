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
//	printf("이름: ");
//	scanf(" %s", gameCo.gms[gameCo.gmCount].name);
//	printf("부서: ");
//	scanf("%d", &gameCo.gms[gameCo.gmCount].part);
//	printf("월급: ");
//	scanf("%d", &gameCo.gms[gameCo.gmCount].salary);
//	gameCo.gmCount++;
//	return gameCo;
//}
//
//int main(void) {
//	printf("게임을 출시해보자!\n");
//	COMPANY gameCo;
//
//	printf("먼저 GM부터 고용할까?\n");
//	while (1) {
//		gameCo = HireCM_once(gameCo);
//		printf("더 고용할까?(y/n) : ");
//		char ch;
//		do {
//			ch = getchar();
//		} while (ch != 'y' && ch != 'n');
//		if (ch == 'n') break;
//	}
//	printf("GM %d명을 뽑았다!\n", gameCo.gmCount);
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
//	SNACK snacks[N] = { {1500, 3, "레몬칩"}, {1000, 2, "달고나"} };
//
//	printf("<<과자자판기!>>\n");
//	for (int i = 0; i < N; i++) {
//		printf("%d.[%6s] %4d원 (%d개남음)\n", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);
//	}
//
//	int choice;
//	scanf("%d", &choice);
//	printf("%s가 나왔습니다\n", snacks[choice - 1].name);
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
//	SNACK snacks[N] = { {1500, 3, "감자칩"}, {1000, 2, "달고나"},{1000, 3, "생수"}, {1500, 2, "콜라"}, {1000, 3, "초콜릿"}};
//
//	int choice;
//	int money_1 = 0;
//	int money_2 = 0;
//	int M_flag = 1;
//
//	printf("<<간식자판기!>>\n");
//	for (int i = 0; i < N; i++) {
//		printf("\n%d.[%6s] %4d원 (%d개남음)", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);
//	}
//
//	while (1) {
//		while (M_flag) {
//			printf("\n\n지불금액을 입력해주세요! >> ");
//			scanf("%d", &money_2);
//			if (money_2 < 0) {
//				printf("\n지불금액이 잘못되었습니다\n");
//				continue;
//			}
//			money_1 += money_2;
//			M_flag = 0;
//		}
//
//		for (int i = 0; i < N; i++) {
//			printf("\n%d.[%6s] %4d원 (%d개남음)", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);
//		}
//		printf("\n잔여금액 : %d\n\n", money_1);
//
//		printf("\n간식번호를 입력해주세요 (0 입력시 종료)>> ");
//		scanf("%d", &choice);
//
//		if (!choice) break;
//
//		if (choice < 1 || choice > N) {
//			printf("잘못된 번호를 입력하였습니다\n");
//			continue;
//		}
//
//		if (!snacks[choice - 1].stock) {
//			printf("%s의 재고가 부족합니다\n)", snacks[choice - 1].name);
//			continue;
//		}
//
//		if (money_1 < snacks[choice - 1].price) {
//			printf("금액이 부족합니다. (잔여금액 : %d)\n", money_1);
//			M_flag = 1;
//			continue;
//		}
//
//		money_1 -= snacks[choice - 1].price;
//		printf("%s(이)가 나왔습니다.\n", snacks[choice - 1].name);
//		snacks[choice - 1].stock -= 1;
//	}
//	printf("거스름돈: %d", money_1);
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
//	aNum = (int**)malloc(nRow * sizeof(int*)); // int로 만들고 
//	for (int i = 0; i < nRow; i++) {
//		aNum[i] = (int*)malloc(nCol * sizeof(int)); // int 포인터로 만들기 때문에 바이트 수가 커짐.
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