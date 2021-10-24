/*
    Serialize and deserialize binary tree;
*/


#include<iostream>
#include<vector>
using namespace std;

class node{
    public:
        int data;
        node *left , *right;
        node(int d):data(d),left(NULL),right(NULL){
        }
};

class solution{
    public:

        node* make_btree(const vector<int> &vr, int n);
        
        void srlz(vector<int> &vr , node* root); // makes vector from binary tree

        node* dsrlz(const vector<int> &vr ,int &i , const int n); // makes binary tree from vector

        void inorder(node* root);

};

int main(){

    node* root;
    

    vector<int> vr;

    root = new node(10);
    root->left = new node(20);
    root->right = new node(30);

    root->left->left = new node(40);
    
    root->right->left = new node(50);

    solution sl;

    sl.inorder(root);
    
    cout<<endl;

    sl.srlz(vr , root);
    int i=0;
    node* clone = sl.dsrlz(vr, i, vr.size());
    
    sl.inorder(clone);

    return 0;
}

void solution::srlz(vector<int> &vr , node* root){

        if(root == NULL){
            vr.push_back(-1);
            return ;
        }

        vr.push_back(root->data);

        srlz(vr, root->left);

        srlz(vr,root->right); 

}

node* solution::dsrlz(const vector<int> &vr,int &i ,const int n){

    if( i == n || vr[i] == -1){
        return NULL;
    }

    node* root = new node(vr[i]);

    root->left = dsrlz(vr, ++i, n);

    root->right = dsrlz(vr, ++i ,n);

    return root;

}

void solution::inorder(node* root){

    if(root == NULL){
        return ;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

    return ;

}
