#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void name_code(char name[], int size) {
	printf("이름의 코드값: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", (int)name[i]);
	}
}

int main() {
	char name[10];

	printf("이름을 입력하세요 >> ");
	fgets(name, sizeof(name), stdin);

	int size = strlen(name);
	name[size - 1] = '\0';
	size = strlen(name);


	name_code(name, size);
}

