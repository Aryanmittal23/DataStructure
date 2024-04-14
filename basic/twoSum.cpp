/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.*/


class Solution {
public:
std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numIndexMap;

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];

        
        if (numIndexMap.find(complement) != numIndexMap.end()) {
            
            return {numIndexMap[complement], i};
        }

        
        numIndexMap[nums[i]] = i;
    }

    
    return {};
}

int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    std::vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        std::cout << "Indices of the two numbers: " << result[0] << " and " << result[1] << std::endl;
    } else {
        std::cout << "No solution found." << std::endl;
    }

    return 0;
}
};