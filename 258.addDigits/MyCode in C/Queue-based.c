Problem: Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
  
Solution (Queue-based): Step 1: Check if num is a single digit: If num is already less than 10, return num.
                        Step 2: Initialize a queue: Add all digits of num to a queue.
                        Step 3: Sum digits from the queue: Dequeue digits and sum them.
                        Step 4: Repeat: If the sum is more than one digit, put the sum back in the queue and repeat.
                        Step 5: Return result: Once the sum is a single digit, return the result.
Code :
int addDigits(int num) {
    if (num < 10) return num;
    
    // Allocate memory for a queue (using a simple array-based queue)
    int queue[10];  // Maximum 10 digits for a number
    int front = 0, rear = 0;
    
    // Add digits to the queue
    while (num > 0) {
        queue[rear++] = num % 10;
        num /= 10;
    }
    
    // Sum digits and check if we need to repeat
    while (rear - front > 1) {
        int sum = 0;
        while (front < rear) {
            sum += queue[front++];
        }
        queue[rear++] = sum;
        front = 0;  // Reset the front of the queue for the next iteration
    }
    
    return queue[front];  // Return the final single digit
}
