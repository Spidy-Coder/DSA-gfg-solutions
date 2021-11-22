/* A binary tree Node

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

//Function to return the level order traversal line by line of a tree.
vector<vector<int>> levelOrder(Node* node)
{
  vector<vector<int>> ans;
  queue<Node*> q;
  q.push(node);
  while(q.empty() == false){
      int count = q.size();
      vector<int>v;
      for(int i=0;i<count;i++){
        Node *curr = q.front();
        q.pop();
        v.push_back(curr->data);
        if(curr->left != NULL) q.push(curr->left);
        if(curr->right != NULL) q.push(curr->right);
      }
      
      ans.push_back(v);
  }
  
  return ans;
}


