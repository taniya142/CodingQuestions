vector<int> inOrder(Node* root)
{
    //code here
     
    if(root == NULL)
  {
      vector<int> v;
      return v;
  }
        
        
   
    stack<Node*> s;
    
    vector<int> v;
    Node* temp=root;
    
    
    while(temp!=NULL || s.empty()==false){
        
        while(temp!=NULL){
            s.push(temp);
            temp=temp->left;
        }
         temp=s.top();
        s.pop();
       
        v.push_back(temp->data);
        
        temp=temp->right;
    }
    
    
    return v;
    

}