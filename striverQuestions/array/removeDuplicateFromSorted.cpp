/*Given an integer array nums sorted in non-decreasing order, remove the duplicates
 in-place such that each unique element appears only once. The relative order of 
 the elements should be kept the same. Then return the number of unique elements in nums.*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int index=1;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                nums[index]=nums[i];
                index++;
            }    
        }
        return index;
      }  
    };