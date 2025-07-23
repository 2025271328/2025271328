//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int arr[4] = { 4,3,1,2 };
//
//void swap(int arr[], int size) {
//	int temp[4];
//	for (int i = 0; i < size; i++) {
//		for (int j = 0; j < size - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				temp[j] = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp[j];
//			}
//		}
//	}
//}
//
//int main(void) {
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	swap(arr, size);
//
//	for (int i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int arr[4] = { 0 };
//
//void swap(int arr[], int size) {
//	int temp[4];
//	for (int i = 0; i < size; i++) {
//		for (int j = 0; j < size - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				temp[j] = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp[j];
//			}
//		}
//	}
//}
//
//int main(void) {
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	for (int i = 0; i < size; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	swap(arr, size);
//
//	for (int i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//void main() {
//	int one = 1, two = 2;
//	int max = 0;
//
//	if (one > two) max = one;
//	else max = two;
//	printf("max = %d \n", max);
//}

//#include <stdio.h>
//
//void main() {
//	int one = 1, two = 3, three = 2;
//	int max = 0;
//
//	if (one > two) {
//		if (one > three) max = one;
//		else max = three;
//	}
//	else {
//		if (two > three) max = two;
//		else max = three;
//	}
//	printf("max = %d \n", max);
//}

//#include <stdio.h>
//
//void main() {
//	int a[3] = {1, 3, 2};
//	int max = a[0];
//
//	for (int i = 0; i < 3; i++) {
//		if (max < a[i])
//			max = a[i];
//	}
//
//	printf("max = %d \n", max);
//}

//#include <stdio.h>
//
//void main() {
//	int a[5] = { 1,3,6,4,2 };
//	int max = a[0];
//	int min = a[0];
//	int sum = 0;
//	float avg;
//
//	for (int i = 0; i < 5; i++) {
//		if (max < a[i]) max = a[i];
//		if (min > a[i]) min = a[i];
//		sum += a[i];
//	}
//	avg = sum / (float)5;
//
//	printf("ÃÖ¼Ú°ª: %d\n", min);
//	printf("ÃÖ´ñ°ª: %d\n", max);
//	printf("¿ø¼ÒÀÇ ÃÑÇÕ: %d\n", sum);
//	printf("Æò±Õ: %.2f \n", avg);
//}

//#include <stdio.h>
//
//void main() {
//	int a[10] = { 1,1,4,5,6,2,3,3,4,1 };
//	int dice[6] = { 0 };
//
//	for (int i = 0; i < 10; i++) {
//		switch (a[i]) {
//		case 1: dice[0] += 1; break;
//		case 2: dice[1] += 1; break;
//		case 3: dice[2] += 1; break;
//		case 4: dice[3] += 1; break;
//		case 5: dice[4] += 1; break;
//		case 6: dice[5] += 1; break;
//		}
//	}
//
//	for (int i = 0; i < 6; i++) {
//		printf("%d: %d \n", i + 1, dice[i]);
//	}
//}

//#include <stdio.h>
//
//int main() {
//	char arr[2][3] = { '1','2','3','4','5','6' };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char arr[2][3] = { {'1','2','3'},{'4','5','6'} };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int arr2d[5][4] = {
//		{662,7,4,74},
//		{8,396,299,95},
//		{66,73,86,0},
//		{116,26,586,42},
//		{84,7,41,11}
//	};
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 4; j++) {
//			printf("%d ", arr2d[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int arr2d[3][3] = {
//		{2,4,6},
//		{8,10,12},
//		{14,16,18}
//	};
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%d ", arr2d[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//void main() {
//	const int m = 4;
//	const int n = 3;
//	long data[m][n];
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			data[i][j] = i + j;
//		}
//	}
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			printf(" %3d", data[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//
//void main() {
//	int num = 0;
//	const int m = 5;
//	const int n = 5;
//	long data[m][n];
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			data[i][j] = ++num;
//		}
//	}
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			printf(" %3d", data[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//
//void main() {
//	int num = 0;
//	const int m = 5;
//	const int n = 5;
//	long data[m][n];
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			data[i][j] = ++num;
//		}
//	}
//	for (int i = m - 1; i >= 0; i--) {
//		for (int j = n - 1; j >= 0; j--) {
//			printf(" %3d", data[i][j]);
//		}
//		printf("\n");
//	}
//}

#include <stdio.h>

void main() {
	int num = 0;
	const int m = 5;
	const int n = 5;
	long data[m][n];
	long data_1[m * n];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			data[i][j] = ++num;
		}
	}

	num = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			data_1[num++] = data[i][j];
		}
	}

	for (int i = 0; i < m * n; i++) {
		printf("%ld ", data_1[i]);
	}
}