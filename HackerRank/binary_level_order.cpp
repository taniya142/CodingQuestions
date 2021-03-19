void levelOrder(Node * root) {

        if(root==nullptr)
            return;
       
       queue<Node* > q;
       
       q.push(root);
       
       while (q.empty()==false) {
           Node* temp=q.front();
           cout<<temp->data<<" ";
           q.pop();
           
           if(temp->left!=nullptr){
               q.push(temp->left);
           }
           if(temp->right!=nullptr){
               q.push(temp->right);
           }
       }   
    }