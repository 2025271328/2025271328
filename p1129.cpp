//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
////enum SHAPE { spade , heart, diamond, club};
//
//// 구조체 당 카드 한 장
//struct card {
//	int number;
//	char shape;
//};
//
//void shuffling(card* A, int size) {
//	
//	struct card tmp;
//	for (int i = 0; i < size; i++) {
//		int j = rand() % (i + 1);
//		tmp = A[i];
//		A[i] = A[j];
//		A[j] = tmp;
//	}
//}
//
//void card_print(card* A, int size) {
//	for (int i = 0; i < size; i++) {
//		printf("%c%d ", A[i].shape, A[i].number);
//	}
//}
//
//int main() {
//	srand(time(NULL));
//	char shape[4] = { 'S','H','D','C' };
//	struct card A[52];
//	int n;
//
//	int z = 0;
//	for (int i = 0; i < 4; i++) {
//		for (int j = 1; j <= 13; j++) {
//			A[z].shape = shape[i];     
//			A[z].number = j;
//			z++;
//		}
//	}
//
//	printf("카드\n");
//	card_print(A, 52);
//
//	printf("\n섞기 횟수 >> ");
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		shuffling(A, 52);
//	}
//
//	card_print(A, 52);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//void name_code(char name[], int size) {
//	printf("이름의 코드값: ");
//	for (int i = 0; i < size; i++) {
//		printf("%X ", name[i]); 
//	}
//}
//
//int main() {
//	char name[20];
//
//	printf("이름을 입력하세요 >> ");
//	fgets(name, sizeof(name), stdin);
//
//	int size = strlen(name);
//	name[size - 1] = '\0';
//	size = strlen(name);
//
//	name_code(name, size);
//}

//#include <iostream>
//
//void main() {
//	int number;
//	int count;
//	std::cin >> number >> count;
//
//	std::cout << "new : " << number << " " << count << std::endl;
//}

//#include <iostream>
//using namespace std;
//
//void main() {
//	int number;
//	int count;
//	cin >> number >> count;
//
//	cout << "new : " << number << " " << count << endl;
//}

//#include <iostream>
//using namespace std;
//
//void main() {
//	int* buff;
//	buff = new int[2];
//	cin >> buff[0] >> buff[1];
//
//	cout << "new : " << buff[0] << buff[1] << endl;
//	delete[] buff;
//}


//#include <iostream>
//#include <fstream>
//using namespace std;
//
//void main() {
//	int* buff;
//	buff = new int[4];
//	cin >> buff[0] >> buff[1];
//
//	ofstream fout("file.txt");
//	fout << buff[0] << " " << buff[1] << endl;
//	fout.close();
//
//	ifstream fin;
//	fin.open("file.txt");
//	fin >> buff[2] >> buff[3];
//	cout << "new : " << buff[2] << " " << buff[3] << endl;
//	fin.close();
//
//	delete[] buff;
//}

#include <iostream>
using namespace std;

int main() {
	srand(time(NULL));
	int student;
	int grade_many = 0;

	cout << "학생 수 >> ";
	cin >> student;

	cout << "성적 : ";
	int* grade = new int[student];
	for (int i = 0; i < student; i++) {
		grade[i] = rand() % 101;
		cout << grade[i] << " ";
	}
	
	//메모리 추가 + for문 반복 횟수 줄이기
	int* count = new int[100]();
	for (int i = 0; i < student; i++) {
		count[grade[i]] += 1;
	}
	
	for (int i = 0; i < student; i++) {
		if (count[grade[i]] > count[grade[i + 1]]) {
			grade_many = grade[i];
		}
	}

	if (count[grade_many] == 1) {
		cout << "\n최다 점수 : X, 인원 : X";
		delete[] grade;
		delete[] count;
		return 0;
	}

	cout << endl;
	cout << "최다 점수 : " << grade_many << ", 인원 : " << count[grade_many];

	delete[] grade;
	delete[] count;
	return 0;
}


