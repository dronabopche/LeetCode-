Problem: Given an integer x, return true if x is a palindrome, and false otherwise.

Solution : Step 1: Edge Case Check
                  Return false if x is negative because negative numbers cannot be palindromes.
                  Return false if x ends in 0 and is not equal to 0 because numbers like 10, 100, etc., cannot be palindromes.
           Step 2: Reverse the Second Half of the Number
                  Initialize a variable reversedHalf to 0.
                  While x is greater than reversedHalf, extract the last digit of x (using x % 10), add it to reversedHalf, and update x by removing the last digit (x /= 10).
           Step 3: Compare the Two Halves
                  After the loop ends, x will contain the first half of the number, and reversedHalf will contain the reversed second half.
                  If x is equal to reversedHalf, return true.
                  If x is equal to reversedHalf / 10, return true for odd-length numbers (this ignores the middle digit).
                  Otherwise, return false.
           Step 4: Return the Result

Code:

bool isPalindrome(int x) {

    if (x < 0 || (x % 10 == 0 && x != 0)) return false;


    int reversedHalf = 0;
    while (x > reversedHalf) {
        reversedHalf = reversedHalf * 10 + x % 10;
        x /= 10;
    }

    
    return x == reversedHalf || x == reversedHalf / 10;
}

