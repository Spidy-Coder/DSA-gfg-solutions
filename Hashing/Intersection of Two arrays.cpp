//PROBLEM STATEMENT URL:- https://practice.geeksforgeeks.org/problems/intersection-of-two-arrays2404/1/?track=DSASP-Hashing&batchId=154

class Solution {
  public:
    
    // Approach:- 
    // 1. Using unordered_set which inserts distinct elements of an array. Here a[]
    // 2. Tranverse through b[] and find elements in set a[].
    // 3. Erase that element from set a[] so that duplicate elements in b[] will not get counted.
    
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        //efficient approach
        int res = 0;
        unordered_set<int> s(a,a+n);
        for(int i=0;i<m;i++){
            if(s.find(b[i]) != s.end()){
                res++;
                s.erase(b[i]);
            }
        }
        
        return res;
    }
};

