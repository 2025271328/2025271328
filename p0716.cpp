//#include <stdio.h>
//
//int main(void) {
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("*");
//  printf("\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	for (int x = 1; x <= 1; x++) {
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 2; x++) {
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 3; x++) {
//		printf("*");
//	}
//  printf("\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int y = 1;
//	for (int x = 1; x <= y; x++) {
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 2; x++) {
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 3; x++) {
//		printf("*");
//	}
//	printf("\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int y = 1;
//	for (int x = 1; x <= y; x++) {
//		printf("*");
//	}	
//	printf("\n");
//	y += 1;
//	for (int x = 1; x <= y; x++) {
//		printf("*");
//	}
//	printf("\n");
//	y += 1;
//	for (int x = 1; x <= y; x++) {
//		printf("*");
//	}
//	printf("\n");
//	y += 1;
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int y = 1;
//	for (; y <= 3;) {
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n");
//		y++;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	for (int y = 1; y <= 3; y += 1) {
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int LINE = 3;
//	for (int y = 1; y <= LINE; y += 1) {
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int LINE = 3;
//	scanf("%d", &LINE);
//	for (int y = 1; y <= LINE; y += 1) {
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int LINE = 4;
//	scanf("%d", &LINE);
//	for (int y = LINE; y >= 1; y -= 1) {
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n"); 
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int LINE = 0;
//	scanf("%d", &LINE);
//
//	for (int outer1 = LINE - 1, outer2 = 0; outer2 < LINE; outer1 -= 1, outer2 += 1) {
//		for (int inter1 = 1; inter1 <= outer1; inter1++) {
//			printf(" ");
//		}
//		printf("*");
//		for (int inter2 = 1; inter2 <= outer2; inter2++) {
//			printf("**");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//
//	for (int outer = 0; outer < 3; outer += 1) {
//		for (int inter1 = 1; inter1 <= 2 - outer; inter1++) {
//			printf(" ");
//		}
//		printf("*");
//		for (int inter2 = 1; inter2 <= outer; inter2++) {
//			printf("**");
//		}
//		printf("\n");
//	}
//	for (int outer = 0; outer < 3; outer += 1) {
//		for (int inter1 = 1; inter1 <= outer; inter1++) {
//			printf(" ");
//		}
//		printf("*");
//		for (int inter2 = 1; inter2 <= 2 - outer; inter2++) {
//			printf("**");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//
//	for (int outer = 1; outer <= 4; outer += 1) {
//		for (int inter1 = 1; inter1 <= 4 - outer; inter1++) {
//			printf(" ");
//		}
//		for (int inter2 = 1; inter2 <= outer; inter2++) {
//			printf("%d", outer);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int number, hap = 0, count = 1;
//	printf("<���� Ų ��� 31!> \n ������ �����մϴ�! : �ڿ� ���ڸ� �Է����ּ���.\n");
//	for (int outer = 1; ; outer += 1) {
//		printf("%c: ", 'A' + (count % 2 == 0));
//		scanf("%d", &number);
//
//		if (outer % 3 == 0) {
//			printf("���� �Ѿ�ϴ�.\n");
//			count++;
//		}
//	}
//	
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int number, hap = 0, count = 0;
//	printf("<���� Ų ��� 31!> \n ������ �����մϴ�! 31�� ���ϴ� ����� ���Ե˴ϴ�.\n");
//	for (int outer = 1; ; outer += 1) {
//		printf("%c: ", 'A' + count);
//		scanf("%d", &number);
//		if (number == 31) {
//			break;
//		}
//		if (outer % 3 == 0) {
//			printf("���� �Ѿ�ϴ�.\n");
//			count = !count;
//		}
//	}
//	printf("���� %c�� �¸��Դϴ�!", 'A' + !count);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int number, hap = 0, count = 0;
//	printf("<���� Ų ��� 31!> \n ������ �����մϴ�! 31�� ���ϴ� ����� ���Ե˴ϴ�.\n");
//	for (int outer = 1; ; outer += 1) {
//		printf("%c: ", 'A' + count);
//		scanf("%d", &number);
//		if (number != outer) {
//			printf("�߸��� �Է��Դϴ�.\n");
//			printf("���� �Է��ؾ��ϴ� ���� %d�Դϴ�.\n", outer);
//			outer--;
//			continue;
//		}
//		if (number == 31) {
//			break;
//		}
//		if (outer % 3 == 0) {
//			printf("���� �Ѿ�ϴ�.\n");
//			count = !count;
//		}
//	}
//	printf("���� %c�� �¸��Դϴ�!", 'A' + !count);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int number, counter = 0, sequence = 0;
//	printf("<���� Ų ��� 31!> \n ������ �����մϴ�! 31�� ���ϴ� ����� ���Ե˴ϴ�. (0 �Է½� �ϳѱ�)\n");
//	for (int outer = 1; ; outer += 1) {
//		printf("%c: ", 'A' + sequence);
//		scanf("%d", &number);
//		if (number == 0) {
//			if (counter == 0) {
//				printf("���� �ѱ�� ���ؼ��� �ϳ� �̻��� ���� ���ؾ� �մϴ�.\n");
//				outer--;
//				continue;
//			}
//			printf("���� �Ѿ�ϴ�.\n");
//			counter = 0;
//			sequence = !sequence;
//			outer--;
//			continue;
//		} 
//		if (number != outer) {
//			printf("�߸��� �Է��Դϴ�.\n");
//			printf("���� �Է��ؾ��ϴ� ���� %d�Դϴ�.\n", outer);
//			outer--;
//			continue;
//		}
//		if (number == 31) {
//			break;
//		}
//
//		counter++;
//
//		if (counter == 3) {
//			printf("���� �Ѿ�ϴ�.\n");
//			counter = 0;
//			sequence = !sequence;
//		}
//	}
//	printf("���� %c�� �¸��Դϴ�!", 'A' + !sequence);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//
//	float conversion = 0;
//	while (conversion < 2) {
//		printf("%.1f\n", conversion);
//		conversion = conversion + 0.1;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//
//	float conversion = 0;
//	for (; conversion < 2; conversion += 0.1) {
//		printf("%.1f\n", conversion);
//		
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	for (double conversion = 90; conversion > 0.1; conversion /= 3) {
//		if (conversion == 10.0) {
//			continue;
//		}
//		printf("%.31f\n", conversion);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	double conversion = 90;
//	while (conversion > 0.1) {
//		if (conversion == 10.0) {
//			conversion /= 3;
//			continue;
//		}
//		printf("%.31f\n", conversion);
//		conversion /= 3;
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int number;
//	while (1) {
//		scanf("%d", &number);
//		if (number == 0) {
//			printf("���α׷� ����\n");
//			break;
//		}
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int number;
//	for (;;) {
//		scanf("%d", &number);
//		if (number == 0) {
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) 
//{
//	int for_flag = 1;
//	int number = 0;
//	while (for_flag) {
//		printf("number = %d\n", number);
//		while (number++) {
//			printf(" >number = %d\n", number);
//			if (number == 3) {
//				for_flag = 0;
//				break;
//			}
//		}
//		number++;
//		printf(">>number = %d\n", number);
//	}
//	printf("%d %d\n", for_flag, number);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int for_flag = 1;
//	int number = 1;
//	while (for_flag) {
//		printf("number = %d\n", number);
//		while (number++) {
//			printf(" >number = %d\n", number);
//			if (number == 3) {
//				for_flag = 0;
//				break;
//			}
//		}
//		number++;
//		printf(">>number = %d\n", number);
//	}
//	printf("%d %d\n", for_flag, number);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int for_flag = 1;
//	int number = 0;
//	for (; for_flag;) {
//		printf("number = %d\n", number);
//		while (number++) {
//			printf(" >number = %d\n", number);
//			if (number == 3) {
//				for_flag = 0;
//				break;
//			}
//		}
//		number++;
//		printf(">>number = %d\n", number);
//	}
//	printf("%d %d\n", for_flag, number);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int for_flag = 1;
//	int number = 0;
//	while (for_flag) {
//		printf("number = %d\n", number);
//		for (; number++;) {
//			printf(" >number = %d\n", number);
//			if (number == 3) {
//				for_flag = 0;
//				break;
//			}
//		}
//		number++;
//		printf(">>number = %d\n", number);
//	}
//	printf("%d %d\n", for_flag, number);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int number;
//	printf("���ڸ� ���� �� �Է� : ");
//	scanf("%d", &number);
//	
//	int Digit = 1, digit = 1;
//
//	while (number >= digit * 10) {
//			digit *= 10;
//			Digit += 1;
//	}
//
//	int i = 0;
//	while (i < Digit) {
//		int j = 0;
//		while (j < number / digit * 2) {
//			printf("��"); j++;
//		}
//		printf("\n");
//		number %= digit;
//		digit /= 10; i++;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int suyel(int n) {
//	int sum = 0;
//	for (int x = 0; x <= n; x++) {
//		sum += x;
//	}
//	return sum;
//}
//
//int main(void) {
//	int result = suyel(10);
//	printf("%d\n", result);
//
//	return 0;
//}

//#include <stdio.h>
//
//void function_test1() {
//	printf("function_test1()");
//	printf("�Լ��ȿ��� ����\n");
//}
//
//int main() {
//	printf("����\n");
//	function_test1();
//	printf("���� ��\n");
//}

//#include <stdio.h>
//
//void eatFood() {
//	printf("��Ա�\n");
//}
//void goSleep() {
//	printf("���ڱ�\n");
//}
//
//int main() {
//	eatFood(); goSleep();
//	eatFood(); eatFood();
//	goSleep(); goSleep();
//}

//#include <stdio.h>
//
//void person_A() {
//	int money = 10000;
//	printf("A : �ָӴϿ� ");
//	printf("%d��\n", money);
//}
//void person_B() {
//	int money = 5000;
//	printf("B : �ָӴϿ� ");
//	printf("%d��\n", money);
//}
//
//int main() {
//	person_A();
//	person_B();
//
//	return 0;
//}

//#include <stdio.h>
//
//int function_test2() {
//	int testNumber = 5;
//	return testNumber;
//}
//
//int main() {
//	int getNumber;
//	getNumber = function_test2();
//	printf("function_test2()");
//	printf("���� ������ �� : ");
//	printf("%d\n", getNumber);
//
//	return 0;
//}

//#include <stdio.h>
//
//void sayHi() {
//	printf("hi");
//	return;
//}
//
//char getA() {
//	return 'A';
//}
//
//int get5() {
//	return 5;
//}
//
//double set1get5(int one) {
//	return one + 4.0;
//}
//
//int main() {
//	sayHi();
//	printf("%c\n", getA());
//	printf("%d\n", get5());
//	printf("%f\n", set1get5(1));
//
//	return 0;
//}

//#include <stdio.h>
//
//void sayHi();
//char getA();
//int get5();
//double set1get5(int one);
//
//void main() {
//	sayHi();
//	printf("%c\n", getA());
//	printf("%d\n", get5());
//	printf("%f\n", set1get5(1));
//}
//
//void sayHi() {
//	printf("hi");
//	return;
//}
//
//char getA() {
//	return 'A';
//}
//
//int get5() {
//	return 5;
//}
//
//double set1get5(int one) {
//	return one + 4.0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//float sendCard();
//int main() {
//	float result = sendCard();
//	printf("%f���� ����\n", result);
//	return 0;
//}
//
//float sendCard() {
//	printf("<ũ�������� ī��>\n");
//	printf("���: 0.7����\n");
//	printf("������(����:����) : ");
//	int manwon;
//	scanf("%d", &manwon);
//	float change = manwon - 0.7;
//	return change;
//}

//#include <stdio.h>
//
//char getA() { return 'A'; }
//char getB() { return 'B'; }
//char getE() { return 'E'; }
//char getF() { return 'F'; }
//char getL() { return 'L'; }
//char getG() { return 'G'; }
//char getP() { return 'P'; }
//
//int main() {
//	printf("���� �����?\n");
//	printf("%c%c%c\n", getB(), getE(), getE());
//	return 0;
//}

//#include <stdio.h>
//
//char getA() { return 'A'; }
//char getB() { return 'B'; }
//char getE() { return 'E'; }
//char getF() { return 'F'; }
//char getL() { return 'L'; }
//char getG() { return 'G'; }
//char getP() { return 'P'; }
//
//int main() {
//	printf("����� �����?\n");
//	printf("%c%c%c%c%c\n", getA(), getP(), getP(), getL(), getE());
//	return 0;
//}

//#include <stdio.h>
//
//char getA() { return 'A'; }
//char getB() { return 'B'; }
//char getE() { return 'E'; }
//char getF() { return 'F'; }
//char getL() { return 'L'; }
//char getG() { return 'G'; }
//char getP() { return 'P'; }
//char getT() { return 'T'; }
//
//int main() {
//	printf("������ �����?\n");
//	printf("%c%c%c%c\n", getL(), getE(), getF(), getT());
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void makeHamburger(int count) {
//	printf("�ܹ��� %d�� ���Խ��ϴ�.\n", count);
//}
//
//int main() {
//	int ham_count;
//	printf("�ܹ��� �� �� �ֹ��Ͻðڽ��ϱ�?\n");
//	scanf("%d", &ham_count);
//	makeHamburger(ham_count);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void print_Number();
//void print_Number2(int num);
//void print_Number4_charB(int num, char b);
//void print_charaterX(char X);
//
//int main() {
//	print_Number();
//	print_Number2(2);
//	print_Number4_charB(4, 'b');
//	print_charaterX('X');
//	return 0;
//}
//
//void print_Number() {
//	printf("Number\n");
//}
//void print_Number2(int num) {
//	printf("Number : %d\n", num);
//}
//void print_Number4_charB(int num, char b) {
//	printf("Number : %d.Charater : %c\n", num, b);
//}
//void print_charaterX(char X) {
//	printf("Charater : %c\n", X);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//char rightType(char type) {
//	if (type != 'A' && type != 'B') {
//		printf("�ֹ��� �� ���� �ܹ����Դϴ�.\n");
//		return 'C';
//	}
//	return type;
//}
//
//void makeHamburger(char type, int count) {
//	if (type == 'A') {
//		printf("AŸ�� �ܹ���");
//	}
//	else {
//		printf("BŸ�� �ܹ���");
//	}
//	printf("%d�� ���Խ��ϴ�.\n", count);
//}
//
//int main() {
//	char ham_type;
//	int ham_count;
//	printf("���Ÿ�� �ܹ��Ÿ�");
//	printf("�ֹ��Ͻðڽ��ϱ�?(AorB)\n");
//	scanf("%c", &ham_type);
//	if (rightType(ham_type) == 'C') {
//		return 0;
//	}
//	printf("�ܹ��� �� �� �ֹ��Ͻðڽ��ϱ�?\n");
//	scanf("%d", &ham_count);
//	makeHamburger(ham_type, ham_count);
//	return 0;
//}

//#include <stdio.h>
//
//int add_number(int num1, int num2) {
//	int retVal = num1 + num2;
//	return retVal;
//}
//
//int main() {
//	int a = 1, b = 2;
//	int data1 = add_number(a, b);
//	printf("��� : %d\n", data1);
//	return 0;
//}

//#include <stdio.h>
//
//int add_number(int num1, int num2) {
//	int retVal = num1 + num2;
//	return retVal;
//}
//int subtraction_number(int num1, int num2) {
//	int retVal = num1 - num2;
//	return retVal;
//}
//int multiply_number(int num1, int num2) {
//	int retVal = num1 * num2;
//	return retVal;
//}
//float divide_number(int num1, int num2) {
//	float retVal = num1 / (float)num2;
//	return retVal;
//}
//
//int main() {
//	int a = 1, b = 2;
//	int data1 = add_number(a, b);
//	int data2 = subtraction_number(a, b);
//	int data3 = multiply_number(a, b);
//	float data4 = divide_number(a, b);
//
//	printf("��� : %d\n", data1);
//	printf("��� : %d\n", data2);
//	printf("��� : %d\n", data3);
//	printf("��� : %.1f\n", data4);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int minus(int n) {
//	if (n <= 1) return -2;
//	return minus(n - 1) - 3;
//}
//
//int main() {
//	int n; scanf("%d", &n);
//	printf("%d", minus(n));
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void printNumber(int n) {
//	if (n <= 0) return;
//	printf("%d", n);
//	printNumber(n - 1);
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	printNumber(n);
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibonacci(int n) {
	printf("%d", n);
	if (n <= 2) return 1;
	printf("%d\n", n);
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	int n;
	scanf("%d", &n);
	printf("\n%d\n", fibonacci(n));
	return 0;
}