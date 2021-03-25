class Solution{
  public:
  
  void cdll(Node *root,Node **head){
      static Node* prev=NULL;
       
      if (!root) 
        return;
        
        cdll(root->left,head);
        
        if(!(*head)){
            *head=root;
        }
            
        else{
            root->left=prev;
            prev->right=root;
        }
        prev=root;
        
        cdll(root->right,head);
        
  }
 
 
    Node *bTreeToCList(Node *root)
    {
    //add code here.
    
    Node *head=NULL;
    cdll(root,&head);
    
    Node *temp=head;
    while(temp->right){
        temp=temp->right;
    }
    temp->right=head;
    head->left=temp;
    
    return head;
    }
};