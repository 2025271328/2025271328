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

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	char str[200];
	FILE* rfp;
	FILE* wfp;

	rfp = fopen("C:\\windows\\win.ini", "r");
	wfp = fopen("C:\\data5.txt", "w");

	for (;;) {
		fgets(str, 200, rfp);

		if (feof(rfp))
			break;

		fputs(str, wfp);
	}
	fclose(rfp);
	fclose(wfp);

}

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
//		readlen = fread()
//	}
//}