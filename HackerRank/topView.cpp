void topView(Node * root) {
        
        std::map<Node*, int> nodeToHdMap;
        
        if(root==nullptr){
            return;
        }
        queue<Node*> q;
        map<int,int> m;
        int hd=0;
        nodeToHdMap[root] = hd;
        // root->node=hd;
        
        q.push(root);
        
        while(q.size()){
            hd=nodeToHdMap[root];
            
            if(m.count(hd)==0){
                m[hd]=root->data;
            }
            if(root->left){
                nodeToHdMap[root->left]=hd-1;
                q.push(root->left);
            }
            if(root->right){
                nodeToHdMap[root->right]=hd+1;
                q.push(root->right);
            }
            q.pop();
            root=q.front();
        }
        
        for(auto i=m.begin();i!=m.end();i++){
            cout<<i->second<<" ";
        }
        


    }
