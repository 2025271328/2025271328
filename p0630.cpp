#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
#define PI 3.14

//int main(void) {
//	printf("안녕하세요\n");
//
//
//	return 0;
//}

//int main(void) {
//	printf("안녕하세요");
//	return 0;
//}

//int main(void) {
//	printf("안녕하세요\n안녕하세요\n안녕하세요\n");
//	return 0;
//}

//int main(void) {
//	printf("안녕하세요\n");
//	printf("안녕하세요");
//	printf("안녕하세요\n");
//
//	return 0;
//}

//int main(void) {
//	printf("사과 1개\n");
//
//	return 0;
//}

//int main(void) {
//	int apple = 1;
//	printf("사과 %d개\n", apple);
//
//	return 0;
//}

//int main(void) {
//	printf("키보드 3개\n");
//	printf("마우스 2개\n");
//
//	return 0;
//}

//int main(void) {
//	int keyboard = 3;
//	int mouse = 2;
//	printf("키보드 %d개\n", keyboard);
//	printf("마우스 %d개\n", mouse);
//
//	return 0;
//}

//int main(void) {
//	int coin1 = 500;
//	int coin2 = 1000;
//	printf("%d + %d = %d\n", coin1, coin2, coin1 + coin2);
//
//	return 0;
//}

//int main(void) {
//	char A;
//	A = 'A';
//	printf("A = %c, A = %d\n", A, A);
//
//	return 0;
//}

//int main(void) {
//	double pi;
//	pi = 3.14;
//	float e = 2.718;
//	printf("pi = %.2lf, e = %.3f.. \n", pi, e);
//
//	return 0;
//}

//int main(void) {
//	int r = 5;
//	double pi = 3.14;
//	double a = r * r * pi;
//	double b = 2 * pi * r;
//	printf("원의 넓이 = %.3f \n원의 둘레 = %.3f", a, b);
//
//	return 0;
//}

//int main(void) {
//	int lower_side = 3;
//	int upper_side = 5;
//	int h = 7;
//	float extent = (lower_side + upper_side) * (float)h / 2;
//	
//	printf("사다리꼴의 넓이 = %.3f", extent);
//
//	return 0;
//}

//int main(void) {
//	int k;
//	printf("원하는 숫자를 입력 : ");
//	scanf_s("%d", &k);
//	printf("입력한 숫자는 : %d\n", k);
//	return 0;
//}

//int main(void) {
//	int y, k;
//	printf("더하고 싶은 값 2개 입력 : ");
//	scanf_s("%d %d", &y, &k);
//	printf("두 값의 합은 %d입니다.\n", k + y);
//	return 0;
//}

//int main(void) {
//	char a, b, c;
//	printf("문자 세 개 입력 : ");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("문자 출력 : %c%c%c\n", a, b, c);
//	return 0;
//}

//int main(void) {
//	int r;
//	float extent;
//  float PI = 3.14;
//	printf("반지름의 길이: ");
//	scanf("%d", &r);
//
//	extent = r * r * PI;
//	printf("원의 넓이: %.3f", extent);
//	
//	return 0;
//}

//int main(void) {
//	int w1, w2, H;
//	float extent;
//	printf("사다리꼴의 밑변, 윗변, 높이: ");
//	scanf("%d %d %d", &w1, &w2, &H);
//
//	extent = (w1 + w2) * H / 2.0;
//	printf("사다리꼴의 넓이: %.3f", extent);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int a = 15;
//	int b = 3;
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int number = 1;
//	number = number + 3;
//	printf("%2d\n", number);
//	number -= 2;
//	printf("%2d\n", number);
//	number--;
//	printf("%2d\n", number);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int a = 0;
//	printf("%d\n", a++);
//	printf("%d\n", a);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int a = 0;
//	printf("%d\n", ++a);
//	printf("%d\n", a);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int a;
//	int b;
//	printf("정수 2개 입력: ");
//	scanf("%d %d", &a, &b);
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int first = 1 % 4;
//	printf("%d = 1%%4\n", first);
//	int second = 5 % 3;
//	printf("%d = 5%%3\n", second);
//	int third = 4 % 2;
//	printf("%d = 4%%2\n", third);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int first = 1 % 3;
//	printf("%d = 1%%3\n", first);
//	int second = 2 % 3;
//	printf("%d = 2%%3\n", second);
//	int third = 3 % 3;
//	printf("%d = 3%%3\n", third);
//	int fourth = 4 % 3;
//	printf("%d = 4%%3\n", fourth);
//	int fifth = 5 % 3;
//	printf("%d = 5%%3\n", fifth);
//	int sixth = 6 % 3;
//	printf("%d = 6%%3\n", sixth);
//
//	return 0;
//}

#include <stdio.h>

int main(void) {
	int a;
	printf("임의의 정수 입력: ");
	scanf_s("%d", &a);

	printf("%f", a / 50.0);

	return 0;
}