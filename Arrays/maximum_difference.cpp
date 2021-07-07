#include<iostream>
using namespace std;

int maxDiff(int arr[],int n){
    int res = arr[1] - arr[0];
    int minval = arr[0];
    //{1,2,3,4} -> {}
    for(int j=1;j<n;j++){
        res = max(res,arr[j] - minval);
        minval = min(minval, arr[j]);
    }

    return res;
}

//driver code

int main() {
	
      int arr[] = {2, 3, 10, 6, 4, 8, 1}, n = 7;

      cout<<maxDiff(arr, n);
    
}