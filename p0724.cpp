//#include <stdio.h>
//
//int main(void) {
//	int b = 100;
//	int* pB = &b;
//
//	printf("b = %d \n", b);
//	printf("b = %x \n", &b);
//	printf("b = %d \n", *pB);
//	printf("b = %x \n", pB);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char a = 'A';
//	char* pA = &a;
//
//	int b = 100;
//	int* pB = &b;
//
//	double c = 3.14;
//	double* pC = &c;
//	
//	printf("pA의 크기 : %d byte\n", sizeof(pA));
//	printf("pB의 크기 : %d byte\n", sizeof(pB));
//	printf("pC의 크기 : %d byte\n", sizeof(pC));
//
//	printf("*pA의 크기 : %d byte\n", sizeof(*pA));
//	printf("*pB의 크기 : %d byte\n", sizeof(*pB));
//	printf("*pC의 크기 : %d byte\n", sizeof(*pC));
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char str[] = "programming";
//	char* ptr1, * ptr2;
//	ptr1 = &str[0];
//	ptr2 = &str[7];
//
//	printf("두 포인터 간의 차는 %d입니다\n", ptr2 - ptr1);
//
//	printf("%x\n", ptr1 + 1);
//	printf("%c\n", *(ptr1 + 1));
//
//	printf("%x\n", ptr1 + 3);
//	printf("%c\n", *(ptr1 + 3));
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int* numptr;
//	int num1 = 10;
//	int num2 = 20;
//
//	numptr = &num1;
//	printf("%d\n", *numptr);
//	
//	numptr = &num2;
//	printf("%d\n", *numptr);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int number[2] = { 1,2 };
//	void* p = number;
//
//	printf("%d\n", *(int*)p);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int fibonacci[5] = { 3, 5, 8, 13, 21 };
//	int* ptrFibo;
//	ptrFibo = fibonacci;
//
//	int* ptrFibo1 = &fibonacci[1];
//	int* ptrFibo4 = fibonacci + 4;
//	printf("> %d - %d", *ptrFibo4, *ptrFibo1);
//	printf(">> %d\n", ptrFibo4 - ptrFibo1);
//
//	printf("%d", ptrFibo[1]);
//	printf("%d", ptrFibo[0]);
//	printf("%d", ptrFibo[-1]);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int numArr[5] = { 11,22,33,44,55 };
//	int* numptrA;
//	void* ptr;
//
//	numptrA = &numArr[2];
//	ptr = numArr;
//
//	printf("%d\n", *(numptrA - 1));
//	printf("%d\n", *((int*)ptr + 4));
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int arr[5] = {};
//	int* ptr = arr;
//
//	printf("임의의 숫자 5개 입력 >> ");
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	ptr = ptr + 2;
//
//	printf("\n%d", *ptr);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int arr[5] = { 2,4,6,8,10 };
//	int* p = &arr[0];
//	for (int i = 0; i < 5; i++) {
//		printf("%d", *p++);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int arr[2][3] = { {1,2,3}, {4,5,6} };
//	int* p = arr[0];
//for (int i = 0; i < 6; i++) {
//	printf("%d", *p++);
//}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int num[4] = { 1,2,3,4 };
//	int* pt = num;
//
//	pt++;
//	*pt++ = 5;
//	*pt++ = 10;
//
//	pt--;
//	*pt++ += 20;
//
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", num[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char str[] = "기울어진 운동장 : 애초부터 공정한 경쟁을 할 수 없는 상황을 비유적으로 이르는 말.";
//	char* ptr = &str[7]; 
//
//	printf("%s\n\n", ptr);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char str[] = "기울어진 운동장 : 어느 한 쪽으로 기울어진 운동장에서는 아무리 뛰어난 사람이라도 경기에서 이길 수 없다는 데서 유래.";
//	char* ptr = &str[7];
//
//	printf("%s\n\n", str);
//	str[15] = 'a'; 
//	str[23] = 'b';
//	str[25] = 'c';
//	printf("%s\n\n", ptr);
//
//	return 0;
//}

//#include <stdio.h>
//#define SIZE 100
//
//int main(void) {
//	int arr[SIZE];
//	int* ptr = &arr[99];
//
//	for (int i = 0; i < SIZE; i++) {
//		arr[i] = i + 1;
//	}
//	for (int i = 0; i < SIZE; i++) {
//		printf("%d ", *ptr);
//		ptr--;
//	}
//
//	return 0;
//}

#include <stdio.h>
#define SIZE 100

int main(void) {
	int arr[SIZE];
	int* ptr = &arr[50];

	for (int i = 0; i < SIZE; i++) {
		arr[i] = i + 1;
	}
	for (int i = 0; i < SIZE; i++) {
		if (*ptr <= 100) {
			printf("%d ", *ptr++);
		}
		else { 
			ptr - 100; 
		}
		if (*ptr == 50) break;
		
	}

	return 0;
}