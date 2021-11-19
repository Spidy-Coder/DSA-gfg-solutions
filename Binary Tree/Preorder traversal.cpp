/* A binary tree node has data, pointer to left child
   and a pointer to right child  

/*
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

//Function to return a list containing the preorder traversal of the tree.
void PREORDER(Node* root,vector<int> &v){
    if(root!=NULL){
        v.push_back(root->data);
        PREORDER(root->left,v);
        PREORDER(root->right,v);
    }
}
vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> v;
  PREORDER(root,v);
  return v;
}
