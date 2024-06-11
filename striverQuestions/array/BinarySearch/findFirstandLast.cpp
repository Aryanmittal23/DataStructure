//Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

//If target is not found in the array, return [-1, -1].

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        std::vector<int> result = {-1, -1};
        auto findLeft = [&]() -> int {
            int l = low, h = high;
            while (l <= h) {
                int mid = l + (h - l) / 2;
                if (nums[mid] < target) {
                    l = mid + 1;
                } else {
                    h = mid - 1;
                }
            }
            return (l < n && nums[l] == target) ? l : -1;
        };
        auto findRight = [&]() -> int {
            int l = low, h = high;
            while (l <= h) {
                int mid = l + (h - l) / 2;
                if (nums[mid] <= target) {
                    l = mid + 1;
                } else {
                    h = mid - 1;
                }
            }
            return (h >= 0 && nums[h] == target) ? h : -1;
        };

        result[0] = findLeft();
        result[1] = findRight();

        return result;
    }
};