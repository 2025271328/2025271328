//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void main() {
//	char s[20];
//	FILE* rfp;
//
//	rfp = fopen("C:\\data1.txt", "r");
//
//	fgets(s, 20, rfp);
//
//	printf("���Ͽ��� ���� ���ڿ� : ");
//	puts(s);
//
//	fclose(rfp);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void main() {
//	FILE* rfp;
//	int hap = 0;
//	int in, i;
//
//	rfp = fopen("C:\\data2.txt", "r");
//
//	for (int i = 0; i < 5; i++) {
//		fscanf(rfp, "%d", &in);
//		hap += in;
//	}
//
//	printf("�հ� ==> %d\n", hap);
//
//	fclose(rfp);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void main() {
//	char s[20];
//	FILE* wfp;
//
//	wfp = fopen("C:\\data3.txt", "w");
//
//	printf("���ڿ��� �Է�(�ִ� 19��) : ");
//	gets_s(s);
//
//	fputs(s, wfp);
//
//	fclose(wfp);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void main() {
//	char str[200];
//	FILE* rfp;
//	FILE* wfp;
//
//	rfp = fopen("C:\\windows\\win.ini", "r");
//	wfp = fopen("C:\\data5.txt", "w");
//
//	for (;;) {
//		fgets(str, 200, rfp);
//
//		if (feof(rfp))
//			break;
//
//		fputs(str, wfp);
//	}
//	fclose(rfp);
//	fclose(wfp);
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void main() {
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "w");
//	printf("�ȳ��ϼ���");
//	fclose(pFile);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void main() {
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "w");
//	fprintf(pFile, "�ȳ��ϼ���");
//	fclose(pFile);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void main() {
//	FILE* pFile;
//	char name[100];
//
//	pFile = fopen("myfile.txt", "w");
//	fscanf(pFile, "%s", name);
//	printf("%s", name);
//	fclose(pFile);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void main() {
//	FILE* pFile;
//	char name[100];
//	pFile = fopen("myfile.txt", "w");
//	for (int n = 0; n < 5; ++n) {
//		printf("���Ͽ� ���� ���� ���� �Է��ϼ��� : ");
//		scanf("%s", name);
//		fprintf(pFile, "%d��° ���� )% - 10s]\n", n, name);
//	}
//	fclose(pFile);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void main() {
//	FILE* readfp, * writefp;
//	char buff[1024];
//
//	readfp = fopen("myfile1.txt", "r");
//	writefp = fopen("outfile.txt", "w");
//	if (readfp == NULL) {
//		printf("������ ã�� ���߽��ϴ�.\n");
//		return;
//	}
//	while (!feof(readfp)) {
//		fgets(buff, 1024, readfp);
//		fputs(buff, writefp);
//	}
//	fclose(readfp);
//	fclose(writefp);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//#define BUFF_SIZE 30
//
//int main() {
//	char buff[BUFF_SIZE];
//	int readlen = 0;
//	FILE* src, * dst;
//	char name1[100], name2[100], enter;
//
//	printf("�Է¹��� ������ �̸��� �Է��ϼ��� : ");
//	scanf("%s%c", name1, &enter);
//
//	printf("��¹��� ������ �̸��� �Է��ϼ��� : ");
//	gets_s(name2);
//
//	src = fopen(name1, "rb");
//	dst = fopen(name2, "wb");
//
//	if (src == NULL || dst == NULL) {
//		puts("������ ��ã��");
//		return -1;
//	}
//	while (true) {
//		readlen = fread(buff, 1, BUFF_SIZE, src);
//		if (readlen < BUFF_SIZE) {
//			if (feof(src) != 0) {
//				fwrite(buff, 1, readlen, dst);
//				puts("���� ���� �Ϸ�");
//				break;
//			}
//			else {
//				printf("���� ���� ����");
//				return -1;
//			}
//		}
//		fwrite(buff, 1, BUFF_SIZE, dst);
//	}
//	if (fclose(src) != 0 || fclose(dst) != 0) {
//		puts("������ ���� ���߽��ϴ�.");
//		return -1;
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	FILE* fp = fopen("Coding.txt", "w");
//	int i = 123;
//	int j = -123;
//	double f = 3.141592;
//
//	fprintf(fp, "�����߱�\n");
//	fprintf(fp, "i: %6d \n", i);
//	fprintf(fp, "i: %7d \n", i);
//	fprintf(fp, "i: %2d \n\n", i);
//
//	fprintf(fp, "������ ����\n");
//	fprintf(fp, "i: %5d \n", i);
//	fprintf(fp, "���� ����\n");
//	fprintf(fp, "i: %-5d�� \n\n", i);
//
//	fprintf(fp, "#������ ���\n");
//	fprintf(fp, "i: %#x \n", i);
//	fprintf(fp, "j: %#x \n\n", j);
//	
//	fprintf(fp, "��ȣ���̱�\n");
//	fprintf(fp, "i: %+d, j: %+d \n\n", i, j);
//
//	fclose(fp);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	FILE* Hello = fopen("Hello.txt", "w");
//	fputs("HelloWorld", Hello);
//
//	fclose(Hello);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	FILE* Hello = fopen("Hello.txt", "w");
//	FILE* bye = fopen("bye.txt", "w");
//	fputs("HelloWorld", Hello);
//	fputs("byeWorld", bye);
//
//	fclose(Hello);
//	fclose(bye);
// 
// return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	char TXT[100];
//	FILE* Hello = fopen("Hello.txt", "w");
//	FILE* bye = fopen("bye.txt", "w");
//	printf("���ڿ��� �Է��ϼ���: ");
//	scanf("%s", TXT);
//	fputs(TXT, Hello);
//	printf("���ڿ��� �Է��ϼ���: ");
//	scanf("%s", TXT);
//	fputs(TXT, bye);
//
//	fclose(Hello);
//	fclose(bye);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	char TXT[100];
//	FILE* Hello = fopen("Hello.txt", "w");
//	FILE* bye = fopen("bye.txt", "w");
//	printf("���ڿ��� �Է��ϼ���: ");
//	scanf("%s", TXT);
//	fputs(TXT, Hello);
//	printf("���ڿ��� �Է��ϼ���: ");
//	scanf("%s", TXT);
//	fputs(TXT, bye);
//
//	fclose(Hello);
//	fclose(bye);
//
//	char TXT1[100], TXT2[100];
//	Hello = fopen("Hello.txt", "r");
//	bye = fopen("bye.txt", "r");
//	fgets(TXT1, 99, Hello);
//	printf("%s\n", TXT1);
//	fgets(TXT2, 99, bye);
//	printf("%s\n", TXT2);
//
//	fclose(Hello);
//	fclose(bye);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char TXT[100];
//	FILE* Hello = fopen("Hello.txt", "w");
//	FILE* bye = fopen("bye.txt", "w");
//	printf("���ڿ��� �Է��ϼ���: ");
//	scanf("%s", TXT);
//	fputs(TXT, Hello);
//	printf("���ڿ��� �Է��ϼ���: ");
//	scanf("%s", TXT);
//	fputs(TXT, bye);
//
//	fclose(Hello);
//	fclose(bye);
//
//	char TXT1[100], TXT2[100];
//	Hello = fopen("Hello.txt", "r");
//	bye = fopen("bye.txt", "r");
//	fgets(TXT1, 99, Hello);
//	printf("%s\n", TXT1);
//	fgets(TXT2, 99, bye);
//	printf("%s\n", TXT2);
//
//	int count = 0;
//
//	for (int i = 0; TXT[i]  || TXT2[i] ; i++) {
//		if (TXT1[i] == TXT2[i]) {
//			count++;
//		}
//	}
//
//	printf("\n���� ��ġ, ���� ������ ����: %d", count);
//
//	fclose(Hello);
//	fclose(bye);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//
//#define MAXENERGY 6
//
//void printenergy(int my) {
//	printf("�� ��� : ");
//	for (int i = 0; i < my; i++) {
//		printf("��");
//	}
//	for (int i = 0; i < MAXENERGY; i++) {
//		printf("��");
//	}
//	printf("\n");
//}
//
//int main() {
//	srand((unsigned int)time(NULL));
//	char num[4] = "___", tmp[4];
//	int answer = rand() % 1000;
//	sprintf(tmp, "%03d", answer);
//	int energy = MAXENERGY;
//	char input;
//	while (1) {
//		printenergy(energy);
//		if (!energy) {
//			printf("���� ����...\n");
//			printf("���� : %s", tmp);
//			break;
//		}
//		printf("���� : %s\n\n", num);
//		if (atoi(num) == answer) {
//			printf("���� �¸�!\n");
//			break;
//		}
//		printf("���ڸ� ���纸���� : ");
//		scanf(" %c", &input);
//
//		bool check = true;
//		for (int i = 0; i < 3; i++) {
//			if (tmp[i] == input) {
//				num[i] = input;
//				check = false;
//			}
//		}
//		if (check) energy--;
//	}
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAXENERGY 6

void printenergy(int my) {
	printf("�� ��� : ");
	for (int i = 0; i < my; i++) {
		printf("��");
	}
	for (int i = 0; i < MAXENERGY; i++) {
		printf("��");
	}
	printf("\n");
}

char* getAnswer()
{
	char* w = 0;
	FILE* Word = fopen("word.txt", "r");
	fgets(w, 10, Word);
	int size = strlen(w);
	w = (char*)malloc(sizeof(char) * size + 1);

	return w;
}

int main() {
	char* Answer = getAnswer();
	puts(Answer);

	/*for (int i = 0; i < size; i++) {
		*(num + i) = "_";
	}
	char num[] = "___", tmp[4];
	int answer = rand() % 1000;
	sprintf(tmp, "%03d", answer);
	int energy = MAXENERGY;
	char input;
	while (1) {
		printenergy(energy);
		if (!energy) {
			printf("���� ����...\n");
			printf("���� : %s", tmp);
			break;
		}
		printf("���� : %s\n\n", num);
		if (atoi(num) == answer) {
			printf("���� �¸�!\n");
			break;
		}
		printf("���ڸ� ���纸���� : ");
		scanf(" %c", &input);

		bool check = true;
		for (int i = 0; i < 3; i++) {
			if (tmp[i] == input) {
				num[i] = input;
				check = false;
			}
		}
		if (check) energy--;
	}*/
	return 0;
}