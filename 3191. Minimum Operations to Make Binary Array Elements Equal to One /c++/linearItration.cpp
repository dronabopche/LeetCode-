Problem: You are given a binary array nums.

        You can do the following operation on the array any number of times (possibly zero):

       -> Choose any 3 consecutive elements from the array and flip all of them.
       -> Flipping an element means changing its value from 0 to 1, and from 1 to 0.

Return the minimum number of operations required to make all elements in nums equal to 1. If it is impossible, return -1.
  
Solution: STEP 1: Initialize a counter operations to keep track of the number of flips.
          STEP 2: Iterate through the array from the first element to the third-to-last element.
          STEP 3:For each element at index i:
                  If nums[i] is 0, flip the triplet starting at i (i.e., flip nums[i], nums[i+1], and nums[i+2]).
                  Increment the operations counter.
          STEP 4:After processing the array, check if all elements are 1:
                   If yes, return operations.
                   If no, return -1 (it's impossible to make all elements 1).
          Edge Cases: 
                   If the array length is less than 3:
                   If all elements are already 1, return 0.
                   Otherwise, return -1 (since we cannot perform any flips).
Code:
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

  
        for (int i = 0; i <= n - 3; i++) {
            if (nums[i] == 0) {
               
                nums[i] = 1;          
                nums[i + 1] ^= 1;    
                nums[i + 2] ^= 1;     
                count++;             
            }
        }

    
        for (int j = 0; j < n; j++) {
            if (nums[j] == 0) {
                return -1; 
            }
        }

        return count; 
    }
};
