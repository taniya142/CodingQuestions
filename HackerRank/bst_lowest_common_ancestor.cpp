Node *lca(Node *root, int v1,int v2) {
		// Write your code here.
        
        if(v1>v2){
            swap(v1,v2);
        }
        if(root->data==v1 || root->data==v2){
                return root;
        }
        
        if(v1< root->data && v2 > root->data ){
            return root;
        }else if(v1< root->data && v2<root->data){
            root=root->left;
            return lca(root,v1,v2);
        }else{
            root=root->right;
            return lca(root,v1,v2);
        }
        
        return root;
        
    }
