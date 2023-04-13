#include <iostream>
#include <vector>

using namespace std;

/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:
Input: nums = [3,2,3]
Output: 3

Example 2:
Input: nums = [2,2,1,1,1,2,2]
Output: 2
*/

class Solution {
public:
	int majorityElement(vector<int>& nums) {
		int candidate = nums[0];
		int counter = 0;

		for (int n : nums) {
			if (n == candidate) {
				counter += 1;
			} else {
				counter -= 1;
			}

			if (counter == -1) {
				candidate = n;
				counter = 0;
			}
		}

		return candidate;
	}
};

int main() {
	Solution sol;

	vector<int> nums1 = {3,2,3};
	int target1 = 3;

	vector<int> nums2 = {2,2,1,1,1,2,2};
	int target2 = 2;

	int out1 = sol.majorityElement(nums1);
	int out2 = sol.majorityElement(nums2);

	if (out1 == target1 && out2 == target2) {
		cout << "Succeeded" << "\n";
	} else {
		cout << "Failed" << "\n";
	}

	return 0;
}
