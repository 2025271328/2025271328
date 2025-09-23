//#include <iostream>
//using namespace std;
//
//int main(void) {
//	int number_all;
//	int number_10;
//
//	cout << "정수를 입력하세요>>";
//	cin >> number_all;
//
//	number_10 = (number_all % 100) / 10;
//
//	cout << number_all << "의 10자리 수는 " << number_10 << "입니다.";
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main(void) {
//	int i;
//
//	for (i = 1; i <= 55; i++) {
//		cout << i << '\t';
//		if (i % 10 == 0) {
//			cout << '\n';
//		}
//	}
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main(void) {
//	char text[100];
//	int size;
//
//	cout << "빈칸없이 문자열을 입력하세요>>";
//	cin >> text;
//
//	size = strlen(text);
//
//	for (int i = 0; i < size; i++) {
//		cout << text[i] << " ";
//	}
//	
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(void) {
//	string text;
//	int size = 0;
//
//	cout << "빈칸없이 문자열을 입력하세요>>";
//	cin >> text;
//
//	size = text.length();
//
//	for (int i = 0; i < size; i++) {
//		cout << text[i] << " ";
//	}
//
//
//	return 0;
//}

#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string Name;
	int vote_count;
	int vote_count_Hwang = 0;
	int vote_count_Zhang = 0;

	cout << "과대표 출마자: 황수희, 장수희\n";
	
	while (1) {
		cout << "이름과 투표수 >> ";
		
		cin >> Name;
		if (Name == "그만") break;
		
		cin >> vote_count;
		
		if (Name == "황수희") {
			vote_count_Hwang += vote_count;
		}
		else if (Name == "장수희") {
			vote_count_Zhang += vote_count;
		}
		else {
			cout << Name << "은(는) 출마자가 아닙니다.\n";
			continue;
		}
	}

	cout << "최종 집계: 황수희 " << vote_count_Hwang << ", 장수희 " << vote_count_Zhang << "\n";

	if (vote_count_Hwang > vote_count_Zhang) cout << "과대표로 황수희가 선출되었습니다.";
	else if (vote_count_Hwang < vote_count_Zhang) cout << "과대표로 장수희가 선출되었습니다.";
	else cout << "과대표로 황수희, 장수희가 공동선출되었습니다";

	return 0;
}