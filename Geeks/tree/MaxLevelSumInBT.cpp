class Solution{
  public:
    /*You are required to complete below method */
    
    int maxLevelSum(Node* root) {
        // Your code here
        if(root==NULL)
        return 0;
        queue<Node*> q;
        q.push(root);
        
        int result=root->data;
        
        while(!q.empty()){
            int count=q.size();
            int sum=0;
            
            while(count--){
                Node* temp=q.front();
                q.pop();
                
                sum+=temp->data;
                
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
            }
            
            result=max(sum,result);
        }
        
        return result;
    }
};