//Given an integer array nums, rotate the array to the right by one.

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int temp=nums[0];
        for(int i=1;i<nums.size();i++){
            nums[i-1]=nums[i];
        }
        nums[nums.size()-1]=temp;
    }
};