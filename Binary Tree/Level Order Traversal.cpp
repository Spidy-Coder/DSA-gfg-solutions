        queue<TreeNode*>q;
        vector<vector<int>>ans;
        vector<int>v;
        if(root==NULL)
            return {};
        q.push(root);
        q.push(NULL);
        while(!q.empty() && q.front()!=NULL){
            TreeNode*node=q.front();
            q.pop();
            v.push_back(node->val);
           
            if(node->left!=NULL)
                q.push(node->left);
            
            if(node->right!=NULL)
                q.push(node->right);
            if(q.front()==NULL){
                 ans.push_back(v);
                v.clear();
                q.pop();
                q.push(NULL);
            }
        }
        
        return ans;
