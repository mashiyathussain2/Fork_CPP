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
void printlist(Node *first){
    Node *curr=first;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}
void printList(Node *second){
    Node *curr=second;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}
Node *merge(Node *first, Node *second){
    if(first == NULL){
        return second;
    }
    if(second == NULL){
        return first;
    }
    Node *c;
    if(first->data < second->data){
        c= first;
        c->next = merge(first->next,second);
    }
    else {
        c = second;
        c->next = merge(second->next, first);
    }
    return c;
}

int main(){
	Node *first=new Node(10);
	first->next=new Node(20);
	first->next->next=new Node(30);


    Node *second=new Node(5);
	second->next=new Node(35);

    
    printlist(first);
    printList(second);
    printlist(merge(first,second));
    return 0;
}
