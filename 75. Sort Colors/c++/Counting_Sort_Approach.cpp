Problem:Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
         We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
         You must solve this problem without using the library's sort function.
  
Solution:STEP 1:Count the number of 0s, 1s, and 2s
         STEP 2:Overwrite the array with the counts

code: void sortColors(vector<int>& nums) {
    int count0 = 0, count1 = 0, count2 = 0;
    for (int num : nums) {
        if (num == 0) count0++;
        else if (num == 1) count1++;
        else count2++;
    }
    int i = 0;
    while (count0--) nums[i++] = 0;
    while (count1--) nums[i++] = 1;
    while (count2--) nums[i++] = 2;
}
