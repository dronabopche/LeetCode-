Problem : Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

Solution:(My code) step1: Outer loop: Continue as long as num has more than 1 digit (num >= 10).
                   step2: Initialize sum: Set sum = 0 to store the sum of digits.
                   step3: Inner loop: Process each digit of num:
                   step4: Add the last digit to sum (num % 10).
                   step5: Remove the last digit (num /= 10).
                   step6: Update num: After summing digits, set num = sum.
                   step7: Repeat: The outer loop continues if num is still 10 or greater.
                   step8: Return result: Once num is a single digit, return num.

Code:
    
int addDigits(int num) {
    while (num >= 10) { 
        int sum = 0;
        while (num > 0) {
            sum += num % 10;  
            num /= 10;         
        }
        num = sum;  
    }
    return num;  
}


