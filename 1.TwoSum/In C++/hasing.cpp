Problem : Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
          You may assume that each input would have exactly one solution, and you may not use the same element twice.

Solution :  STEP 1: Initialize an empty map:
                   Create an unordered map map to store each element's value and its index.
            STEP 2: Iterate through the array nums:
                   For each element nums[i], perform the following steps:
            STEP 3:Calculate the complement:
                    Calculate the complement as complement = target - nums[i].
            STEP 4:Check if complement exists in the map:
                    If map.find(complement) != map.end(), return the indices {map[complement], i}.
            STEP 5:Store current element in the map:
                    If complement not found, store nums[i] with its index i in the map: map[nums[i]] = i.
            STEP 6: Return empty vector if no solution found
                    If no solution found after iterating, return [].
Code :
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          unordered_map<int, int> map;

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        
        if (map.find(complement) != map.end()) {
            return {map[complement], i};  
        }
        map[nums[i]] = i;
    }
    return {};
}     
};
