Problem: Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
  
Solution (Formula): Step 1: Check for zero: If num == 0, return 0 (special case).
                    Step 2: Apply the digital root formula:
                            The digital root can be found as: 1 + (num - 1) % 9.
                    Step 3: Return result: If num is non-zero, the formula gives the digital root.
    
  
Code:

int addDigits(int num) {
    if (num == 0) return 0;
    return 1 + (num - 1) % 9;
}
