class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
        int count = 0;
     
    unordered_set<int> us;
     
    // insert all the elements of 1st list
    // in the hash table(unordered_set 'us')
    while (head1 != NULL)
    {
        us.insert(head1->data);   
         
        // move to next node   
        head1 = head1->next;
    }
     
    // for each element of 2nd list
    while (head2 != NULL)   
    {
        // find (x - head2->data) in 'us'
        if (us.find(x - head2->data) != us.end())
            count++;
         
        // move to next node
        head2 = head2->next;   
    }
    // required count of pairs    
    return count;
    
    // COMPLEXITY(O(n2)
    // int c=0;
    // struct Node* start1=head1;
    // struct Node* start2=head2;
        
    //     while(start1!=NULL){
    //         start2=head2;
    //         while(start2!=NULL){
    //             if(start1->data + start2->data ==x){
    //                 c++;
    //             }
    //             start2=start2->next;
    //         }
    //         start1=start1->next;
    //     }
    //     return c;
    }
    
};