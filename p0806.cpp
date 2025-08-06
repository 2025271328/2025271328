#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int parsing(char* string, int* data) {
//	char* p;
//	int cnt;
//	cnt = 0;
//	p = strtok(string, "_");
//	while (p) {
//		data[cnt++] = atoi(p);
//
//		p = strtok(NULL, "_");
//	}
//	return cnt;
//}
//
//int main() {
//	char String[] = "101_102_103_104_105";
//	int data[10];
//	int cnt, i;
//
//	cnt = parsing(String, data);
//
//	for (i = 0; i < cnt; i++) {
//		printf("%d\n", data[i]);
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void main(void) {
//	char buff2[] = "ABC_EFG_H";
//	char* p = strtok(buff2, "_");
//	printf("p = %s\n", p);
//	p = strtok(NULL, "_");
//	printf("p = %s\n", p);
//}

//#include <stdio.h>
//
//int main() {
//	int integer = 123;
//	char character = 'c';
//	char string[] = "hello, world";
//	int* pointer = &integer;
//	double pi = 3.141592;
//	char buf[100];
//
//	sprintf(buf, "integer : (decimal) %d (octal) %o \n", integer, integer);
//	printf("%s \n", buf);
//
//	sprintf(buf, "character : (decimal) %d (octal) %o \n", integer, integer);
//	printf("%s \n", buf);
//
//	sprintf(buf, "string : %s \n", string);
//	printf("%s \n", buf);
//
//	sprintf(buf, "pointer addr : %p \n", pointer);
//	printf("%s \n", buf);
//
//	sprintf(buf, "floating point : %e //%f \n", pi, pi);
//	printf("%s \n", buf);
//
//	sprintf(buf, "percent symbol : %% \n");
//	printf("%s \n", buf);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h> 
//#include <string.h>
//
//int main(void) {
//	char buff[100];
//	int data[10];
//	int cnt = 0;
//	int H;
//
//	gets_s(buff);
//	char* p = strtok(buff, " ");
//
//	while (p) {
//		data[cnt++] = atoi(p);
//		p = strtok(NULL, " ");
//	}
//
//	switch (buff[2]) {
//	case '+': H = data[0] + data[2]; break;
//	case '-': H = data[0] - data[2]; break;
//	case '*': H = data[0] * data[2]; break;
//	case '/': H = data[0] / data[2]; break;
//	case '%': H = data[0] % data[2]; break;
//	}
//
//	if (H == data[4]) printf("참입니다"); else printf("%d %c %d 는 %d입니다.", data[0], buff[2], data[2], H);
//
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

struct GM {
	int no;
	char name[10];
	int part;
	int salary;
};
struct COMPANY {
	GM gms[5];
	int gmCount = 0;
};

COMPANY HireCM_once(COMPANY gameCo) {
	gameCo.gms[gameCo.gmCount].no = gameCo.gmCount + 1;
	printf("이름: ");
	gets_s( gameCo.gms[gameCo.gmCount].name);
	printf("부서: ");
	scanf("%d", &gameCo.gms[gameCo.gmCount].part);
	printf("월급: ");
	scanf("%d", &gameCo.gms[gameCo.gmCount].salary);
	gameCo.gmCount++;
	return gameCo;
}

int main(void) {
	printf("게임을 출시해보자!\n");
	COMPANY gameCo;

	printf("먼저 GM부터 고용할까?\n");
	while (1) {
		gameCo = HireCM_once(gameCo);
		printf("더 고용할까?(y/n) : ");
		char ch;
		do {
			ch = getchar();
		} while (ch != 'y' && ch != 'n');
		if (ch == 'n') break;
	}
	printf("GM %d명을 뽑았다!\n", gameCo.gmCount);

	return 0;
}