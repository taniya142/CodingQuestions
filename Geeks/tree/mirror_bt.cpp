class Solution{
    public:
    void mirror(Node* node)
    {
     // code here
     if(node==NULL){
         return;
     }
     
     struct Node* temp;
     mirror(node->left);
     mirror(node->right);
     
     temp=node->left;
     node->left=node->right;
     node->right=temp;
     
    }
};