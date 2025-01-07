#include <iostream>
#include <vector>
using namespace std;
class Solution {

    //顺序查找：时间负责度为O(n)
public:
    int SequenceSearch(vector<int>& nums, int target)
    {
        int i;
        int len = nums.size() - 1;
        for (i = 0; i < len; i++)
            if (nums[i] = target)
                return i;
        return -1;
    }
    //二分查找：时间复杂度为O(log2n)
public:
    int BinarySearch(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right) {
            int middle = left + (right - left) / 2;
            if (nums[middle] == target) {
                return middle;
            }
            else if (nums[middle] < target) {
                left = middle + 1;
            }
            else {
                right = middle - 1;
            }
        }
        return -1;
    }
};
int main() {
    Solution sol;
    vector<int> nums = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int target = 5;
    int result = sol.BinarySearch(nums, target);
    return 0;
}
