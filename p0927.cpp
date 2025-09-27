//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void Game_369(int n) {
//	int flag = 0;
//	int size_N;
//	int size_G;
//	char number[11];
//	char game[11];
//
//	for (int i = 1; i <= n; i++) {
//		int count_369 = 0;
//
//		printf("%c: ", 'A' + flag);
//		flag = !flag;
//		
//		scanf("%s", number);
//		sprintf(game, "%d", i);
//	
//		size_N = strlen(number);
//		size_G = strlen(game);
//
//		number[size_N] = '\0';
//
//		for (int j = 0; j < size_G; j++) {
//			if (game[j] == '3' || game[j] == '6' || game[j] == '9') {
//				count_369++;
//			}
//		}
//
//		for (int j = 0; j < count_369; j++) {
//			if (number[j] != 'c') {
//				printf("%c 승리!", 'A' + flag);
//				flag = -1;
//				break;
//			} 
//		}
//
//		if (flag == -1) break;
//		else if (count_369) continue; 
//		else if (strcmp(game, number)) {
//			printf("%c 승리", 'A' + flag);
//			break;
//		}
//	}
//}
//
//int main(void) {
//	int n;
//
//	printf("n값을 입력하세요 >> ");
//	scanf("%d", &n);
//
//	printf("%d까지 369게임 시작! ('짝은 c입력)\n\n", n);
//
//	Game_369(n);
//
//	printf("\n게임이 종료되었습니다!");
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//void Selection_Sort(int* number, int size) {
//	int temp;
//
//	for (int i = 0; i < size - 1; i++) {
//		int minimum_value = i;
//		for (int j = i + 1; j < size; j++) {
//			if (number[j] < number[minimum_value]) {
//				minimum_value = j;
//			}
//		}
//
//		if (i != minimum_value) {
//			temp = number[i];
//			number[i] = number[minimum_value];
//			number[minimum_value] = temp;
//		}
//	}
//}
//
//void Bubble_Sort(int* number, int size) {
//	int temp;
//
//	for (int i = size - 1; i > 0; i--) {
//		for (int j = 0; j < i; j++) {
//			if (number[j] > number[j + 1]) {
//				temp = number[j];
//				number[j] = number[j + 1];
//				number[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main() {
//	int* number_S;
//	int* number_B;
//	int size;
//
//	//선택정렬
//	printf("선택정렬. 입력할 숫자 개수 >> ");
//	scanf("%d", &size);
//
//	number_S = (int*)malloc(sizeof(int) * size);
//
//	printf("숫자를 입력하세요 >> ");
//	for (int i = 0; i < size; i++) {
//		scanf("%d", number_S + i);
//	}
//
//	Selection_Sort(number_S, size);
//
//
//	printf("\n선택 정렬(오름차순) >>");
//	for (int i = 0; i < size; i++) {
//		printf(" %d", number_S[i]);
//	}
//	
//	//버를정렬
//	printf("\n\n버블정렬. 입력할 숫자 개수 >> ");
//	scanf("%d", &size);
//
//	number_B= (int*)malloc(sizeof(int) * size);
//
//	printf("숫자를 입력하세요 >> ");
//	for (int i = 0; i < size; i++) {
//		scanf("%d", number_B + i);
//	}
//
//	Bubble_Sort(number_B, size);
//
//	printf("\n버블 정렬(오름차순) >>");
//	for (int i = 0; i < size; i++) {
//		printf(" %d", number_B[i]);
//	}
//
//	free(number_S);
//	free(number_B);
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibonacci_loop (int n) {	// 배열 쓰기 
	int i = 0;
	int fibonacci[100] = {1, 1};

	for (int i = 2; i < n; i++) {
		fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
	}

	return fibonacci[n - 1];
}

int fibonacci_recursion(int n) {
	printf("%d", n);
	if (n <= 2) return 1;
	printf("%d\n", n);
	return fibonacci_recursion(n - 1) + fibonacci_recursion(n - 2);
}

int main(void) {
	int n;

	//반복문
	printf("반복문. 피보나치수열의 n값 입력 >> ");
	scanf("%d", &n);
	printf("\n%d\n", fibonacci_loop(n));

	//재귀함수
	printf("재귀함수. 피보나치수열의 n값 입력 >> ");
	scanf("%d", &n);
	printf("\n\n%d\n", fibonacci_recursion(n));
}