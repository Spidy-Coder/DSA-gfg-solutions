class Solution{
    public:
    //Function to count the number of subarrays which adds to the given sum.
    int subArraySum(int arr[], int n, int sum)
    {
        unordered_map<int,int> map;
        int prefix_sum=0, res=0;
        for(int i=0;i<n;i++){
            prefix_sum += arr[i];
            if(prefix_sum == sum){
                res++;
            }
            if(map.find(prefix_sum - sum) != map.end()){
                res += (map[prefix_sum - sum]);
            }
        
            map[prefix_sum]++;
            
        }
        
        return res;
    }
};
