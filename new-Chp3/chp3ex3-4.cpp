#include <iostream>
#include <string>

using std::cin;	 using std::endl;
using std::cout; using std::string;


int main()
{
	string max="";
	string min = "";
	string word;
	cout << "Enter all words followed by EOF: ";

	while (cin >> word) {
		//�ʱ�ȭ
		if (min.size() == 0) min = word;
		if (max.size() == 0) max = word;
		
		//ũ��Ȯ��
		if (word.size() < min.size()) min = word;
		else if (word.size() > max.size()) max = word;
	}
	cout << "Max: " << max<<endl<< "Min: " << min;

	return 0;
}