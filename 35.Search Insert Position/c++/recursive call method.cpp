Problem: Given a sorted array of distinct integers and a target value, return the index if the target is found. 
                                                                        If not, return the index where it would be if it were inserted in order.
                                                                        You must write an algorithm with O(log n) runtime complexity.
Solution: Step 1: searchInsert Function
                  This is the public function that initiates the search process.
                  It takes two inputs:
                    nums: A sorted vector of integers.
                    target: The integer value to search for or determine the insertion position for.
                  It calls the private recursiveSearch function and returns its result.
  
          Step 2: recursiveSearch Function
                  This is the core recursive function that performs the binary search.
                  It takes two inputs:
                     nums: A subarray (or the full array) of the original sorted vector.
                     target: The integer value to search for.

                  Base Case:
                  If the input vector nums is empty (n == 0), it means the target is not found in the array, and the correct insertion position is 0. This is because the target should be inserted at the beginning of an empty array.

                  Recursive Case:
                  Calculate the Middle Index:
                     The middle index mid is calculated as (n - 1) / 2, where n is the size of the current subarray.
                     This ensures the array is divided into two roughly equal halves.
                  Check if the Middle Element is the Target:
                     If nums[mid] == target, the target is found, and the function returns mid as the index.
                  If the Target is Smaller than the Middle Element:
                     If nums[mid] > target, the target must lie in the left half of the array.
                     A new subarray leftHalf is created, containing elements from the start of the array up to (but not including) the middle index.
                    The recursiveSearch function is called on this leftHalf.
                 If the Target is Larger than the Middle Element:
                     If nums[mid] < target, the target must lie in the right half of the array.
                     A new subarray rightHalf is created, containing elements from the index immediately after the middle index to the end of the array.
                     The recursiveSearch function is called on this rightHalf.
                     Since the right half starts at mid + 1, the result from the recursive call must be adjusted by adding mid + 1 to it to get the correct position in the original array.

          Step 3: Recursion and Return
                  The recursion continues until the base case is reached (either the target is found or the subarray becomes empty).
                  The function returns the index where the target is found or the position where it should be inserted.


Code:
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return recursiveSearch(nums, target);
    }

private:
    int recursiveSearch(vector<int>& nums, int target) {
        int n = nums.size();

        if (n == 0) {
            return 0;
        }

        int mid = (n - 1) / 2; 

        if (nums[mid] == target) {
            return mid; 
        } else if (nums[mid] > target) {
          
            vector<int> leftHalf(nums.begin(), nums.begin() + mid);
            return recursiveSearch(leftHalf, target);
        } else {
            
            vector<int> rightHalf(nums.begin() + mid + 1, nums.end());
            int result = recursiveSearch(rightHalf, target);
            return mid + 1 + result;
        }
    }
};
