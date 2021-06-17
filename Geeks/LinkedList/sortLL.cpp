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

#include<vector>
#include<algorithm>

class Solution{
  public:
    //Function to sortLL the given linked list using Merge sortLL.
    Node* sortLL(Node* head) {
        // your code here
        
        Node* temp=head;
        vector<int> v;
        
        while(temp!=NULL){
            v.push_back(temp->data);
            temp=temp->next;
        }
        
        temp=head;
        
        sortLL(v.begin(),v.end());
        
       int i=0;
        
        while(temp!=nullptr){
            temp->data = v.at(i++);
            temp =temp->next;
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
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.sortLL(a);
        printList(a);
    }
    return 0;
}  // } Driver Code Ends