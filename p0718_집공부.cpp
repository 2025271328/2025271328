//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int fibonacci(int n) {
//	printf("%d", n);
//	if (n <= 2) return 1;
//	printf("%d\n", n);
//	return fibonacci(n - 1) + fibonacci(n - 2);
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	printf("\n%d\n", fibonacci(n));
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int number_hap(int n) {
//	if (n < 1) return 0;
//	return number_hap(n - 1) + n;
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	printf("1 ~ %d까지의 합: %d", n, number_hap(n));
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main(void) {
//	char ss[100];
//	char tt[100];
//
//	printf("문자열을 입력하세요: ");
//	scanf("%s", ss);
//	
//	int SIZE = strlen(ss);
//	
//	for (int i = 0; i < SIZE; i++) {
//		tt[i] = ss[SIZE - (i + 1)];
//	}
//
//	tt[SIZE] = '\0';
//
//	printf("내용을 거꾸로 출력 ==> %s", tt);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <string.h>
//#include <stdio.h>
//
//int main(void) {
//	char ss[100];
//	char tt[100];
//
//	int diff = 'a' - 'A';
//
//	printf("문자 입력: ");
//	fgets(ss, sizeof(ss), stdin);
//
//	int SIZE = strlen(ss);
//
//	for (int i = 0; i < SIZE; i++) {
//		if (ss[i] >= 'a' && ss[i] <= 'z') {
//			tt[i] = ss[i] - diff;
//		}
//		else if (ss[i] >= 'A' && ss[i] <= 'Z') {
//			tt[i] = ss[i] + diff;
//		}
//		else {
//			tt[i] = ss[i];
//		}
//	}
//
//	tt[SIZE] = '\0';
//
//	printf("변환된 문자 ==> %s", tt);
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main(void) {
	int gugu[10][10];
	int i, k;

	for (i = 1; i <= 9; i++) {
		for (k = 1; k <= 9; i++) {
			gugu[i][k] = i * k;
		}
	}

	for (i = 1; i <= 9; i++) {
		for (k = 1; k <= 9; i++) {
			printf("%d * %d = %d  ", i, k, gugu[i][k]);
		}
		printf("\n");
	}
	return 0;
}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//void main() {
//	struct student {
//		char name[10];
//		int kor;
//		int eng;
//		float avg;
//	};
//
//	struct student s;
//
//	printf("이름: ");
//	scanf("%s", s.name, 9);
//	
//	printf("국어 점수: ");
//	scanf("%d", &s.kor);
//
//	printf("영어 점수: ");
//	scanf("%d", &s.eng);
//
//	s.avg = (s.kor + s.eng) / 2.0f;
//
//	printf("\n--- 구조체 활용 ---\n");
//	printf("학생 이름 ==> %s\n", s.name);
//	printf("국어 점수 ==> %d\n", s.kor);
//	printf("영어 점수 ==> %d\n", s.eng);
//	printf("평균 점수 ==> %5.1f\n", s.avg);
//
//}

//#include <stdio.h>
//
//struct BYTE {
//	char a;
//	char b;
//};
//
//void main() {
//	struct BYTE a;
//	a.a = 10;
//	a.b = 20;
//	printf("%d %d", a.a, a.b);
//}

