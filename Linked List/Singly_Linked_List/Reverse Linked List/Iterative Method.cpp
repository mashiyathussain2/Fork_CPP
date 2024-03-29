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
Node *reverse(Node *head){
    Node *curr = head;
    Node *prev = NULL;
    while(curr != NULL){
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
    cout<<"Original List"<<endl;
    printlist(head);
    head = reverse(head);
    cout<<"Reverse List"<<endl;
	printlist(head);
	//cout<<"Position of element in Linked List: "<<search(head,20);
	return 0;
} 
