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
//	if (n <= 1) return 1;
//	return number_hap(n - 1) + n;
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	printf("1 ~ %d까지의 합: %d", n, number_hap(n));
//	return 0;
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

//#include <stdio.h>
//
//struct student {
//	int id;
//	char* name;
//	float aver;
//};
//
//void main() {
//	struct student s = { 1, (char*)"이쌤", 90.5 };
//	printf("아이디: %d\n", s.id);
//	printf("이름: %s\n", s.name);
//	printf("백분율: %lf\n", s.aver);
//}

//#include <stdio.h>
//
//struct GUN {
//	char name[10];
//	float bullet_type;
//	bool scope;
//	bool muzzle;
//	bool handgrip;
//	bool magazine;
//	bool tactical_stock;
//	int magazine_size;
//};
//
//int main() {
//	struct GUN M416 = { "M416", 5.56, true, true, true, true, true, 30 };
//	printf("화기명 : %s\n", M416.name);
//	printf("탄 종류 : %.2f\n", M416.bullet_type);
//	printf("스코프유무: %s", M416.scope ? "true" : "false");
//	return 0;
//}

//#include <stdio.h>
//
//struct __dummy__ {
//	int data_0;
//	char data_1;
//	float data_2;
//};
//
//struct VIP_PERSON {
//	char grade;
//	char personCode;
//	char mileage;
//};
//
//int main() {
//	int sizedummy = sizeof(__dummy__);
//	int sizevip = sizeof(VIP_PERSON);
//	printf("더미 크기 : %d\n", sizedummy);
//	printf("VIP정보 크기 : %d\n", sizevip);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	VIP_PESON lee_sam;
//	printf("고객 등급을 입력하세요\n");
//	while (true) {
//		scanf("%c", &lee_sam.grade);
//		if (lee_sam.grade == 's' || 'A' <= lee_sam.grade && lee_sam.grade <= 'D')
//			break;
//	}
//	int tmp;
//	printf("고객 코드를 입력하세요\n");
//	scanf("%d", &tmp);
//	lee_sam.personCode = (char)tmp;
//	printf("마일리지를 입력하세요\n");
//	scanf("%d", &tmp);
//	lee_sam.mileage = (char)tmp;
//	printf("%c %d %d\n", lee_sam.grade, lee_sam.personCode, lee_sam.mileage);
//	return 0;
//}

//#include <stdio.h>
//
//struct A {
//	int a;
//	char b;
//};
//struct B {
//	char a;
//	char b;
//	char c;
//	char d;
//	char e;
//	char f;
//	char g;
//	char h;
//};
//
//int main(void) {
//	int size_A = sizeof(A);
//	int size_B = sizeof(B);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//struct __dummy__ {
//	int data_0;
//	char data_1;
//	float data_2;
//};
//
//int main(void) {
//	__dummy__ A;
//	printf("data_0 = ");
//	scanf("%d", &A.data_0);
//	printf("data_1 = ");
//	scanf(" %c", &A.data_1);
//	printf("data_2 = ");
//	scanf("%f", &A.data_2);
//
//	printf("\ndata_0 = %d\n", A.data_0);
//	printf("data_1 = %c\n", A.data_1);
//	printf("data_2 = %f\n", A.data_2);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//struct POINT { short x, y; };
//
//POINT getDefaultData();
//void printData(POINT pt2);
//POINT plus_5(POINT pt3);
//
//void main() {
//	POINT pt;
//	pt = getDefaultData();
//	printData(pt);
//	pt = plus_5(pt);
//	printData(pt);
//}
//
//POINT getDefaultData() {
//	POINT pt1;
//	printf(">>");
//	scanf("%hd", &pt1.x);
//	scanf("%hd", &pt1.y);
//	return pt1;
//}
//
//void printData(POINT pt2) {
//	printf("x값 : %hd\n", pt2.x);
//	printf("y값 : %hd\n", pt2.y);
//}
//
//POINT plus_5(POINT pt3) {
//	pt3.x += 5;
//	pt3.y += 5;
//	return pt3;
//}

//#include <stdio.h>
//
//void main() {
//	char arr[4];
//	printf("%d\n", sizeof(arr));
//}

//#include <stdio.h>
//
//void main() {
//	int arr[4];
//	printf("%d\n", sizeof(arr));
//}

//#include <stdio.h>
//
//void main() {
//	char alpah[4] = { 'a', 'b', 'c', 'd' };
//	printf("%c%c%c%c\n", alpah[0], alpah[1], alpah[2], alpah[3]);
//}

//#include <stdio.h>
//
//void main() {
//	int num[3] = { 3, 6, 9 };
//	printf("num의 안에 들어있는");
//	printf("1 번째 숫자는? %d\n", num[1]);
//}

//#include <stdio.h>
//
//int main() {
//	int num[3] = { 3, 6, 9 };
//	printf("%d 번째에 %d 저장\n", 0, num[0]);
//	printf("%d 번째에 %d 저장\n", 1, num[1]);
//	printf("%d 번째에 %d 저장\n", 2, num[2]);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int num[3] = { 3, 6, 9 };
//	int k = 0;
//	printf("%d 번째에 %d 저장\n", k, num[k]); k++;
//	printf("%d 번째에 %d 저장\n", k, num[k]); k++;
//	printf("%d 번째에 %d 저장\n", k, num[k]); k++;
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int num[3] = { 3, 6, 9 };
//	int k = 0;
//	for (int k = 0; k < 3; k++){
//		printf("%d 번째에 %d 저장\n", k, num[k]);
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int arr[3];
//	for (int i = 0; i < 3; i++) {
//		scanf("%d", &arr[i]);
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int arr[5];
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &arr[i]);
//	}
//	printf("\n\n");
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int arr[10];
//	printf("숫자 10개 입력 >> ");
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//	}
//	printf("\n\n");
//	
//	int num, exist = 1;
//	while (exist) {
//		printf("숫자 입력 (배열 내 있는 값일 시 종료) >> ");
//		scanf("%d", &num);
//		for (int i = 0; i < 10; i++) {
//			if (num == arr[i]) {
//				printf("exist");
//				exist = 0;
//				break;
//			}
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//void main(void) {
//	int left = 3, right = 5;
//	left = right;
//	right = left;
//	printf("left = %d, ", left);
//	printf("right = %d \n", right);
//
//}

//#include <stdio.h>
//
//void main(void) {
//	int left = 3, right = 5;
//	int temp;
//	temp = left;
//	left = right;
//	right = temp;
//	printf("left = %d, ", left);
//	printf("right = %d \n", right);
//
//}

#include <stdio.h>

void main(void) {
	int num[2] = { 10, 3 };
	int temp;
	temp = num[0];
	num[0] = num[1];
	num[1] = temp;
	printf("num[0] = %d, ", num[0]);
	printf("num[1] = %d \n", num[1]);

}