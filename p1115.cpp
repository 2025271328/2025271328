//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char word1[20];
//	char word2[20];
//	char tmp1[50];
//	char tmp2[30];
//	int len = 0;
//	char sentence[30] = "I like apple, and you?";
//
//	printf("%s\n", sentence);
//	printf("수정하고 싶은 단어 >> ");
//	scanf("%s", word1);
//	printf("수정 후 들어갈 단어 >> ");
//	scanf("%s", word2);
//
//	//memcpy 사용하기
//
//	char* result = strstr(sentence, word1);
//	for (int i = 0; i < 30; i++) {
//		if (result == sentence + i) break;
//		len++;
//	}
//	len = strlen(word1);
//	memcpy(tmp1, sentence, len);
//	tmp1[len] = '\0';
//
//	int copylength = strlen(sentence) - (len + strlen(word1));
//	memcpy(tmp2, sentence + len + strlen(word1), copylength);
//	tmp2[copylength] = '\0';
//
//	strcat(tmp1, word2);
//	strcat(tmp1, tmp2);
//
//	printf("%s", tmp1);
//}

//#include <stdio.h>
//#include <string.h>
//
//void replace(char* p, const char* x, const char* y) {
//	int xlen = strlen(x);
//	int ylen = strlen(y);
//
//	char* q = strstr(p, x);
//	if (q == NULL) return;
//	memmove(q + ylen, q + xlen, strlen(q + xlen) + 1);
//	memcpy(q, y, ylen);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int x, y;
//	printf("x >> ");
//	scanf("%d", &x);
//	printf("y >> ");
//	scanf("%d", &y);
//
//	for (int i = x; i <= y; i++) {
//		printf("%d의 제곱수 = %d\n", i, i * i);
//	}
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int n = 1;
//	int i;
//	int i1 = 1;
//	int num_10;
//	int num_2 = 0;
//	int tmp;
//
//	printf("10진수 입력 >> ");
//	scanf("%d", &num_10);
//
//	for (i = 0;; i++) {
//		if (num_10 < n * 2) break;
//		n *= 2;
//	}
//	for (int j = 0; j < i; j++) {
//		i1 *= 10;
//	}
//	tmp = num_10;
//
//	while (1) {
//		if (i1 == 0) num_2 += 1;
//		else num_2 += i1;
//		if (tmp - n == 0) break;
//
//		tmp -= n;
//		n /= 2;
//		i1 /= 10;
//	}
//
//	printf("%d의 2진수 변환 >> %d\n", num_10, num_2);
//	printf("%d의 16진수 변환 >> %X\n", num_10, num_10);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <time.h>
//
//int main() {
//	struct tm time_struct;
//
//	time_struct.tm_year = 2025 - 2006;
//	time_struct.tm_mon = 2;
//	time_struct.tm_mday = 20;
//	time_struct.tm_hour = 0;
//	time_struct.tm_sec = 0;
//
//	time_t time_struct_v2 = mktime(&time_struct);
//
//	time_t currentTime;
//	currentTime = time(NULL) - time_struct_v2;
//
//	printf("%d", currentTime);    
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void swap_CBA(int a, int b) {
//	int tmp;
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("swap(call by address) >> %d %d\n", a, b);
//}
//
//void swap_CBR(int* a, int* b) {
//	int tmp;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//int main() {
//	int a = 1, b = 2;
//	printf("%d %d\n\n", a, b);
//
//	swap_CBA(a, b);
//
//	swap_CBR(&a, &b);
//	printf("swap(call by reference) >> %d %d\n", a, b);
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//enum SHAPE { spade , heart, diamond, club};

// 구조체 당 카드 한 장
struct card { 
	int number;
	char shape;
};

void shuffling(card* A, char* shape, int size_A, int size_s) {
	srand(time(NULL));
	
	for (int i = 0; i < 13; i++) {
		A[i].shape = shape[0];
		A[i].number = i + 1;
	}

}

int main() {
	char shape[4] = {'S','H','D','C'};
	struct card A[52];

	for (int i = 0; i < 13; i++) {
		A[i].shape = shape[0];
		A[i].number = i + 1;
		A[i + 13].shape = shape[1];
		A[i + 13].number = i + 1;
		A[i + 26].shape = shape[2];
		A[i + 26].number = i + 1;
		A[i + 39].shape = shape[3];
		A[i + 39].number = i + 1;
	}

	printf("카드\n");
	for (int i = 0; i < 52; i++) {
		printf("%c%d ", A[i].shape, A[i].number);
	}

	shuffling(A, shape, 52, 4);

	printf("카드 섞은 후 카드\n");
	for (int i = 0; i < 52; i++) {
		printf("%c%d ", A[i].shape, A[i].number);
	}

}