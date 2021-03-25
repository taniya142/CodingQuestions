bool cmpNode(Node* a,Node* b){
    if(a->data <= b->data){
        return true;
    }
    return false;
}
vector<Node*> v;

void traverse(Node* root){
     if(root==NULL)
        return;
    traverse(root->left);
    v.push_back(root);
    traverse(root->right);
}

Node* modify(Node *root)
{
    // Your code here
    traverse(root);
    
    // for(auto i= v.size()-1;i>=0;i--){
    //     cout<<v[i]->data;
    // }
    
    for(int i= v.size()-2;i>=0;i--){
        v[i]->data+=v[i+1]->data;
    }
    
    return root;
   
}