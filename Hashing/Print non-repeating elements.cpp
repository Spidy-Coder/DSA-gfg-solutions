class Solution{
  public:
    // arr[]: input array
    // n: size of array
    //Function to return non-repeated elements in the array.
    vector<int> printNonRepeated(int arr[],int n)
    {
        unordered_map<int,int> map;
        vector<int> ans;
        for(int i=0;i<n;i++){
            map[arr[i]]++;
        }
        
        for(auto x:map){
            if(x.second == 1){
                ans.push_back(x.first);
            }
        }
        
        return ans;
        
    }
};
