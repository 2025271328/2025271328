//#include <stdio.h>
//
//void main() {
//	char ss[5] = "abcd";
//	char tt[5];
//	int i;
//
//	for (i = 0; i < 4; i++) {
//		tt[i] = ss[3 - i];
//	}
//	tt[4] = '\0';
//
//	printf("�Ųٷ� ����� ��� ==> %s \n", tt);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//void main() {
//	char ss[] = "XYZ";
//	int len;
//
//	len = strlen(ss);
//
//	printf("���ڿ� \"%s\"�� ���� ==> %d \n", ss, len);
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	char ss[4];
	strcpy(ss, "XYZ");

	printf("���ڿ� ss�� ���� ==> %s \n", ss);
}