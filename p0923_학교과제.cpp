//#include <iostream>
//using namespace std;
//
//int main(void) {
//	int number_all;
//	int number_10;
//
//	cout << "������ �Է��ϼ���>>";
//	cin >> number_all;
//
//	number_10 = (number_all % 100) / 10;
//
//	cout << number_all << "�� 10�ڸ� ���� " << number_10 << "�Դϴ�.";
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
//	cout << "��ĭ���� ���ڿ��� �Է��ϼ���>>";
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
//	cout << "��ĭ���� ���ڿ��� �Է��ϼ���>>";
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

	cout << "����ǥ �⸶��: Ȳ����, �����\n";
	
	while (1) {
		cout << "�̸��� ��ǥ�� >> ";
		
		cin >> Name;
		if (Name == "�׸�") break;
		
		cin >> vote_count;
		
		if (Name == "Ȳ����") {
			vote_count_Hwang += vote_count;
		}
		else if (Name == "�����") {
			vote_count_Zhang += vote_count;
		}
		else {
			cout << Name << "��(��) �⸶�ڰ� �ƴմϴ�.\n";
			continue;
		}
	}

	cout << "���� ����: Ȳ���� " << vote_count_Hwang << ", ����� " << vote_count_Zhang << "\n";

	if (vote_count_Hwang > vote_count_Zhang) cout << "����ǥ�� Ȳ���� ����Ǿ����ϴ�.";
	else if (vote_count_Hwang < vote_count_Zhang) cout << "����ǥ�� ����� ����Ǿ����ϴ�.";
	else cout << "����ǥ�� Ȳ����, ����� ��������Ǿ����ϴ�";

	return 0;
}