class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        if(m==0 or n==0){
            return {};
        }


        vector<int>ans;
        
        bool up=true;
        int r=0,c=0;
        while(r<m and c<n){
            // if diagonaly up row-- and col++;
            if(up){
                while(r>0 and c<n-1){
                    ans.push_back(mat[r][c]);
                    r--;c++;
                }
                
                ans.push_back(mat[r][c]);
                if(c==n-1){
                    r++;
                }else{
                    c++;
                }
                
            }else{
                    while(c>0 and r<m-1){
                    ans.push_back(mat[r][c]);
                    r++;c--;
                    }
                
                ans.push_back(mat[r][c]);
                if(r==m-1){
                    c++;
                }else{
                    r++;
                }
            }
            up=!up;
        }
        return ans;
    }
};
