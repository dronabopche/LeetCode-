Problem: Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
  
Solution (Using String):
                         Step 1: Check if num is a single digit: If num is already a single digit, return it.
                         Step 2: Convert num to string: Convert num to a string to process each character.
                         Step 3: Sum the digits: Sum the digits of the string.
                         Step 4: Repeat: If the sum is more than one digit, repeat steps 2-3.
                         Step 5: Return result: Once the sum is a single digit, return the result.

Code:
int addDigits(int num) {
    while (num >= 10) {
        char str[12];
        sprintf(str, "%d", num);  // Convert num to string
        num = 0;
        for (int i = 0; i < strlen(str); i++) {
            num += str[i] - '0';  // Convert char to digit and add
        }
    }
    return num;
}






