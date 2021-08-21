class Solution
{
  public:
      //Function to count the number of possible triangles.
      int findNumberOfTriangles(int arr[], int n)
      {
          sort(arr,arr+n);
          int count = 0;
          for(int i=n-1;i>=1;i--){
              int l=0,r=i-1;
              while(l<r){
                  if(arr[l] + arr[r] > arr[i]){
                      count += r-l;
                      r--;
                  }
                  else{
                      l++;
                  }
              }
          }
          return count;
      }
};
