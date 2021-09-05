//PROBLEM STATEMENT:- https://practice.geeksforgeeks.org/problems/separate-chaining-in-hashing-1587115621/1/?track=DSASP-Hashing&batchId=154

class Solution{
  public:
    //Complete this function
    //Function to insert elements of array in the hashTable avoiding collisions.
    vector<vector<int>> separateChaining(int hashSize,int arr[],int sizeOfArray)
    {
       vector<vector<int>> table(hashSize);
       
       for(int i=0;i<sizeOfArray;i++){
           table[arr[i]%hashSize].push_back(arr[i]);
       }
       
       return table;
    }
};
