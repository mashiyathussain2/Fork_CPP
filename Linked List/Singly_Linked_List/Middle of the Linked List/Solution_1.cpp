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
void printMiddle(Node *head){
    Node *slow = head;
    Node *fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<(slow->data)<<endl;
}
int main(){
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
  head->next->next->next=new Node(4);
  head->next->next->next->next=new Node(5);
  head->next->next->next->next->next=new Node(6);
  head->next->next->next->next->next->next=new Node(7);
  head->next->next->next->next->next->next->next=new Node(8);

    
    printlist(head);
    printMiddle(head);
    return 0;
}
