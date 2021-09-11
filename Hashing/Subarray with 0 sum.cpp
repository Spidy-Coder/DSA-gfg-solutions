class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    //Approach:- Hashing + prefix_sum
    bool subArrayExists(int arr[], int n)
    {
        unordered_set<int> set;
        int prefix_sum = 0;
        for(int i=0;i<n;i++){
            prefix_sum += arr[i];
            if(prefix_sum == 0){
                return true;
            }
            if(set.find(prefix_sum) != set.end()){
                return true;
            }
            set.insert(prefix_sum);
        }
        
        return false;
    }
};
