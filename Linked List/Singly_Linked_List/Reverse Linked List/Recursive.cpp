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

Node *recreverse(Node *head){
    // smallest ll
    if(head->next == NULL or head == NULL){
        return head;
    }
    // recursive case
    Node *shead = recreverse(head->next);
    Node *temp = head->next;
    temp->next = head;
    head->next = NULL;
    return shead;
}
int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
    cout<<"Original List"<<endl;
    printlist(head);
    head = recreverse(head);
    cout<<"Reverse List"<<endl;
	printlist(head);
	return 0;
} 
