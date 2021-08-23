class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        
        
        int diagonal=0,lower=0,upper=0;
        int p1,p2;
        vector<int> result;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i == j){
                    diagonal += matrix[i][j];
                   
                }
                else if(i > j){
                    upper += matrix[i][j];
                    
                }
                else{
                    lower += matrix[i][j];
                    
                }
            
        }
    
    }
    
    p1 = diagonal + upper;
    p2 = diagonal + lower;
    result.push_back(p2);
    result.push_back(p1);
    return result;
    }
};
