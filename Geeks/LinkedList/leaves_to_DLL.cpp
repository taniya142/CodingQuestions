Node * LDLL(Node *root ,Node **head){
    
    if(root==NULL)   
        return NULL;
    
    
    if(root->left==NULL && root->right==NULL){
        
        root->right=*head;
        
        if(*head!=NULL){
            (*head)->left=root;
        }
        *head=root;
        
        return NULL;
    }
    root->right=LDLL(root->right,head);
    root->left=LDLL(root->left,head);

}
Node * convertToDLL(Node *root){
    // add code here.
    Node *head=NULL;
     LDLL(root,&head);
    
    return head;
}