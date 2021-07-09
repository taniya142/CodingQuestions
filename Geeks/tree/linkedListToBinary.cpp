TreeNode* newBinaryTree(int x){
    TreeNode *temp= new TreeNode(x);
    // temp->data = x;
    // temp->left = temp->right = NULL;
    return temp;
}
void convert(Node *head, TreeNode *&root) {
    // Your code here
    if(head==NULL){
        root=NULL;
        return;
    }
    queue<TreeNode*> q;
    
    // TreeNode *temp=head;
    root=newBinaryTree(head->data);
    q.push(root);
    
    head=head->next;
    
    while(head){
        TreeNode* mainRoot=q.front();
        q.pop();
        
        TreeNode* leftC=NULL;
        TreeNode* rightC=NULL;
        
        leftC=newBinaryTree(head->data);
        q.push(leftC);
        head=head->next;
        
        if(head){
            rightC=newBinaryTree(head->data);
            q.push(rightC);
            head=head->next;
        }
        
        mainRoot->left=leftC;
        mainRoot->right=rightC;
    }
    
    
}
