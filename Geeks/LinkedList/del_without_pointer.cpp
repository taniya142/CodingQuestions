class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       // Your code here
       Node *current=del;
       
       
       if(current->next==NULL){
           current=NULL;
       }else{
           current->data=current->next->data;
           current->next=current->next->next;
       }
    }
        

};