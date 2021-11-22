//URL:- https://practice.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1/?track=DSASP-Tree&batchId=154#

class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        if(r1 == NULL && r2 == NULL) return true;
        
        else if(r1 == NULL || r2 == NULL) return false;
        
        if(r1->data != r2->data) return false;
        
        bool c1 = isIdentical(r1->left,r2->left);
        bool c2 = isIdentical(r1->right,r2->right);
        
        return (c1 && c2);
    }
};
