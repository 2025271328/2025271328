#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100
int strlen(char buff[]) {
	int size = 0;
	for (int i = 0; i < SIZE; i++) {
		if (buff[i] == '\0') break;
		size++; // else 없는게 의미전달에 유리 
	}
	return size;
}

int main(void) {
	int size;
	char buff[SIZE];
	scanf("%s", buff);

	size = strlen(buff);

	printf("%d", size);

	return 0;
}

