//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int a, b;
//	int result;
//	char k;
//
//	printf("첫 번째 계산할 값 ==> ");
//	scanf("%d", &a);
//	printf("*-+/%%==> ");
//	scanf(" %c", &k);
//	printf("두 번째 계산할 값 ==> ");
//	scanf("%d", &b);
//
//	// << 공백 유무 이유?
//
//	if (k == '+') {
//		result = a + b;
//		printf("%d + %d = %d\n", a, b, result);
//	}
//	if (k == '-') {
//		result = a - b;
//		printf("%d - %d = %d\n", a, b, result);
//	}
//	if (k == '*') {
//		result = a * b;
//		printf("%d * %d = %d\n", a, b, result);
//	}
//	if (k == '/') {
//		if (b != 0) {
//			result = a / b;
//			printf("%d / %d = %d\n", a, b, result);
//		}
//		else {
//			printf(" 0으로 나누면 안됩니다. \n");
//		}
//	} 
//	if (k == '%') {
//		if (b != 0) {
//			result = a % b;
//			printf("%d %% %d = %d\n", a, b, result);
//		}
//		else {
//			printf(" 0으로 나누면 안됩니다. \n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//void main() {
//	printf("%d\n", 123);
//	printf("%5d\n", 123);
//	printf("%05d\n", 123);
//
//	printf("%f\n", 123.45);
//	printf("%7.1f\n", 123.45);
//	printf("%7.3f\n", 123.45);
//
//	printf("%s\n", "Basic-C");
//	printf("%10s\n", "Basic-C");
//}

#include <stdio.h>

void main() {
	printf("\n줄 바꿈\n연습 \n");
	printf("\t탭키\t연습 \n");
	printf("이것을\r덮어씁니다 \n");
	printf("\a\a\a삐소리 3번 \n");
	printf("글자가 \"강조\"되는 효과 \n");
	printf("\\\\\\ 역슬래시 세 개 출력 \n");
}