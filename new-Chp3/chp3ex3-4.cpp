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
		//초기화
		if (min.size() == 0) min = word;
		if (max.size() == 0) max = word;
		
		//크기확인
		if (word.size() < min.size()) min = word;
		else if (word.size() > max.size()) max = word;
	}
	cout << "Max: " << max<<endl<< "Min: " << min;

	return 0;
}