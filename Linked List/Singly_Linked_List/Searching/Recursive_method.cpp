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

int search(Node * head, int x){
    if(head==NULL)return -1;
    if(head->data==x)return 1;
    else{
        int res=search(head->next,x);
        if(res==-1)return -1;
        else return res+1;
    }
}

int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	printlist(head);
	cout<<"Position of element in Linked List: "<<search(head,20);
	return 0;
} 
