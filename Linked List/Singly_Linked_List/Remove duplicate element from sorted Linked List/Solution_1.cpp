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
void removeDuplicates(Node* head){
    Node* current = head;
    /* Pointer to store the next pointer of a node to be deleted*/
    Node* next_next; 
    if (current == NULL)
    return;
    while (current->next != NULL){
    if (current->data == current->next->data){      
        next_next = current->next->next;
        free(current->next);
        current->next = next_next;
    }
    else{
        current = current->next;
    }
    }
}
int main(){
	Node *head=new Node(10);
	head->next=new Node(10);
	head->next->next=new Node(20);
    head->next->next->next=new Node(20);
    head->next->next->next->next=new Node(50);
    head->next->next->next->next->next=new Node(60);
    head->next->next->next->next->next->next=new Node(60);
    head->next->next->next->next->next->next->next=new Node(80);
    
    printlist(head);
    removeDuplicates(head);
    printlist(head);
    return 0;
}
