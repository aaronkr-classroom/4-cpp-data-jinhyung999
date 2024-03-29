// chp3ex0.cpp
// 중간고사, 기말고사, 그리고 과제 점수 몇개를 받고
// 마지막 평균 결과 점수를 계산하기.
#include<algorithm>
#include <ios>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using std::cin;	using std::setprecision; // 실수 숫자 길이 정의
using std::cout; using std::string;
using std::endl; using std::streamsize;
using std::sort; using std::vector;

int main() {
	// 과제 점수를 물음
	cout << "Enter all homework grades "
		"followed by EOF: "; // End-Of-File

	vector<double> homework;

	// 입력을 위한 변수
	double x; // cin에서 사용하기 

	// 불변성: 지금까지 count개 점수를 입력받았으며
	// 입력받은 점수의 합은 sum
	while (cin >> x) {
		homework.push_back(x);
	}
	//과제 점수의 입력 유무를 확인
	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();

	if (size == 0) {
		cout << endl << "No grades. Try again." << endl;
		return 1;
	}
	//점수정렬
	sort(homework.begin(), homework.end());

	//과제점수의 중앙값을 구함
	
	vec_sz q1 = size / 4;
	vec_sz q2 = size / 2;
	vec_sz q3 = 3 * size / 4;

	double q1_val, q2_val, q3_val;
	q1_val = size % 4 == 0 ? (val[q1] + val[q1 - 1]) / 2 : val[q1];
	q2_val = size % 2 == 0 ? (val[q2] + val[q2 - 1]) / 2 : val[q2];
	q3_val = 3 * size % 4 == 0 ? (val[q3] + val[q3 - 1]) / 2 : val[q3];

	cout << "Q1: " << q1_val << endl
		<< "Q2: " << q2_val << endl
		<< "Q3: " << q3_val << endl;

	// 결과를 출력
	/*streamsize prec = cout.precision(); // 지금 cout precision
	cout << "Final grade: " << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * median
		<< setprecision(prec) << endl;*/

	return 0;
} // main 끝
