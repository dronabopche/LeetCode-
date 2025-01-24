Problem : Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
Solution:
Code:
class Solution {
  List<int> twoSum(List<int> nums, int target) {
 
    for (int i = 0; i < nums.length; i++) {
      for (int j = i + 1; j < nums.length; j++) {
      
        if (nums[i] + nums[j] == target) {
          return [i, j];
        }
      }
    }
  
    return [];
  }
}
