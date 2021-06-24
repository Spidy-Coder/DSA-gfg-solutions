class Solution{
  public:
    int RecursivePower(int n,int p)
    {
        // if p is 0 then returning 1
        if(p==0)
            return 1;
        // returning multiplied n p times
        return n*RecursivePower(n,p-1);
    }
};

//recursive function

//main function needed to be code