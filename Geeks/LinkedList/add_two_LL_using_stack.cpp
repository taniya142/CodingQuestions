// to add two new numbers
Node* addTwoNumList(Node* l1, Node* l2) {
    stack<int> s1,s2;
    while(l1!=NULL){
        s1.push(l1->data);
        l1=l1->next;
    }
    while(l2!=NULL){
        s2.push(l2->data);
        l2=l2->next;
    }
    int carry=0;
    Node* result=NULL;
    while(s1.empty()==false || s2.empty()==false){
        int a=0,b=0;
        if(s1.empty()==false){
            a=s1.top();s1.pop();
        }
        if(s2.empty()==false){
            b=s2.top();s2.pop();
        }
        int total=a+b+carry;
        Node* temp=new Node();
        temp->data=total%10;
        carry=total/10;
        if(result==NULL){
            result=temp;
        }else{
            temp->next=result;
            result=temp;
        }
    }
    if(carry!=0){
        Node* temp=new Node();
        temp->data=carry;
        temp->next=result;
        result=temp;
    }
    return result;
}








// ----------------------------------------------------------------------------------------------------------

// USING RECURSION

// Node* addSameSize(Node* head1, Node* head2, int* carry)
// {
//     if (head1 == NULL)
//         return NULL;
 
//     int sum;
 
    
//     Node* result=new Node(0);
 
    
//     result->next= addSameSize(head1->next, head2->next, carry);
 
  
//     sum = head1->data + head2->data + *carry;
//     *carry = sum / 10;
//     sum = sum % 10;
 
    
//     result->data = sum;
 
//     return result;
// }

// void addCarryToRemaining(Node* head1, Node* cur, int* carry,
//                          Node** result)
// {
//     int sum;
 
    
//     if (head1 != cur) {
//         addCarryToRemaining(head1->next, cur, carry,
//                             result);
 
//         sum = head1->data + *carry;
//         *carry = sum / 10;
//         sum %= 10;
 
        
//         push(result, sum);
//     }
// }
 

 
