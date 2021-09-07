class Solution{
    public:
    //Complete this function
    //Function to return the count of non-repeated elements in the array.
    int countNonRepeated(int arr[], int n)
    {
        unordered_map<int,int> map;
        long long count=0;
        for(int i=0;i<n;i++){
            map[arr[i]]++;  //Key:value pair
        }
        
        for(auto x:map){
            if(x.second == 1){
                count++;
            }
        }
        
        return count;
        
        
        
        
    }

};
