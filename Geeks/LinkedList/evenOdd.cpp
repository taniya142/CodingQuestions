// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 

class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node* temp=head;
        
        Node* odd=NULL;
        Node* even=NULL;
        Node* e=NULL;
        Node* o=NULL;
        
        while(temp!=NULL){
            if(temp->data % 2 ==0){
                if(even==NULL){
                    even=temp;
                    e=even;
                }
                else{
                    even->next=temp;
                    even=even->next;
                }
                
            }
            else{
                if(odd==NULL){
                    odd=temp;
                    o=odd;
                }
                else{
                    odd->next=temp;
                    odd=odd->next;
                }
            }
            temp=temp->next;
        }
        while(e->next!=NULL){
            e=e->next;
        }
        e->next=o;
        
        return e;
        
        
    }
};

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}