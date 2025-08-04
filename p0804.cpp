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

//#include <stdio.h>
//#define SIZE 100
//
//int main(void) {
//	int arr[SIZE];
//	int* ptr = &arr[50];
//
//	for (int i = 0; i < SIZE; i++) {
//		arr[i] = i + 1;
//	}
//
//	for (; *ptr != 50; ptr++) {
//		printf("%d ", *ptr);
//
//		if (*ptr == 100) {
//			ptr -= 100;
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main(void) {
//	char str[] = "memmove can be very useful.......";
//	memmove(str + 20, str + 15, 11);
//	puts(str);
//
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//struct mydata {
//	int a;
//	char b[25];
//};
//
//void main() {
//	char buf[5];
//	memset(buf, '1', 5);
//	printf("%s\n", buf);
//
//	buf[4] = 0x00;
//	printf("%s\n", buf);
//
//	struct mydata data;
//	memset((void*)&data, 0x00, sizeof(data));
//	data.b[0] = 'k';
//	printf("%d - %s\n", data.a, data.b);
//}

//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char* str1 = (char*)"coding";
//	char* str2 = (char*)"coding";
//	char* str3 = (char*)"coding.ne.kr";
//	char* str4 = (char*)"ne.kr";
//	char* str5 = (char*)"abcd";
//
//	printf("%s with %s = %d\n", str1, str2, memcmp(str1, str2, strlen(str1)));
//	printf("%s with %s(str1 size) = %d\n", str1, str3, memcmp(str1, str3, strlen(str1)));
//	printf("%s with %s(str2 size) = %d\n", str1, str2, memcmp(str1, str3, strlen(str3)));
//	printf("%s with %s = %d\n", str1, str4, memcmp(str1, str4, strlen(str1)));
//	printf("%s with %s(str1 size) = % d\n", str1, str5, memcmp(str1, str5, strlen(str1)));
//	printf("%s with %s(str5 size) = %d\n", str1, str5, memcmp(str1, str5, strlen(str5))); 
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	int src_data[10] = { 0, 1, 2, 3, 4, 5 };
//	int dst_data[10] = { 10, 20 , 30, 40, 50 };
//	memcpy(dst_data, src_data, sizeof(int) * 4);
//
//	printf("%d %d %d %d %d\n", src_data[0], src_data[1], src_data[2], src_data[3], src_data[4]);
//
//	printf("%d %d %d %d %d\n", dst_data[0], dst_data[1], dst_data[2], dst_data[3], dst_data[4]);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char str[20] = "coding";
//
//	strcat(str, ".ne.kr");
//	printf("%s\n", str);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char str[10];
//
//	scanf("%s", str);
//	printf("입력한 문자열 : %s\n", str);
//	printf("문자열의 길이 : %d\n", strlen(str));
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char str[] = "This is a sample string";
//	char* pch;
//	printf("Looking for the 's' character in \"%s\"... \n", str);
//	pch = strchr(str, 's');
//
//	while (pch != NULL) {
//		printf("found at %d\n", pch - str + 1);
//		pch = strchr(pch + 1, 's');
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char str[] = "This is a simple string";
//	char* pch;
//
//	pch = strstr(str, "simple");
//	strncpy(pch, "sample", 6);
//
//	printf("%s\n", str);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	const char* str1 = "LPUX";
//	const char* str2 = "HINUX";
//	const char* str3 = "SOLARTS";
//
//	printf("s1[%-7s], s2[%-7s] => ret = [%2d]\n", str1, str2, strcmp(str1, str2));
//	printf("s2[%-7s], s3[%-7s] => ret = [%2d]\n", str2, str3, strcmp(str2, str3));
//	printf("s3[%-7s], s1[%-7s] => ret = [%2d]\n", str1, str2, strcmp(str3, str1));
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char buf[25];
//
//	strcpy(buf, "hello world");
//	printf("%s\n", buf);
//	strncpy(buf, "www yorld", 5);
//	printf("%s\n", buf);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char buff[100];
//	gets_s(buff);
//	char N;
//	char* q;
//
//	while (1) {
//		printf("문자 검색 (0을 입력하면 종료) >> ");
//		scanf(" %c", &N);
//		if (N == '0') break;
//		if ((q = strchr(buff, N)) == NULL) printf("없다.\n");
//		else printf("%d번째에 있다.\n", q - buff + 1);
//		
//	}
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int parsing(char* string, int* data) {
	char* p;
	int cnt;
	cnt = 0;
	p = strtok(string, "_");
	while (p) {
		data[cnt++] = atoi(p);

		p = strtok(NULL, "_");
	}
	return cnt;
}

int main() {
	char String[] = "101_102_103_104_105";
	int data[10];
	int cnt, i;

	cnt = parsing(String, data);

	for (i = 0; i < cnt; i++) {
		printf("%d\n", data[i]);
	}
	return 0;
}