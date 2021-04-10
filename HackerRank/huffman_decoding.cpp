void decode_huff(node * root, string s) {
    
    node* temp=root;
    int i=0;
    for(;i<s.length();){
        while(root->left!=nullptr && root->right!=nullptr){
            if(s[i]=='0'){
                root=root->left;
                i++;
            }else{
                root=root->right;
                i++;
            }
        }
        
        if(root->left==nullptr && root->right==nullptr){
            cout<<root->data;
            // i++;
        } 
        root=temp;
        
    }
}