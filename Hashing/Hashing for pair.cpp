int sumExists(int arr[], int N, int sum) {
    unordered_set<int> set;
    
    for(int i=0;i<N;i++){
        if(set.find(sum - arr[i]) != set.end()){
            return true;
        }
        else{
            set.insert(arr[i]);
        }
    }
    
    return false;
}
