Solution: Initialize left and right pointers:
              left starts at 0 (beginning of the array).
              right starts at nums.size() - 1 (end of the array).

          Perform binary search:
              Calculate the middle index mid using left + (right - left) / 2 to avoid overflow.

          Compare the middle element nums[mid] with the target:
               If nums[mid] == target, the target is found, and mid is returned.
               If nums[mid] < target, the target lies in the right half. Update left = mid + 1.
               If nums[mid] > target, the target lies in the left half. Update right = mid - 1.

           Return the insertion position:
              If the target is not found, the loop ends when left > right.
              At this point, left represents the index where the target should be inserted.
Code:
int left = 0;                    
    int right = nums.size() - 1;    

    while (left <= right) {
        int mid = left + (right - left) / 2;  

        if (nums[mid] == target) {
         
            return mid;
        } else if (nums[mid] < target) {
         
            left = mid + 1;
        } else {
           
            right = mid - 1;
        }
    }

    return left;

    }
};
