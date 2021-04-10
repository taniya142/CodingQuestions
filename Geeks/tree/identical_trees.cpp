class Solution
{
    public:
    bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
        
        if(r1==NULL && r2==NULL)
            return true;
        
        if(r1==NULL || r2==NULL)
            return false;
        
        queue<Node*> q1;
        queue<Node*> q2;
        
        q1.push(r1);
        q2.push(r2);
        
        while(!q1.empty() && !q2.empty()){
            Node* temp1=q1.front();
            Node* temp2 =q2.front();
            
            
            if(temp1->data!=temp2->data){
                return false;
            }
            q1.pop();
            q2.pop();
            
            if(temp1->left && temp2->left){
                q1.push(temp1->left);
                q2.push(temp2->left);
            }
            else if(temp1->left || temp2->left){
                return false;
            }
            
                
            if(temp1->right && temp2->right){
                q1.push(temp1->right);
                q2.push(temp1->right);
            }
            else if(temp1->right || temp2->right){
                return false;
            }
        }
        
        return true;
        
    }
};