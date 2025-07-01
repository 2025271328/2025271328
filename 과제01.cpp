//#include <stdio.h>
//
//int main(void) {
//	int a;
//	float b;
//
//	a = 123.45;
//	b = 200;
//
//	printf("a의 값 ==> %d \n", a);
//	printf("b의 값 ==> %f \n", b);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int a, b;
//	float c, d;
//
//	a = 100;
//	b = 100;
//
//	c = 111.1f;
//	d = 111.1f;
//
//	printf("a, b의 값 ==> %d, %d \n", a, b);
//	printf("c, d의 값 ==> %5.1f %5.1f \n", c, d);
//
//	return 0;
//}

#include <stdio.h>

int main(void) {
	int a, b, c, d;

	a = 100 + 100;
	b = a + 100;
	c = a + b - 100;
	d = a + b + c;
	printf("a, b, c, d 의 값 ==> %d, %d, %d, %d \n", a, b, c, d);

	a = b = c = d = 100;
	printf("a, b, c, d 의 값 ==> %d, %d, %d, %d \n", a, b, c, d);

	a = 100;
	a = a + 200;
	printf("a 의 값 ==> %d \n", a);

	return 0;
}