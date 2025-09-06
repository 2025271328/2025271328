//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include "CStack.h"
//
//int main() {
//
//	int choice;
//	bool while_flag = true;
//
//	CStack st;
//	st.data_load();
//
//	while (while_flag) {
//		printf("[stack]\n1. push\n2. pop\n: ");
//		scanf("%d", &choice);
//
//		switch (choice) {
//		case 1: // push 기능 함수
//			st.push();
//			break;
//		case 2: // pop 기능 함수
//			st.pop();
//			break;
//		default:
//			while_flag = false;
//			break;
//		}
//		// print 기능 함수
//		st.print();
//	}
//
//	st.data_save();
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include "CQueue.h"
//
//
//void main(void) {
//
//	int i = 0;
//	int temp;
//	int choice;
//	bool while_flag = true;
//
//	CQueue qu;
//	qu.init_queue();
//	qu.data_load();
//
//	while (while_flag) {
//		printf("[queue]\n1. push\n2. pop\n3. clear\n: ");
//		scanf("%d", &choice);
//
//		switch (choice) {
//		case 1:
//			printf("queue에 넣을 값을 입력해주세요 ==> ");
//			scanf("%d", &temp);
//			i = qu.enqueue(temp);
//			break;
//		case 2:
//			i = qu.dequeue();
//			printf("pop value is %d\n", i);
//			break;
//		case 3:
//			qu.clear_queue();
//			printf(" \n Now queue is empty\n");
//			break;
//		default:
//			while_flag = false;
//			break;
//		}
//		qu.print_queue();
//	}
//
//	qu.data_save();
//
//}

//#include <iostream>
//
//void main() {
//	int number;
//	int count;
//	std::cin >> number >> count;
//
//	std::cout << "new : " << number << "" << count << std::endl;
//}

//#include <iostream>
//
//using namespace std;
//void main() {
//	int number;
//	int count;
//	cin >> number >> count;
//
//	cout << "new : " << number << "" << count << endl;
//}

//#include <iostream>
//
//using namespace std;
//void main() {
//	int* buff;
//	buff = new int[2];
//	cin >> buff[0] >> buff[1];
//
//	cout << "new : " << buff[0] << "" << buff[1] << endl;
//
//	delete buff;
//}

#include <iostream>
#include <fstream>

using namespace std;
void main() {
	int* buff;
	buff = new int[2];
	cin >> buff[0] >> buff[1];

	ofstream fout("file.txt");
	fout << buff[0] << "" << buff[1] << endl;
	fout.close();

	ifstream fin;
	fin.open("file.txt");
	fin >> buff[2] >> buff[3];
	cout << "new : " << buff[2] << "" << buff[3] << endl;

	delete buff;

	delete buff;
}


