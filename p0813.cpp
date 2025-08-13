//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <malloc.h>
//
//void main() {
//	int* p;
//	int i, hap = 0;
//	int cnt;
//
//	printf(" �Է��� ������? ");
//	scanf("%d", &cnt);
//
//	p = (int*)malloc(sizeof(int) * cnt);
//
//	for (i = 0; i < cnt; i++) {
//		printf("%d ��° ���� : ", i + 1);
//		scanf("%d", p + i);
//	}
//
//	for (i = 0; i < cnt; i++) {
//		hap = hap + *(p + i);
//	}
//
//	printf("�Է� ���� �� => %d\n", hap);
//
//	free(p);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <malloc.h>
//
//void main() {
//	int* p, *s;
//	int i, j;
//
//	printf("malloc() �Լ� ���\n");
//	p = (int*)malloc(sizeof(int) * 3);
//
//	for (i = 0; i < 3; i++) {
//		printf("�Ҵ�� ���� �ʱ갪 p[%d] ==> %d\n", i, p[i]);
//	}
//
//	free(p);
//
//	printf("\ncalloc() �Լ� ���\n");
//	s = (int*)calloc(sizeof(int), 3);
//
//	for (j = 0; j < 3; j++) {
//		printf("�Ҵ�� ���� �ʱ갪 p[%d] ==> %d\n", j, s[j]);
//	}
//
//	free(s);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <malloc.h>
//
//void main() {
//	int* p;
//	int i, hap = 0;
//	int cnt = 0;
//	int data;
//
//	p = (int*)malloc(sizeof(int) * 1);
//	printf("1 ��° ���� : ");
//	scanf("%d", &p[0]);
//	cnt++;
//
//	for (i = 2; ; i++) {
//		printf(" %d ��° ���� : ");
//		scanf("%d", &data);
//
//		if (data != 0) {
//			p = (int*)realloc(p, sizeof(int) * 1);
//		}
//		else {
//			break;
//		}
//
//		p[i - 1] = data;
//		cnt++;
//	}
//
//	for (i = 0; i < cnt; i++) {
//		hap = hap + *(p + i);
//	}
//
//	printf("�Է��� ���� �� ==> %d\n", hap);
//
//	free(p);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//	int nRow = 5, nCol = 4;
//	int** aNum;
//
//	aNum = (int**)malloc(nRow * sizeof(int*)); // int �����ͷ� ����� 
//	for (int i = 0; i < nRow; i++) {
//		aNum[i] = (int*)malloc(nCol * sizeof(int)); // int�� ����   << ����Ʈ �� �ٸ�
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

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//	int nRow = 5, nCol = 4;
//	int** aNum;
//
//	aNum = new int*[nRow];
//	for (int i = 0; i < nRow; i++) {
//		aNum[i] = new int[nCol];
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
//		delete aNum[i];
//	}
//	delete aNum;
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//	int* p;
//	p = (int*)malloc(sizeof(int) * 10);
//
//	for (int i = 0; i < 10; i++) {
//		*(p + i) = rand() % 10 + 1;
//		printf("%d ", p[i]);
//	}
//
//	free(p);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h> //�������(scanf, printf �� ����)
//#include <stdlib.h> //�������(malloc, free, srand, rand �� ����)
//#include <time.h> // �������(time �� ����)
//
//void func_sort(int* pNum, int N); // ���� �Լ�
//void func_swap(int& a, int& b); // ���� �Լ�
//
//int main(void) { // �ڵ� ������ 
//	int N, * pNum; // �迭(pNum)�� �迭�� ũ��(N)�� ���ϴ� ���� ����
//	scanf("%d", &N); // N�� Ű����� �Է�
//
//	pNum = (int*)malloc(sizeof(int) * N); // �迭(pNum)�� 4����Ʈ * N��ŭ �޸� �Ҵ�
//
//	srand((unsigned int)time(NULL)); // time�� ���� �õ尪 ����
//
//	printf("<�������� �Է¹��� �� ���>\n"); // "" ���� �� ���
//	for (int i = 0; i < N; i++) { // i�� i < N���� i++�ϸ� �ݺ�
//		*(pNum + i) = (rand() % N) + 1; // pNum[i]�� 1 ~ N �� ������ �� ����
//		printf("%2d", pNum[i]); // pNum[i] �� ���
//	}
//
//	func_sort(pNum, N); // ���� �Լ��� �迭(pNum)�� �迭�� ũ��(N)�� ���ڷ� �Է�
//
//	printf("\n<�������� ���ĵ� �� ���>\n");  // "" ���� �� ���
//	for (int i = 0; i < N; i++) { // i�� i < N���� i++�ϸ� �ݺ�
//		printf("%2d", pNum[i]); // pNum[i] �� ���
//		if (i % 10 == 9) printf("\n"); // 10��° ���� ����
//
//	}
//
//	free(pNum); // �Ҵ�� �޸� ����
//	return 0; // 0 ��ȯ
//}
//
//void func_sort(int* pNum, int N) { // ���� ���� �Լ�
//	for (int i = 0; i < N; i++) { // i�� i < N���� i++�ϸ� �ݺ�
//		for (int j = 0; j < N; j++) { // j�� j < N���� j++�ϸ� �ݺ�
//			if (pNum[i] > pNum[j]) { // pNum[i]���� pNum[j]������ Ŭ �� if {} ���� �ڵ� ����
//				func_swap(pNum[i], pNum[j]); // ���� �Լ��� pNum[i]�� pNum[j]�� ���ڷ� �Է�
//			}
//		}
//	}
//}
//
//void func_swap(int& a, int& b) { // int& a ==> int& a = pNum[i]�� �� pNum[i]�� �̸��� a�ε� ����� (a���� ����Ǹ� pNum[i]���� �����)
//	int temp = a; // temp�� a�� ���� 
//	a = b; // a�� b�� ���� 
//	b = temp; // b�� temp��(a = b; ���� ���� a��) ���� 
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //�������(scanf, printf �� ����)
#include <stdlib.h> //�������(malloc, free, srand, rand �� ����)
#include <time.h> // �������(time �� ����

struct DATA {
	int N, *pNum; // �迭(pNum)�� �迭�� ũ��(N)�� ���ϴ� ���� ����
};

void func_sort(DATA *pD); // ���� �Լ�
//void func_swap(int& a, int& b); // ���� �Լ�
void func_swap(int& a, int& b) { // int& a ==> int& a = pNum[i]�� �� pNum[i]�� �̸��� a�ε� ����� (a���� ����Ǹ� pNum[i]���� �����)// ���۷��� ����
	int temp = a; // temp�� a�� ���� 
	a = b; // a�� b�� ���� 
	b = temp; // b�� temp��(a = b; ���� ���� a��) ���� 
}

int main(void) { // �ڵ� ������ 
	DATA data;
	scanf("%d", &data.N); // N�� Ű����� �Է�

	data.pNum = (int*)malloc(sizeof(int) * data.N); // �迭(pNum)�� 4����Ʈ * N��ŭ �޸� �Ҵ�

	srand((unsigned int)time(NULL)); // time�� ���� �õ尪 ����

	printf("<�������� �Է¹��� �� ���>\n"); // "" ���� �� ���
	for (int i = 0; i < data.N; i++) { // i�� i < N���� i++�ϸ� �ݺ� // N�� �ݺ�
		*(data.pNum + i) = (rand() % data.N) + 1; // pNum[i]�� 1 ~ N �� ������ �� ����
		printf("%2d", data.pNum[i]); // pNum[i] �� ���
	}

	func_sort(&data); // ���� �Լ��� �迭(pNum)�� �迭�� ũ��(N)�� ���ڷ� �Է�

	printf("\n<�������� ���ĵ� �� ���>\n");  // "" ���� �� ���
	for (int i = 0; i < data.N; i++) { // i�� i < N���� i++�ϸ� �ݺ�// N�� �ݺ�
		printf("%2d", data.pNum[i]); // pNum[i] �� ��� // �� 2�� ������ ���
		if (i % 10 == 9) printf("\n"); // 10��° ���� ����

	}

	free(data.pNum); // �Ҵ�� �޸� ����
	return 0; // 0 ��ȯ
}

void func_sort(DATA *pD) { // ���� ���� �Լ�
	for (int i = 0; i < (*pD).N; ++i) { // i�� i < N���� i++�ϸ� �ݺ�// N�� �ݺ�
		for (int j = i; j < pD->N; ++j) { // j�� j < N���� j++�ϸ� �ݺ�// (N - i)�� �ݺ�
			if (pD->pNum[i] > pD->pNum[j]) { // pNum[i]���� pNum[j]������ Ŭ �� if {} ���� �ڵ� ����
				func_swap(pD->pNum[i], pD->pNum[j]); // ���� �Լ��� pNum[i]�� pNum[j]�� ���ڷ� �Է�// pNum[i]���� pNum[j]���� ���� �ٲٱ�(����) �Լ�
			}
		}
	}
}