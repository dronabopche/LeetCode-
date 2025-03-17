Solution: lower_bound Function:
                lower_bound(nums.begin(), nums.end(), target) performs a binary search on the sorted vector nums.
                It returns an iterator pointing to the first element that is not less than the target.
                If the target is found, it points to the target.
                If the target is not found, it points to the position where the target should be inserted.

           distance Function:
                distance(nums.begin(), it) calculates the index of the iterator it relative to the beginning of the vector.

           Return the Result:
                The function returns the calculated index.


code:
class Solution {
public:
    int searchInsert(vector<int>& nums, int target){

    auto it = lower_bound(nums.begin(), nums.end(), target);

    
    return distance(nums.begin(), it);
    }

    };
