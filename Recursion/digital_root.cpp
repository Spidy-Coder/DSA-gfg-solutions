//Back-end complete function Template for C++



class Solution{
  public:
    // function to calculate digit sum of a number
    int sumDigits(int n)
    {
        // returning n if n / 10 is 0
        if(n / 10 == 0)
            return n;
        // else adding digit sum
        else
            return n % 10 + sumDigits(n/10);
    }
    
    
    // function to calculate the single digit answer
    int digitalRoot(int n)
    {
        // if n is less than n then 
        // returning the n
        if(n / 10 == 0)
            return n;
        // else calling sumDigits function
        else
            return digitalRoot(sumDigits(n));
        
    }
};
