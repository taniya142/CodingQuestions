vector<int> preOrder(Node* root)
{
    //code here
     
    if(root == NULL)
  {
      vector<int> v;
      return v;
  }
        
        
   
    stack<Node*> s;
    s.push(root);
    
    vector<int> v;
    Node* temp=NULL;
    
    
    while(!s.empty()){
        temp=s.top();
        s.pop();
        v.push_back(temp->data);
        
        if(temp->right!=NULL){
            s.push(temp->right);
        }
        if(temp->left!=NULL){
            s.push(temp->left);
        }
        
    }
    
    
    return v;
    
}