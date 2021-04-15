struct node*update(struct node*start,int p)
{
    //Add your code here
    
    node *prev_start=start;
    node *temp=start;
    for(int i=1;i<p;i++){
        temp=temp->next;
    }
            
    temp->next->prev=NULL;
    start=temp->next;
    temp->next=NULL;
    
    temp=start;
    
    while(temp->next!=NULL){
        temp=temp->next;
    }
    prev_start->prev=temp;
    temp->next=prev_start;
    
    return start;
}