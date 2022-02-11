Node *getSuccess(Node *root){
    Node *curr = root->right;
    while(curr != NULL && curr->left != NULL){
        curr = curr->left;
    }
    return curr;
}

Node *deleteNode(Node *root, int x) {
    if(root == NULL){
        return root;
    }
    if(root->data > x){
        root->left = deleteNode(root->left, x);
    }
    else if(root->data < x){
        root->right = deleteNode(root->right, x);
    }
    else{
        if(root->left == NULL){
            Node *curr = root->right;
            delete root;
            return curr;
        }
        else if(root->right == NULL){
            Node *curr = root->left;
            delete root;
            return curr;
        }
        else{
            Node *curr = getSuccess(root);
            root->data = curr->data;
            root->right = deleteNode(root->right, curr->data);
        }
    }
}
