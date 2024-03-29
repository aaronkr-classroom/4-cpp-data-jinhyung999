#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {
	vector<int> nums;
	int n;
	while (cin >> n) {
		nums.push_back(n);
	}
	if (nums.size() % 4 != 0) {
		cout << "it's not multiple of 4";
		return 1;
	}
	sort(nums.begin(), nums.end());

	int num1, num2, num3;
	num1 = nums.size() / 4 - 1;
	num2 = nums.size() / 2 - 1;
	num3 = nums.size() / 4 * 3 - 1;

	cout << nums[num1] << "\t" << nums[num2] << "\t" << nums[num3];
}