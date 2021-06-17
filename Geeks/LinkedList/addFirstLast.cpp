#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

#include<stack>
#include<algorithm>

class Solution{
  public:
    
    Node* addFirstLast(Node* head) {
        // your code here
        
        Node* temp=head;
        stack<int> s;

        while(temp!=NULL){
            s.push(temp->data);

            temp=temp->next;
        }
        temp=head;
        int n=s.size();
        
        for(int i=0;i<n;i++){
            if(n%2!=0 && i==n/2){
                s.pop();
                temp=temp->next;
            }
            else{
                int top=s.top();
                s.pop();

                temp->data=temp->data + top;

                temp=temp->next;
            }
        }
        
        return head;
    }
};



// { Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.addFirstLast(a);
        printList(a);
    
    return 0;
}  // } Driver Code Ends