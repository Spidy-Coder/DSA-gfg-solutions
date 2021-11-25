/*A binary tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int isBalanced1(Node *root)
    {
        if(root == NULL) return 0;
        int lh = isBalanced1(root->left);
        if(lh == -1) return -1;
        int rh = isBalanced1(root->right);
        if(rh == -1) return -1;
        if(abs(lh-rh) > 1) return -1;
        else{
            return max(lh,rh)+1;
        }
    }
    
    bool isBalanced(Node *root){
        int x = isBalanced1(root);
        if(x==-1) return false;
        else return true;
    }
    
    
};
