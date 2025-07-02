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
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d = number1%%4\n", number1%4);
//	printf("%d = number2%%3\n", number2%3);
//
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

//#include <stdio.h>
//
//int main(void) {
//	int a;
//	printf("임의의 정수 입력: ");
//	scanf_s("%d", &a);
//
//	printf("%d", a % 50);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int data1 = 6 / 2;
//	printf("%d = 6/2\n", data1);
//	int data2 = 6 / 3;
//	printf("%d = 6/3\n", data2);
//	int data3 = 6 / 4;
//	printf("%d = 6/4\n", data3);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int number1, number2;
//	scanf_s("%d %d", &number1, &number2);
//	printf("%d, %d \n", number1, number2);
//	printf("%d / %d = %d\n", number1, number2, number1 / number2);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int coin;
//	printf("돈을 입력해주세요.(원): ");
//	scanf_s("%d", &coin);
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//	printf("만원권 %d개, ", coin10000);
//	printf("오천원권 %d개, ", coin5000);
//	printf("천원권 %d개, ", coin1000);
//	printf("나머지는 동전입니다.");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int coin;
//	printf("돈을 입력해주세요.(원): ");
//	scanf_s("%d", &coin);
//
//	int coin500 = coin / 500;
//	coin %= 500;
//	int coin100 = coin / 100;
//	coin %= 100;
//	int coin50 = coin / 50;
//	coin %= 50;
//	int coin10 = coin / 10;
//
//	printf("오백원 %d개, ", coin500);
//	printf("백원 %d개, ", coin100);
//	printf("오십원 %d개, ", coin50);
//	printf("십원 %d개, ", coin10);
//	printf("나머지는 1원 단위입니다.");
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("첫숫자 : %d\n", randInt);
//	printf("다음숫자 : %d", nextInt);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void) {
//	
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10+50;
//	printf("첫숫자 : %d\n", randInt);//0 ~ 9
//	printf("다음숫자 : %d\n", nextInt);//50 ~ 59
//
//	return 0;
//} 

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void) {
//
//	srand((unsigned int)time(NULL));
//	printf("내 주머니에 있는 돈은");
//	int myMoney = (rand() % 10 + 1) * 1000;
//	printf("%d원이다.\n", myMoney);
//	int coin500 = rand() % 4 * 500;
//	int coin100 = rand() % 5000;
//	coin100 = coin100 / 100 * 100;
//	printf("그리고 과자의 가격은");
//	printf("%d원이다.", coin500 + coin100);
//	printf("\n나는 과자를 살 수 있을까?");
//
//	return 0;
//}


//#include <stdio.h>
//
//int main(void) {
//	int apple = 15;
//	if (apple == 15) {
//		printf("apple은 15개 있습니다.\n");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main(void) {
//	int apple = 15;
//	if (apple != 17) {
//		printf("apple은 17개가 아닙니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int apple = 15;
//	if (apple > 7) {
//		printf("apple은 7개보다 많습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int apple = 15;
//	if (apple < 20) {
//		printf("apple은 20개보다 적습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int apple = 15;
//	if (apple) {
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int apple = 15;
//	if (!apple) {
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int apple = 0;
//	if (apple == 10) {
//		printf("apple은 10개 있습니다.\n");
//	}
//	else if (apple == 0) {
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int apple = 15;
//	if (!apple) {
//		printf("apple은 하나도 없습니다.\n");
//	}
//	else {
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int input = 0;
//	printf("숫자 입력 : ");
//	scanf_s("%d", &input);
//
//	if (input % 2 == 0) {
//		printf("input값은 양수입니다.");
//	}
//	else {
//		printf("input값은 음수입니다.");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int input = 0;
//	printf("숫자 입력 : ");
//	scanf_s("%d", &input);
//
//	if (input >= 10 && input <= 99) {
//		printf("input은 두 자리 숫자입니다.");
//	}
//	else {
//		printf("input은 두 자리 숫자가 아닙니다.");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int height = 170;
//	if (height > 150) {
//		printf("키가 150 이상입니다.\n");
//	}
//	if (height > 160) {
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int height = 170;
//	if (height > 150) {
//		printf("키가 150 이상입니다.\n");
//	}
//	else if (height > 160) {
//		printf("키가 160 이상입니다. \n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int y_age = 0;
//	printf("나이 : ");
//	scanf("%d", &y_age);
//
//
//
//
//	if (y_age >= 0) {
//		printf("전체 관람가 ");
//	}
//	if (y_age >= 15) {
//		printf("15세 관람가 ");
//	}
//	if (y_age >= 12) {
//		printf("12세 관람가 ");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char initial;
//	printf("알파벳 하나 입력 >> ");
//	scanf("%c", &initial);
//
//	if (initial >= 0x41 && initial <= 'Z') {
//		printf("대문자");
//	}
//	else if (initial >= 97 && initial <= 132) {
//		printf("소문자");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int number, answer;
//	scanf_s("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("숫자1이 숫자2보다 큽니다. \n");
//	}
//	else {
//		if (number < answer) {
//			printf("숫자2가 숫자1보다 큽니다.\n");
//		}
//		else {
//			printf("숫자1과 숫자2가 같습니다.\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int number, answer;
//	scanf_s("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("숫자1이 숫자2보다 큽니다. \n");
//	}
//	else if (number < answer) {
//		printf("숫자2가 숫자1보다 큽니다. \n");
//	}
//	else {
//		printf("숫자1과 숫자2가 같습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int score = 75;
//	if (score > 90) {
//		printf("성적은 A등급입니다.\n");
//	}
//	else if (score > 80) {
//		printf("성적은 B등급입니다.\n");
//	}
//	else if (score > 70) {
//		printf("성적은 C등급입니다.\n");
//	}
//	else if (score > 60) {
//		printf("성적은 D등급입니다.\n");
//	}
//	else {
//		printf("성적은 F등급입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int number = -11;
//	if (number > 0) {
//		printf("number은 양수입니다.\n");
//	}
//	else if (number < 0) {
//		printf("number은 음수입니다.\n");
//	}
//	else {
//		printf("number은 0입니다.\n");
//	}
//	if (number % 2 == 0) {
//		printf("number는 짝수입니다.\n");
//	}
//	else {
//		printf("number는 홀수입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char initial;
//	printf("방향키(w a d s) 입력 >> ");
//	scanf_s("%c", &initial, 1);
//
//	if (initial == 'w') {
//		printf("위 방향키를 입력하셨습니다.");
//	}
//	else if (initial == 'a') {
//		printf("좌 방향키를 입력하셨습니다.");
//	}
//	else if (initial == 'd') {
//		printf("우 방향키를 입력하셨습니다.");
//	}
//	else if (initial == 's') {
//		printf("아래 방향키를 입력하셨습니다.");
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int gauge;
//	printf("숫자 입력 (0 ~ 100) >> ");
//	scanf("%d", &gauge);
//	
//	if (gauge >= 45 && gauge <= 55) {
//		printf("Perfect");
//	}
//	else if (gauge >= 35 && gauge <= 65) {
//		printf("Excellent");
//	}
//	else {
//		printf("good");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int input = 0;
//	printf("숫자 입력 >> ");
//	scanf("%d", &input);
//
//	if (input % 3 == 0) {
//		printf("input은 3의 배수입니다. ");
//		if (input % 6 == 0) {
//			printf("input은 6의 배수입니다. ");
//		}
//		if (input % 9 == 0) {
//			printf("input은 9의 배수입니다. ");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char command = 'i';
//
//	switch (command) {
//	case 'i':
//		printf("아이템창 오픈\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char command = 'i';
//
//	switch (command) {
//	case 'i':
//		printf("아이템창 오픈\n");
//	case 'm':
//		printf("지도창 오픈\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char command = 'm';
//
//	switch (command) {
//	case 'i':
//		printf("아이템창 오픈\n");
//	case 'm':
//		printf("지도창 오픈\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char command = 'm';
//
//	switch (command) {
//	case 'i':
//		printf("아이템창 오픈\n");
//		break;
//	case 'm':
//		printf("지도창 오픈\n");
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	char command;
//	printf("커멘드를 입력하세요: ");
//	scanf_s("%c", &command);
//
//	switch (command) {
//	case 'i':
//		printf("아이템창 오픈\n");
//		break;
//	case 'm':
//		printf("지도창 오픈\n");
//		break;
//	default :
//		printf("지정된 기능이 없습니다.\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char number = 1;
//
//	switch (number) {
//	case 1:
//		printf("one\n");
//		break;
//	case 2:
//		printf("two\n");
//		break;
//	case 3:
//		printf("three\n");
//		break;
//
//	}
//
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int input1, input2;
//	char oper;
//	printf("임의의 숫자 2개 : ");
//	scanf("%d %d", &input1, &input2);
//	printf("연산자 : ");
//	scanf(" %c", &oper);
//
//	int result = 0;
//	switch (oper) {
//	case '+':result = input1 + input2; break;
//	case '-':
//		printf("%d %c %d = %d", input1, oper, input2, input1 - input2);
//		break;
//	case '*':
//		printf("%d %c %d = %d", input1, oper, input2, input1 * input2);
//		break;
//	case '/':
//		printf("%d %c %d = %d", input1, oper, input2, input1 / input2);
//		break;
//	case '%':
//		printf("%d %c %d = %d", input1, oper, input2, input1 % input2);
//		break;
//	}
//	
//	printf("%d %c %d = %d", input1, oper, input2, result);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int month;
//	printf("달 : ");
//	scanf("%d", &month);
//
//	switch (month) {
//	case 1:
//		printf("%d > January", month);
//		break;
//	case 2:
//		printf("%d > February", month);
//		break;
//	case 3:
//		printf("%d > Marth", month);
//		break;
//	case 4:
//		printf("%d > April", month);
//		break;
//	case 5:
//		printf("%d > May", month);
//		break;
//	case 6:
//		printf("%d > June", month);
//		break;
//	case 7:
//		printf("%d > July", month);
//		break;
//	case 8:
//		printf("%d > August", month);
//		break;
//	case 9:
//		printf("%d > September", month);
//		break;
//	case 10:
//		printf("%d > October", month);
//		break;
//	case 11:
//		printf("%d > November", month);
//		break;
//	case 12:
//		printf("%d > December", month);
//		break;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char command;
//	printf("<, a 왼쪽 이동 \n");
//	printf(">, d 오른쪽 이동 \n");
//	scanf_s("%c", &command, 1);
//	switch (command) {
//	case '<':
//	case 'a':
//		printf("왼쪽으로 이동합니다.\n");
//		break;
//	case '>':
//	case 'd':
//		printf("오른쪽으로 이동합니다.\n");
//		break;
//	}
//
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int number;
//	const int option = 3;
//	printf("메뉴를 선택하세요");
//	printf("1.새 게임 2.이어하기 3.옵션\n");
//	scanf("%d", &number);
//
//	switch (number) {
//	case 1:
//		printf("새 게임 시작.\n");
//		break;
//	case 2:
//		printf("세이브 데이터 로드.\n");
//		break;
//	case option:
//		printf("옵션 세팅.\n");
//		break;
//	default:
//		printf("지정된 기능이 없습니다.\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int number;
//	int option = 3;
//	printf("메뉴를 선택하세요");
//	printf("1.새 게임 2.이어하기 3.옵션\n");
//	scanf_s("%d", &number);
//
//	switch (number) {
//	case 1:
//		printf("새 게임 시작.\n");
//		break;
//	case 2:
//		printf("세이브 데이터 로드.\n");
//		break;
//	case 3:
//		printf("옵션 세팅.\n");
//		break;
//	default:
//		printf("지정된 기능이 없습니다.\n");
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int number;
//	printf("숫자 입력 (0 ~ 9) >> ");
//	scanf("%d", &number);
//
//	switch (number) {
//	case 3:
//	case 6:
//	case 9:
//		printf("짝\n");
//		break;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char command = 'x';
//
//	switch (command) {
//	case 'x':
//		printf("알파벳 x 입력./n");
//		break;
//	case 'x':
//		printf("엑스표 입력./n");
//		break;
//	} 
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char command = 'x';
//
//	switch (command) {
//	case 'x':
//		printf("알파벳 x 입력.\n");
//		break;
//	case 'X':
//		printf("엑스표 입력.\n");
//		break;
//	} 
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int i_menu;
//	printf("1.더하기 2.빼기\n");
//	scanf("%d", &i_menu);
//	switch (i_menu) {
//	case 1: 
//		int number1, number2;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d\n", number1, number2, number1 + number2);
//		break;
//	case 2:
//		int number3, number4;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number3, &number4);
//		printf("%d + %d = %d\n", number3, number4, number3 - number4);
//		break;
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int i_menu;
//	printf("1.더하기 2.빼기\n");
//	scanf("%d", &i_menu);
//	switch (i_menu) {
//	case 1: {
//		int number1, number2;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d\n", number1, number2, number1 + number2);
//		break;
//	}
//	case 2: {
//		int number3, number4;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number3, &number4);
//		printf("%d + %d = %d\n", number3, number4, number3 - number4);
//		break;
//	}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char initial;
//	printf("방향키(w a d s) 입력 >> ");
//	scanf_s("%c", &initial, 1);
//
//	switch (initial) {
//	case 'w':
//		printf("위 방향키를 입력하셨습니다.");
//		break;
//	case 'a':
//		printf("좌 방향키를 입력하셨습니다.");
//		break;
//	case 'd':
//		printf("우 방향키를 입력하셨습니다.");
//		break;
//	case 's':
//		printf("아래 방향키를 입력하셨습니다.");
//		break;
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int appetizer, mainDish, dessert;
//	printf("appetizer 1.캐비어 2.샐러드 3.푸아그라\n");
//	printf("mainDish 1.스테이크 2.생선요리 3.양갈비\n");
//	printf("dessert 1.케잌 2.아이스크림 3.초콜릿무스\n");
//
//	printf("appetizer, mainDish, dessert >> ");
//	scanf("%d %d %d", &appetizer, &mainDish, &dessert);
//
//	printf("주문한 음식은 ");
//	switch (appetizer) {
//	case 1:
//		printf("캐비어, ");
//		break;
//	case 2:
//		printf("샐러드, ");
//		break;
//	case 3:
//		printf("푸아그라, ");
//		break;
//	}
//	switch (mainDish) {
//	case 1:
//		printf("스테이크, ");
//		break;
//	case 2:
//		printf("생선요리, ");
//		break;
//	case 3:
//		printf("양갈비, ");
//		break;
//	}
//	switch (dessert) {
//	case 1:
//		printf("케잌");
//		break;
//	case 2:
//		printf("아이스크림");
//		break;
//	case 3:
//		printf("초콜릿무스");
//		break;
//	}
//	printf("입니다");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	while (0) {
//		printf("조건이 참일 경우 반복출력\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	while (1) {
//		printf("조건이 참일 경우 반복출력\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int count = 0;
//	while (count < 3) {
//		printf("현재 count : %d\n", count);
//		printf("count가 3보다 작은 동안 반복\n");
//		count++;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int count = 3;
//	while (count > 0) {
//		printf("현재 count : %d\n", count);
//		printf("count가 0보다 큰 동안 반복\n");
//		count--;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int count = 0;
//	while (count < 6) {
//		printf("c");
//		count++;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int count = -10;
//	while (count <= 0) {
//		printf("%d ", count);
//		count++;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int count = 0;
//	while (count <= 100) {
//		if (count % 5 == 0) {
//			printf("%d ", count);
//		}
//		count++;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int count = 3;
//	while (count) {
//		if (count == 1) {
//			break;
//		}
//		printf("현재 count : %d\n", count);
//		printf("count가 0이 아니면 반복\n");
//		count--;
//	}
//
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	char alphabet;
//	while (1) {
//		printf("알파벳을 입력해주세요(다른 것 입력시 다시입력): ");
//		scanf("%c", &alphabet);
//		if (alphabet >= 'a' && alphabet <= 'z') {
//			printf("소문자를 입력하셨습니다.\n");
//		}
//		else if (alphabet >= 'A' && alphabet <= 'Z') {
//			printf("대문자를 입력하셨습니다\n");
//		}
//		else {
//			continue;
//		}
//		printf("입력한 값 : %c\n", alphabet);
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int number, total = 0;
//	while (1) {
//		printf("양수를 입력해주세요(0입력시 종료): ");
//		scanf("%d", &number);
//		if (number == 0) {
//			break;
//		}
//		else if (number < 0) {
//			continue;
//		} 
//		total = total + number;
//		printf("%d\n", total);
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int number = 1;
//	int multi = 1;
//
//	while (1) {
//		if (multi >= 50000) {
//			break;
//		}
//		multi *= number;
//		number++;
//	}
//
//	printf("multi = %d", multi);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int count = 65;
//	while (1) {
//		if (count == 70) {
//			count++;
//			continue;
//		}
//		printf("%c ", count);
//		count++;
//		if (count == 91) {
//			break;
//		}
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int hap = 0;
//	int a, b;
//	while (1) {
//		printf("A: ");
//		scanf("%d", &a);
//		hap += a;
//		printf("=> %d\n", hap);
//		if (hap >= 31) {
//			printf("B가 이겼습니다!");
//			break;
//		}
//		printf("B: ");
//		scanf("%d", &b);
//		hap += b;
//		printf("=> %d\n", hap);
//		if (hap >= 31) {
//			printf("A가 이겼습니다!");
//			break;
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int temperature = 20;
//	do {
//		printf("현재 온도 : %d도\n", temperature);
//		temperature--;
//	} while (temperature > 28);
//
//	return 0;
//}

