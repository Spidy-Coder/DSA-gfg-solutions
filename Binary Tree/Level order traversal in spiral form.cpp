vector<int> findSpiral(Node *root)
{
    queue<Node*>q;
    int level = 0;
    vector<int>v;
    if(root == NULL)return v;
    q.push(root);
    
    while(!q.empty()){
        int size = q.size();
        vector<int> vv;
        for(int i=0;i<size;i++){
            Node *curr = q.front();
            q.pop();
            vv.push_back(curr->data);
            if(curr->left != NULL) q.push(curr->left);
            if(curr->right != NULL) q.push(curr->right);
        }
        
        if(level % 2 == 0){
            reverse(vv.begin(),vv.end());
        }//for even row\
        
        for(int i=0;i<vv.size();i++){
            v.push_back(vv[i]);
        }
        level++;
    }
    
    return v;
}
