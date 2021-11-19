//PRO TIP:- DO ITERATIVE SOLUTION AS WELL

//User function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

void post(Node *root,vector<int>&v){
   if(root!=NULL){
       post(root->left,v);
       post(root->right,v);
       v.push_back(root->data);
   }
}
//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root)
{
  vector<int>v;
 post(root,v);
 return v;
}
