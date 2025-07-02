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
//	int nextInt = rand() % 10;
//	printf("첫숫자 : %d\n", randInt);
//	printf("다음숫자 : %d\n", nextInt);
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

//난수 생성 공부하기 (보류) ^^

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
//	scanf_s("%d", &y_age);
//
//	if (y_age >= 30) {
//		printf("전체 관람가 ");
//	}
//	if (y_age >= 12) {
//		printf("12세 관람가 ");
//	}
//	if (y_age >= 15) {
//		printf("15세 관람가 ");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char initial;
//	printf("알파벳 하나 입력 >> ");
//	scanf_s("%c", &initial, 1);
//
//	if (initial >= 65 && initial <= 90) {
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
//	scanf_s("%d", &input);
//
//	if (input % 3 == 0) {
//		printf("input은 3의 배수입니다. ");
//	}
//	if (input % 6 == 0) {
//		printf("input은 6의 배수입니다. ");
//	}
//	if (input % 9 == 0) {
//		printf("input은 9의 배수입니다. ");
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
//	switch (oper) {
//	case '+':
//		printf("%d %c %d = %d", input1, oper, input2, input1 + input2);
//		break;
//	case '-':
//		printf("%d %c %d = %d", input1, oper, input2, input1 - input2);
//		break;
//	case '*':
//		printf("%d %c %d = %d", input1, oper, input2, input1 * input2);
//		break;
//	case '/':
//		printf("%d %c %d = %.3f", input1, oper, input2, (float)input1 / input2);
//		break;
//	case '%':
//		printf("%d %c %d = %d", input1, oper, input2, input1 % input2);
//		break;
//	}
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
//	case 78:
//		printf("엑스표 입력.\n");
//		break;
//	} 
//
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

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int appetizer, mainDish, dessert;
	printf("appetizer 1.캐비어 2.샐러드 3.푸아그라\n");
	printf("mainDish 1.스테이크 2.생선요리 3.양갈비\n");
	printf("dessert 1.케잌 2.아이스크림 3.초콜릿무스\n");

	printf("appetizer, mainDish, dessert >> ");
	scanf("%d %d %d", &appetizer, &mainDish, &dessert);

	printf("주문한 음식은 ");
	switch (appetizer) {
	case 1:
		printf("캐비어, ");
		break;
	case 2:
		printf("샐러드, ");
		break;
	case 3:
		printf("푸아그라, ");
		break;
	}
	switch (mainDish) {
	case 1:
		printf("스테이크, ");
		break;
	case 2:
		printf("생선요리, ");
		break;
	case 3:
		printf("양갈비, ");
		break;
	}
	switch (dessert) {
	case 1:
		printf("케잌");
		break;
	case 2:
		printf("아이스크림");
		break;
	case 3:
		printf("초콜릿무스");
		break;
	}
	printf("입니다");

	return 0;
}