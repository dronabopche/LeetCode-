Problem: Given a sorted array of distinct integers and a target value, return the index if the target is found.
                                       If not, return the index where it would be if it were inserted in order.
   
Solution: Step 1: Iterate through the array:

         Step 2: Use a for loop to go through each element of the array nums.

         Step 3: Check if the current element is greater than or equal to the target:
                   If nums[i] >= target, it means the target should be inserted at the current index i.

         Step 4: Return the insertion position:
                 If the target is found or the correct insertion position is determined, return the index i.

        Step 5: Handle the case where the target is greater than all elements:
                 If the loop completes without finding a suitable position, it means the target should be inserted at the end of the array. Return nums.size().
code:
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
   
    for (int i = 0; i < nums.size(); i++) {
       
        if (nums[i] >= target) {
            return i;
        }
    }
    
    return nums.size();
    }
};
