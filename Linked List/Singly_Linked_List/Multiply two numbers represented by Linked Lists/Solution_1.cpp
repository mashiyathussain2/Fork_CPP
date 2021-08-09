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
long long multiplyTwoLists (Node* first, Node* second){
	long long N= 1000000007;
	long long num1 = 0, num2 = 0;
	while (first || second){
		if(first){
			num1 = ((num1)*10)%N + first->data;
			first = first->next;
		}
		if(second){
			num2 = ((num2)*10)%N + second->data;
			second = second->next;
		}
	}
	return ((num1%N)*(num2%N))%N;
}
int main(){
	Node *first=new Node(3);
	first->next=new Node(2);
	first->next->next=new Node(1);
    //first->next->next->next=new Node(4);
    //first->next->next->next->next=new Node(5);
    //first->next->next->next->next->next=new Node(6);
    //first->next->next->next->next->next->next=new Node(7);
   // first->next->next->next->next->next->next->next=new Node(8);

    Node *second=new Node(1);
	second->next=new Node(2);
	//second->next->next=new Node(3);
   // second->next->next->next=new Node(4);
  //  second->next->next->next->next=new Node(5);
   // second->next->next->next->next->next=new Node(6);
  //  second->next->next->next->next->next->next=new Node(7);
   // second->next->next->next->next->next->next->next=new Node(8);
    
    printlist(first);
    printList(second);
    cout<<multiplyTwoLists(first,second);
    
}
