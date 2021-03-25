int evalTree(node* root) {
    // Your code here
    
    if(root==NULL)
        return 0;
        
    if(!root->left && !root->right){
        return stoi(root->data);
    }
    
    int lnode=evalTree(root->left);
    int rnode=evalTree(root->right);
    
    if(root->data=="+")
        return lnode + rnode;
        
    if(root->data=="-")
        return lnode - rnode;    
    if(root->data=="*")
        return lnode * rnode;
    
        return lnode / rnode;
    
    
}