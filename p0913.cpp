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

//#include <iostream>
//#include <fstream>
//
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
//	cout << "new : " << buff[2] << "" << buff[3] << endl;
//	fin.close();
//
//	delete buff;
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <time.h>
//
//using namespace std;
//
//void main() {
//	srand((unsigned)time(NULL));
//	int number;
//	int *score;
//	
//	int max_count[101] = { };
//
//	
//	cout << "학생인원정보 >> ";
//	cin >> number;
//
//	score = new int[number];
//
//	cout << "성적 : ";
//
//	for (int i = 0; i < number; i++) {
//		score[i] = rand() % 101;
//		cout << score[i] << " ";
//	}
//
//	for (int i = 0; i < number; i++) {
//		max_count[score[i]] += 1;
//	}
//
//	int max = 0;
//	for (int i = 1; i <= 100; i++) {
//		if(max_count[i] > max_count[max])
//			max =i; 
//	}
//
//	cout << "\n최다점수 : " << max << ", 인원 : " << max_count[max];
//
//	delete score;
//
//}

//#include <iostream>
//#include <string>
//
//void main() {
//	std::string s = "example string";
//	char search = 'x';
//	int at = s.find(search, 0);
//	std::cout << s << std::endl;
//	std::cout << "'x' is at " << at << "" << std::endl;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//void main() {
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for (vector<int>::size_type i = 0; i < v.size(); ++i) {
//		cout << v[i] << endl;
//	}
//
//	cout << endl;
//
//	cout << "size : " << v.size() << " max_size : " << v.max_size() << endl;
//}

#include <iostream>
#include <list>
using namespace std;

void main() {
	list<int> lt;

	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);

	list<int>::iterator iter;
	for (iter = lt.begin(); iter != lt.end(); ++iter) {
		cout << *iter << '  ';
	}
	cout << endl;

	iter = lt.begin();
	iter++;
	iter++;

	list<int>::iterator iter2 = lt.erase(iter);
	for (iter = lt.begin(); iter != lt.end(); ++iter) {
		cout << *iter << '  ';
	}
	cout << endl;

	lt.remove(10);

	for (iter = lt.begin(); iter != lt.end(); ++iter) {
		cout << *iter << '  ';
	}
	cout << endl;
}