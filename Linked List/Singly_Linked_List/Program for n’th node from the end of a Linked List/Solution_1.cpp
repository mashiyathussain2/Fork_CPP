```
Given a Linked List and a number n, write a function that returns the value at the n’th node from the end of the Linked List.
```


#include <bits/stdc++.h> 
using namespace std; 
struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}
void printNthFromLast(Node* head, int n){
    int len = 0, i;
    Node* temp = head;
    while (temp != NULL) {
        temp = temp->next;
        len++;
    }
    // check if value of n is not more than length of the linked list
    if (len < n)
        return;
    temp = head;
    // get the (len-n+1)th node from the beginning
    for (i = 1; i < len - n + 1; i++)
        temp = temp->next;
    cout << temp->data;
    return;
}   
int main(){
	Node *head=new Node(1);
	head->next=new Node(2);
	head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);
    head->next->next->next->next->next=new Node(6);
    head->next->next->next->next->next->next=new Node(7);
    head->next->next->next->next->next->next->next=new Node(8);
    
    printlist(head);
    printNthFromLast(head, 4);
} 

