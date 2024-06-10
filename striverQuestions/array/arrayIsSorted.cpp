//Given an array nums, return true if the array was originally sorted
// in non-decreasing order, then rotated some number of positions
// (including zero). Otherwise, return false.

class Solution {
public:
    bool check(vector<int>& nums) {
    int n = nums.size();
    int count_break_points = 0;
    
    for (int i = 0; i < n; ++i) {
        if (nums[i] > nums[(i + 1) % n]) {
            count_break_points++;
        }
    }
    
    return count_break_points <= 1;
    }
};