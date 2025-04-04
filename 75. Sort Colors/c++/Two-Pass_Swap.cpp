Problem : Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
          We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
          You must solve this problem without using the library's sort function.
  
Solution :
  
Code:
 void sortColors(vector<int>& nums) {
    int n = nums.size();
    int ptr = 0;
    
    for (int i = 0; i < n; i++) {
        if (nums[i] == 0) {
            swap(nums[i], nums[ptr++]);
        }
    }
   
    for (int i = ptr; i < n; i++) {
        if (nums[i] == 1) {
            swap(nums[i], nums[ptr++]);
        }
    }
}
