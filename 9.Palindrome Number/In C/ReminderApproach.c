Problem : Given an integer x, return true if x is a palindrome, and false otherwise.

Solution : Step1: Check for Negative or Special Cases:
                    Return false if x is negative or if x ends in 0 (except x == 0).
           Step2: Reverse the Second Half of the Number:
                    Reverse the last half of the number by extracting the last digit and shifting it to reversedHalf.
           Step3: Compare the Two Halves:
                    Check if the first half (x) equals the reversed second half (reversedHalf).
                    For odd-length numbers, ignore the middle digit by comparing x with reversedHalf / 10.
           Step4: Return the Result:
                    Return true if the halves match, otherwise return false.
  
Error : Line 9: Char 27: runtime error: signed integer overflow: 998765432 * 10 cannot be represented in type 'int' [solution.c]

Code:

bool isPalindrome(int x) {
    int temp1 = x ;
    int reverse = 0;
   
  if(x==0){
        return true;}
    else if(x > 0){
    while(temp1 != 0){
        int temp = temp1%10;
        reverse = reverse * 10 + temp ;
        temp1 /= 10;
    }
      if(reverse == x){
        return true;
      }else{
        return false;
      }
    }else{
       return false;
    }

}
