//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <malloc.h>
//
//void main() {
//	int* p;
//	int i, hap = 0;
//	int cnt;
//
//	printf(" 입력할 개수는? ");
//	scanf("%d", &cnt);
//
//	p = (int*)malloc(sizeof(int) * cnt);
//
//	for (i = 0; i < cnt; i++) {
//		printf("%d 번째 숫자 : ", i + 1);
//		scanf("%d", p + i);
//	}
//
//	for (i = 0; i < cnt; i++) {
//		hap = hap + *(p + i);
//	}
//
//	printf("입력 숫자 합 => %d\n", hap);
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
//	printf("malloc() 함수 사용\n");
//	p = (int*)malloc(sizeof(int) * 3);
//
//	for (i = 0; i < 3; i++) {
//		printf("할당된 곳의 초깃값 p[%d] ==> %d\n", i, p[i]);
//	}
//
//	free(p);
//
//	printf("\ncalloc() 함수 사용\n");
//	s = (int*)calloc(sizeof(int), 3);
//
//	for (j = 0; j < 3; j++) {
//		printf("할당된 곳의 초깃값 p[%d] ==> %d\n", j, s[j]);
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
//	printf("1 번째 숫자 : ");
//	scanf("%d", &p[0]);
//	cnt++;
//
//	for (i = 2; ; i++) {
//		printf(" %d 번째 숫자 : ");
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
//	printf("입력한 숫자 합 ==> %d\n", hap);
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
//	aNum = (int**)malloc(nRow * sizeof(int*)); // int 포인터로 만들고 
//	for (int i = 0; i < nRow; i++) {
//		aNum[i] = (int*)malloc(nCol * sizeof(int)); // int로 만듬   << 바이트 수 다름
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
//#include <stdio.h> //헤더파일(scanf, printf 등 포함)
//#include <stdlib.h> //헤더파일(malloc, free, srand, rand 등 포함)
//#include <time.h> // 헤더파일(time 등 포함)
//
//void func_sort(int* pNum, int N); // 정렬 함수
//void func_swap(int& a, int& b); // 스왑 함수
//
//int main(void) { // 코드 시작점 
//	int N, * pNum; // 배열(pNum)과 배열의 크기(N)를 뜻하는 변수 선언
//	scanf("%d", &N); // N값 키보드로 입력
//
//	pNum = (int*)malloc(sizeof(int) * N); // 배열(pNum)에 4바이트 * N만큼 메모리 할당
//
//	srand((unsigned int)time(NULL)); // time에 따라 시드값 변경
//
//	printf("<랜덤으로 입력받은 수 출력>\n"); // "" 안의 값 출력
//	for (int i = 0; i < N; i++) { // i가 i < N까지 i++하며 반복
//		*(pNum + i) = (rand() % N) + 1; // pNum[i]에 1 ~ N 중 랜덤한 수 대입
//		printf("%2d", pNum[i]); // pNum[i] 값 출력
//	}
//
//	func_sort(pNum, N); // 정렬 함수에 배열(pNum)과 배열의 크기(N)를 인자로 입력
//
//	printf("\n<오름차순 정렬된 수 출력>\n");  // "" 안의 값 출력
//	for (int i = 0; i < N; i++) { // i가 i < N까지 i++하며 반복
//		printf("%2d", pNum[i]); // pNum[i] 값 출력
//		if (i % 10 == 9) printf("\n"); // 10번째 마다 엔터
//
//	}
//
//	free(pNum); // 할당된 메모리 해제
//	return 0; // 0 반환
//}
//
//void func_sort(int* pNum, int N) { // 버블 정렬 함수
//	for (int i = 0; i < N; i++) { // i가 i < N까지 i++하며 반복
//		for (int j = 0; j < N; j++) { // j가 j < N까지 j++하며 반복
//			if (pNum[i] > pNum[j]) { // pNum[i]값이 pNum[j]값보다 클 때 if {} 안의 코드 실행
//				func_swap(pNum[i], pNum[j]); // 스왑 함수에 pNum[i]와 pNum[j]을 인자로 입력
//			}
//		}
//	}
//}
//
//void func_swap(int& a, int& b) { // int& a ==> int& a = pNum[i]일 때 pNum[i]의 이름을 a로도 사용함 (a값이 변경되면 pNum[i]값도 변경됨)
//	int temp = a; // temp에 a값 대입 
//	a = b; // a에 b값 대입 
//	b = temp; // b에 temp값(a = b; 실행 전의 a값) 대입 
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //헤더파일(scanf, printf 등 포함)
#include <stdlib.h> //헤더파일(malloc, free, srand, rand 등 포함)
#include <time.h> // 헤더파일(time 등 포함

struct DATA {
	int N, *pNum; // 배열(pNum)과 배열의 크기(N)를 뜻하는 변수 선언
};

void func_sort(DATA *pD); // 정렬 함수
//void func_swap(int& a, int& b); // 스왑 함수
void func_swap(int& a, int& b) { // int& a ==> int& a = pNum[i]일 때 pNum[i]의 이름을 a로도 사용함 (a값이 변경되면 pNum[i]값도 변경됨)// 래퍼런스 문법
	int temp = a; // temp에 a값 대입 
	a = b; // a에 b값 대입 
	b = temp; // b에 temp값(a = b; 실행 전의 a값) 대입 
}

int main(void) { // 코드 시작점 
	DATA data;
	scanf("%d", &data.N); // N값 키보드로 입력

	data.pNum = (int*)malloc(sizeof(int) * data.N); // 배열(pNum)에 4바이트 * N만큼 메모리 할당

	srand((unsigned int)time(NULL)); // time에 따라 시드값 변경

	printf("<랜덤으로 입력받은 수 출력>\n"); // "" 안의 값 출력
	for (int i = 0; i < data.N; i++) { // i가 i < N까지 i++하며 반복 // N번 반복
		*(data.pNum + i) = (rand() % data.N) + 1; // pNum[i]에 1 ~ N 중 랜덤한 수 대입
		printf("%2d", data.pNum[i]); // pNum[i] 값 출력
	}

	func_sort(&data); // 정렬 함수에 배열(pNum)과 배열의 크기(N)를 인자로 입력

	printf("\n<오름차순 정렬된 수 출력>\n");  // "" 안의 값 출력
	for (int i = 0; i < data.N; i++) { // i가 i < N까지 i++하며 반복// N번 반복
		printf("%2d", data.pNum[i]); // pNum[i] 값 출력 // 폭 2로 정수값 출력
		if (i % 10 == 9) printf("\n"); // 10번째 마다 엔터

	}

	free(data.pNum); // 할당된 메모리 해제
	return 0; // 0 반환
}

void func_sort(DATA *pD) { // 버블 정렬 함수
	for (int i = 0; i < (*pD).N; ++i) { // i가 i < N까지 i++하며 반복// N번 반복
		for (int j = i; j < pD->N; ++j) { // j가 j < N까지 j++하며 반복// (N - i)번 반복
			if (pD->pNum[i] > pD->pNum[j]) { // pNum[i]값이 pNum[j]값보다 클 때 if {} 안의 코드 실행
				func_swap(pD->pNum[i], pD->pNum[j]); // 스왑 함수에 pNum[i]와 pNum[j]을 인자로 입력// pNum[i]값과 pNum[j]값을 서로 바꾸기(스왑) 함수
			}
		}
	}
}