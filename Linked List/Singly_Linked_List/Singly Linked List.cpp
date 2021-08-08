#include<iostream>
using namespace std;

// implementation
struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;        
    }
};
// insert at begin
Node *insertAtBegin(Node *head, int x){
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}
// insert at end
Node *insertAtend(Node *head, int x){
    Node *temp = new Node(x);
    if(head == NULL){
        return temp;
    }
    Node *curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}
// delete the head
Node *deleteTheHead(Node *head){
    if(head==NULL){
        return NULL;
    }
    Node *temp = head->next;
    delete head;
    return temp;
}
// delete the last node
Node *deleteTheLastNode(Node *head){
    if(head== NULL){
        return NULL;
    }
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    Node *curr = head;
    while(curr->next->next != NULL){
        curr = curr->next;
    }
    delete curr->next;
    curr->next =NULL;
    return head;
}
// insert at given position
Node *insertAtGivenposition(Node *head, int pos, int data){
    Node *temp = new Node(data);
    if(pos == 1){
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    for(int i = 1; i<= pos-2 && curr !=NULL;i++){
        curr = curr->next;
    }
    if(curr == NULL){
        return head;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}
// print the node
void printlist(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout<<(curr->data)<<" ";
        curr = curr->next;
    }
}
int main(){
    Node *head = NULL;
    head = insertAtBegin(head,10);
    head = insertAtBegin(head,20);
    head = insertAtBegin(head,30);
    head = insertAtend(head,60);
    head = insertAtGivenposition(head,2,22);
    printlist(head);

    return 0;
}
