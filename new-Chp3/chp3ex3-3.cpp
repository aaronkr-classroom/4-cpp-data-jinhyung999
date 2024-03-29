#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin;	 using std::vector;
using std::cout; using std::string;
using std::endl; using std::streamsize;


int main()
{ 
	vector<string> words;
	string word;
	cout << "Enter all words followed by EOF: ";
	
	while (cin >> word)
		words.push_back(word);

	cout << "Words: " << words.size();
	
	return 0;
}