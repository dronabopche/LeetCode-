//mycode 
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

//most optimised code
class Solution {
public:
    int addDigits(int num) {
      int sum=0;
        while(num)
        {
            sum+=(num%10);
            num/=10;
        }
        if(sum<10)
            return sum;
        else
            return addDigits(sum);
    }
};
