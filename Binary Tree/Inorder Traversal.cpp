/*struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; */

class Solution {
  public:
  
  void inorder(Node* root,vector<int> &v){
        if(root!=NULL){
            inorder(root->left,v);
            v.push_back(root->data);
            inorder(root->right,v);
        }
    }
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
       vector<int> v;
       inorder(root,v);
       return v;
    }
};
