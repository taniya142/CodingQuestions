int getCount(Node *head){
    Node *temp=head;
    int c=0;
    
    while(temp!=NULL){
        c++;
        temp=temp->next;
    }
    return c;
}
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    if(head1==NULL || head2==NULL)
    {
        return -1;
    }
    Node *temp1=head1;
    Node *temp2 =head2;
    
    int c1=getCount(temp1);
    int c2=getCount(temp2);

    int diff = abs(c1-c2);
    
    temp1=head1;
    temp2=head2;
    
    for(int i=0;i<diff;i++){
        if(c1>c2){
            temp1=temp1->next;
        }else{
            temp2=temp2->next;
        }
    }
    while(temp1!=NULL && temp2!=NULL){
            if(temp1 == temp2){
                return temp1->data;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
    return -1;
}

