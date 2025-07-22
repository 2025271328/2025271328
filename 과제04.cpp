//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//void main() {
//	struct bibim {
//		int a;
//		float b;
//		char c;
//		char d[5];
//	};
//
//	struct bibim b1;
//
//	b1.a = 10;
//	b1.b = 1.1f;
//	b1.c = 'A';
//	strcpy(b1.d, "ABCD");
//
//	printf("b1.a ==> %d \n", b1.a);
//	printf("b2.a ==> %f \n", b1.b);
//	printf("b3.a ==> %c \n", b1.c);
//	printf("b4.a ==> %s \n", b1.d);
//
//}

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

#include <stdio.h>

void main() {
	enum week {sun, mon, tue, wed, thu, fri, sat};

	enum week ww;

	ww = sat;

	if (ww == sun)
		printf("오늘은 일요일입니다.\n");
	else
		printf("오늘은 일요일이 아닙니다.\n");

}