void sortList(Node** head)
{
    // Your Code Here
    Node *prev=(*head);
    Node *temp=(*head)->next;
    
    while(temp!=NULL){
        if(temp->data<prev->data){
            prev->next=temp->next;
            temp->next=(*head);
            (*head)=temp;
            
            temp=prev;
        }
        else{
            prev=temp;
        }
        temp=temp->next;
    }
}