//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int input;
//	enum {GAMEOVER, NEWGAME, LOADGAME, OPTION};
//	do {
//		printf("\n메뉴를 선택하세요\n");
//		printf("1.새 게임 2.이어하기 3.옵션 (0:게임종료)\n");
//		scanf("%d", &input);
//		
//		switch (input) {
//		case NEWGAME:
//			printf("새 게임 시작\n");
//			break;
//		case LOADGAME:
//			printf("세이브 데이터 로드\n");
//			break;
//		case OPTION:
//			printf("옵션 세팅\n");
//			break;
//		}
//	} while (input != GAMEOVER);
//
//	printf("게임을 종료합니다.\n");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int select;
//	enum {나가기, 로그인, 회원가입, 옵션, 만든사람들};
//	do {
//		printf("\n메뉴를 선택하시오.\n");
//		printf("1.로그인 \n2.회원가입 \n3.옵션 \n4.만든 사람들\n");
//		scanf("%d", &select);
//
//		if (select > 4) {
//			break;
//		}
//
//		switch (select) {
//		case 로그인:
//			printf("아이디: \n비밀번호: \n");
//			break;
//		case 회원가입:
//			printf("메일: \n비밀번호: \n");
//			break;
//		case 옵션:
//			printf("옵션 세팅 \n");
//			break;
//		case 만든사람들:
//			printf("김철수 이철수 박철수");
//			break;
//		}
//	} while (select != 나가기);
//	
//	printf("종료\n");
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void) {
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	do {
//		printf("\n%d번째 날 !!\n", ++day);
//		printf("오늘도 코딩할까요?\n");
//		printf("1. 공부한다\n");
//		printf("그외. 끝낸다.\n >>");
//		scanf("%d", &command);
//		if (command != 1) break;
//		int randInt = rand() % 5 + 1;
//
//		switch (randInt) {
//		case 1: 
//			printf("기분이 좋네요.\n");
//		case 3:
//			printf("도서관에서. ");
//			break;
//		case 2:
//			printf("기분이 나빠요\n ");
//		case 4:
//			printf("카페에서 ");
//			break;
//		case 5:
//			printf("학원에서 ");
//		}
//		printf("코딩공부합니다. \n");
//		study++;
//	} while (1);
//
//	if (day <= 3) {
//		printf("그대로입니다...\n");
//	}
//	else {
//		int level = study / 8;
//		switch (level) {
//		case 0:
//			printf("코딩새싹이 되었습니다!\n");
//			break;
//		case 1:
//			printf("프로그래머가 되었습니다!\n");
//			break;
//		case 2:
//			printf("FrontEnd 개발자가 되었습니다!\n");
//			break;
//		case 3:
//			printf("BackEnd 개발자가 되었습니다!\n");
//			break;
//		default:
//			printf("풀스택 개발자가 되었습니다!\n");
//			break;
//		}
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void) {
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	int run = 0;
//	int eat = 0;
//	int book = 0;
//
//	do {
//		printf("\n%d번째 날 !!\n", ++day);
//		printf("오늘도 코딩할까요?\n");
//		printf("1. 공부한다\n");
//		printf("2. 공원을 달린다\n");
//		printf("3. 밥 먹는다\n");
//		printf("4. 책 읽는다\n");
//		printf("그외. 끝낸다.\n >>");
//		scanf("%d", &command);
//		if (command < 1 || command > 4) break;
//		int randInt = rand() % 5 + 1;
//
//		if (command == 1) {
//			switch (randInt) {
//			case 1:
//				printf("기분이 좋네요.\n");
//			case 3:
//				printf("도서관에서. ");
//				break;
//			case 2:
//				printf("기분이 나빠요\n ");
//			case 4:
//				printf("카페에서 ");
//				break;
//			case 5:
//				printf("학원에서 ");
//			}
//			printf("코딩공부합니다. \n");
//			study++;
//		}
//
//		if (command == 2) {
//			run++;
//			printf("\n");
//		}
//
//		if (command == 3) {
//			eat++;
//			printf("\n");
//		}
//
//		if (command == 4) {
//			book++;
//			printf("\n");
//		}
//	} while (1);
//
//	if (day <= 3) {
//		printf("그대로입니다...\n");
//	}
//	else {
//		int level01 = study / 8;
//		int level02 = run / 8;
//		int level03 = eat / 8;
//		int level04 = book / 8;
//
//		switch (level01) {
//		case 0:
//			printf("코딩새싹이 되었습니다!\n");
//			break;
//		case 1:
//			printf("프로그래머가 되었습니다!\n");
//			break;
//		case 2:
//			printf("FrontEnd 개발자가 되었습니다!\n");
//			break;
//		case 3:
//			printf("BackEnd 개발자가 되었습니다!\n");
//			break;
//		default:
//			printf("풀스택 개발자가 되었습니다!\n");
//			break;
//		}
//		switch (level02) {
//		case 0:
//			printf("러닝새싹이 되었습니다!\n");
//			break;
//		case 1:
//			printf("러닝 동호회 회원이 되었습니다!\n");
//			break;
//		default:
//			printf("마라토너가 되었습니다!\n");
//			break;
//		}
//		switch (level03) {
//		case 0:
//			printf("먹방새싹이 되었습니다!\n");
//			break;
//		case 1:
//			printf("먹짱이 되었습니다!\n");
//			break;
//		default:
//			printf("미식가가 되었습니다!\n");
//			break;
//		}
//		switch (level04) {
//		case 0:
//			printf("독서새싹이 되었습니다!\n");
//			break;
//		case 1:
//			printf("책벌레가 되었습니다!\n");
//			break;
//		default:
//			printf("도서 평론가가 되었습니다!\n");
//			break;
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		printf("양 %d마리\n", sheep);
//	}
//	printf("잠들었다!\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		printf("양 %d마리\n", sheep);
//		if (sheep == 3) {
//			printf("도중에 잠들었다!\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		if (sheep == 3) {
//			printf("졸아서 양을 세지 못했다!\n");
//			continue;
//		}
//		printf("양 %d마리\n", sheep);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++) {
//		printf("양 %d마리\n", sheep);
//	}
//	printf("잠들었다!\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++) {
//		if (sheep % 10 == 0) {
//			printf("졸아서 양을 세지 못했다!\n");
//			continue;
//		}
//		printf("양 %d마리\n", sheep);
//		if (sheep == 45) break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int round;
//	for (round = 0; round < 10; round++) {
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int round;
//	for (round = 1; round <= 10; round++) {
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int count;
//	for (count = 101; count < 111; count++) {
//		printf("아파트 %d동\n", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int number;
//	int sum_number = 0;
//	for (number = 1; number <= 20; number++) {
//		sum_number = sum_number + number;
//	}
//	printf("도합: %d\n", sum_number);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int count;
//	int number;
//	printf("반복할 횟수를 입력하세요 : ");
//	scanf("%d", &count);
//	for (number = 0; number < count; number++) {
//		printf("삐약");
//	}
//	printf("\n");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int number;
//	for (number = 10; number < 100; number++) {
//		printf("%d ", number);
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int number;
//	int multi_number = 1;
//	for (number = 3; number <= 8; number++) {
//		multi_number *= number;
//	}
//	printf("도합: %d", multi_number);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int number;
//	for (number = 1; number <= 50; number++) {
//		if (number % 10 == 3) {
//			printf("%d ", number);
//			continue;
//		}
//		if (number % 10 == 6) {
//			printf("%d ", number);
//			continue;
//		}
//		if (number % 10 == 9) {
//			printf("%d ", number);
//			continue;
//		}
//		if (number / 10 == 3) {
//			printf("%d ", number);
//			continue;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int number;
//	printf("100 이하의 제곱수를 출력합니다.\n");
//
//	for (number = 1; (number * number) <= 100; number++) {
//		printf("%d\n", number * number);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int num;
//	printf("100 이하의 7의 배수를 출력합니다.\n");
//
//	for (num = 7; num <= 100; num += 7) {
//		printf("%d\n", num);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	char input;
//	for (;;) {
//		scanf("%c", &input);
//		switch (input) {
//		case 's' :
//			printf("START GAME\n");
//			break;
//		case 'e':
//			printf("EXIT GAME\n");
//			return 0;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int exitFor, number;
//	printf("1부터 10까지 곱한 수 출력 : ");
//	for (number = 10, exitFor = number - 1; exitFor; number *= exitFor, exitFor--) {
//	}
//	printf("%d\n", number);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	printf("1부터 10까지 곱한 수 출력 : ");
//	for (int number = 10, int exitFor = number - 1; exitFor; number *= exitFor, exitFor--) {
//	}
//	printf("%d\n", number);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int count;
//	for (count = 0; count < 5; count++); {
//		printf("%d\n", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int number;
//	for (number = 11; number <= 200; number += 11) {
//		printf("%d ", number);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	float spLine;
//	for (spLine = 0.1; spLine * 4 <= 21; spLine += 0.1) {
//		printf("%.1f ", spLine);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	printf("1반 1번\n");
//	printf("1반 2번\n");
//	printf("1반 3번\n");
//	printf("2반 1번\n");
//	printf("2반 2번\n");
//	printf("2반 3번\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int myClass = 1;
//	int student = 1;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//
//	myClass++; student = 1;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int myClass = 1;
//	int student;
//	for (student = 1; student <= 3; student++) {
//		printf("%d반 %d번\n", myClass, student);
//	}
//	myClass++; student = 1;
//	for (student = 1; student <= 3; student++) {
//		printf("%d반 %d번\n", myClass, student);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 2; myClass++) {
//		for (student = 1; student <= 3; student++) {
//			printf("%d반 %d번\n", myClass, student);
//		}
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 8; myClass++) {
//		for (student = 1; student <= 30; student++) {
//			printf("%d반 %d번\n", myClass, student);
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int grade;
//	int myClass;
//	int student;
//	for (grade = 1; grade <= 8; grade++) {
//		for (myClass = 1; myClass <= 8; myClass++) {
//			for (student = 1; student <= 30; student++) {
//				printf("%d학년 %d반 %d번\n", grade, myClass, student);
//			}
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int number1;
//	int number2;
//	for (number1 = 1; number1 <= 9; number1++) {
//		for (number2 = 1; number2 <= 9; number2++) {
//			printf("%d * %d = %d\n", number1, number2, number1 * number2);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int number1;
//	int number2;
//	for (number1 = 1; number1 <= 9; number1++) {
//		if (number1 == 3) {
//			continue;
//		}
//		for (number2 = 1; number2 <= 9; number2++) {
//			printf("%d * %d = %d\n", number1, number2, number1 * number2);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int number1;
//	int number2;
//	for (number1 = 1; number1 <=4; number1++) {
//		for (number2 = 1; number2 <= 6; number2++) {
//			printf("%d ", number1 + number2);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int inter;
//	int outer;
//	for (outer = 0; outer < 5; outer++) {
//		printf("%d번째 내부 반복문 진입 \n", outer);
//
//		for (inter = 0; inter < 5; inter++) {
//			printf("내부 반복문 %d번 반복\n", inter);
//		}
//
//		printf("%d번째 내부 반복문 탈출\n\n", outer);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int inter;
//	int outer;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter = 0; inter < 5; inter++) {
//			printf("*");
//		}
//
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int inter;
//	int outer;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter = 0; inter < outer + 1; inter++) {
//			printf("*");
//		}
//
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int outer, inter1, inter2;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter1 = 0; inter1 < 5 - outer; inter1++) {
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int outer;
//	int inter1, inter2;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter1 = 0; inter1 < 5 - outer; inter1++) {
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	int outer;
//	int inter;
//	for (outer = 0; outer < 4; outer++) {
//		for (inter = 0; inter < 4 - outer; inter++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

#include <stdio.h>

int main(void) {
	int outer;
	int inter;
	for (outer = 0; outer < 4; outer++) {
		for (inter = 0; inter < 4 - outer; inter++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}