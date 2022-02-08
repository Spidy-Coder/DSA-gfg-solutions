Node* insert(Node* root, int k) {
    
    if(root == NULL)
        return new Node(k);
        
    if(root->data == k)
        return root;
        
    else if(k < root->data){
        root->left = insert(root->left,k);
    }
    
    else{
        root->right = insert(root->right,k);
    }
    
    return root;
}
