Problem : Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
Solution:
Code:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();      
       
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
            
                if (nums[i] + nums[j] == target) {
                    return {i, j}; 
                }
            }
        }
        
        return {}; 
    }
};
