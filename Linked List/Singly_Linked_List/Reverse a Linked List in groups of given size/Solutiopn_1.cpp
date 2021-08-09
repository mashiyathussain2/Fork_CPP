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
Node *reverse(Node *head, int k ){
    // base case
    if(head == NULL)
       return NULL;
    Node *curr = head;
    Node *next = NULL;
    Node *prev = NULL;
    int count = 0;
    while(curr != NULL && count<k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if(next != NULL)
       head->next = reverse(next,k);
    return prev;
}


int main() 
{ 
	Node *head=new Node(1);
	head->next=new Node(2);
	head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);
    head->next->next->next->next->next=new Node(6);
    head->next->next->next->next->next->next=new Node(7);
    head->next->next->next->next->next->next->next=new Node(8);
    cout<<"Original List"<<endl;
    printlist(head);
    head = reverse(head,3);
    cout<<"Reverse List"<<endl;
	printlist(head);
	return 0;
} 
