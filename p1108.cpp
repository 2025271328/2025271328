//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int n = 0;
//	printf("n >> ");
//	scanf("%d", &n);
//
//	for (int i = 0; i < n / 2; i++) {
//		for (int j = i; j < n / 2; j++) {
//			printf(" ");
//		}
//		for (int z = 0; z < 1 + i * 2; z++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < n / 2; i++) {
//		for (int j = 0; j < 1 + (n / 2 - i) * 2; j++) {
//			printf("*");
//		}
//		for (int z = 0; z < 0; z++) {
//			printf(" ");
//		}
//		printf("\n");
//	}
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int* p = new int[10];
//	int** pp = new int*[10];
//
//	**pp = &p;
//
//
//	delete[] p;
//	delete[] pp;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	char number[10] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '\0' };
//
//	printf("숫자문자열을 숫자로 변환\n");
//	
//	int num = atoi(number);
//	printf("%d ", num);
//	
//}

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
//
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

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y;
	printf("x >> ");
	scanf("%d", &x);
	printf("y >> ");
	scanf("%d", &y);

	for (int i = x; i <= y; i++) {
		printf("%d의 제곱수 = %d\n", i, i * i);
	}

}

