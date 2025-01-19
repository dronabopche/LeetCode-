Problem: Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

Solution (Your code):
Step 1: Outer loop: Continue as long as num has more than 1 digit (num >= 10).
Step 2: Initialize sum: Set sum = 0 to store the sum of digits.
Step 3: Inner loop: Process each digit of num:
Step 4: Add the last digit to sum (num % 10).
Step 5: Remove the last digit (num //= 10).
Step 6: Update num: After summing digits, set num = sum.
Step 7: Repeat: The outer loop continues if num is still 10 or greater.
Step 8: Return result: Once num is a single digit, return num.

Code :  def addDigits(num):
     while num >= 10:
        sum_digits = 0
        while num > 0:
            sum_digits += num % 10
            num //= 10
        num = sum_digits
    return num

