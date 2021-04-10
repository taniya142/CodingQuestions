vector<int> postOrder(Node* root) {
    // code here
     if(root == NULL)
  {
      vector<int> v;
      return v;
  }
    stack<Node*> s1,s2;
    s1.push(root);
    
    vector<int> v;
    Node* temp;
    
    
    while( s1.empty()==false){
        
            temp=s1.top();
            s1.pop();
            s2.push(temp);
        
        if(temp->left){
           s1.push(temp->left);
        }
        
        if(temp->right){
           s1.push(temp->right); 
        }
    }
    
    while(!s2.empty()){
        temp=s2.top();
        s2.pop();
        v.push_back(temp->data);
    }
    
    
    return v;
}