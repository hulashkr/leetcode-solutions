//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};



// } Driver Code Ends
/* Following is the Linked list node structure */

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution{ 
public:
    Node* reverseLinkedlist(Node* head)
    {
        Node* temp=NULL;
        while(head!=NULL)
        {
            Node* nxt=head;
            nxt=head->next;
            head->next=temp;
            temp=head;
            head=nxt;
        }
        return temp;
    }
    void reorderList(Node* head) {
        // Your code here
        
        //Finding the middle of the linkedlist
        Node* slow=head;
        Node* fast=head->next;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        // reversing the second half of the linkedlist
        Node* secondhalf=reverseLinkedlist(slow->next);
        slow->next=NULL;
        Node* firsthalf=head;
        
        //merging the both linkedlist
        while(secondhalf!=NULL)
        {
            Node* temp1=firsthalf->next;
            Node* temp2=secondhalf->next;
            firsthalf->next=secondhalf;
            secondhalf->next=temp1;
            firsthalf=temp1;
            secondhalf=temp2;
        }
        
    }
};

//{ Driver Code Starts.



/* Function to create a new Node with given data */
struct Node* newNode(int data) {
    struct Node* new_Node = new Node(data);
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}

void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {

        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    int t, n, m, i, x;

    cin >> t;
    while (t--) {
        struct Node* temp, *head;
        cin >> n;
        cin >> x;
        head = new Node(x);
        temp = head;
        for (i = 0; i < n - 1; i++) {
            cin >> x;
            temp->next = new Node(x);
            temp = temp->next;
        }
        
        Solution ob;
        
        ob.reorderList(head);
        printList(head);
        freeList(head);
    }
    return 0;
}

// } Driver Code Ends