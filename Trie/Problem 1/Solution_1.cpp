#include<iostream>
#include<unordered_map>
using namespace std;

class node{
public:
    char data;
    bool terminal;
    int cnt;
    unordered_map<char,node*>children;

    node(char data){

        this->data=data;
        this->terminal=false;
        this->cnt=0;
    }

};

class tries{

public :
    node *root;

    tries(){

        this->root=new node('\0');
    }
    void addword(string str){

        node *temp=root;
        for(int i=0;i<str.length();i++){

            char ch=str[i];
            if(temp->children[ch] != NULL){
                temp=temp->children[ch];
                temp->cnt = temp->cnt + 1;
            }
            else{
                node *newnode=new node(ch);
                temp->children[ch]=newnode;
                temp=newnode;
                temp->cnt=temp->cnt+1;
            }
        }
        temp->terminal=true;
    }

};

string prefix(string x, tries* t) {
    int i = 0;
    node* root = t->root;
    int length = x.length();
    string ans = "";
    while(i != length) {
        if((root->children[x[i]])->cnt == 1) {
            ans = ans + x[i];
            return ans;
        } else {
            ans = ans + x[i];
            root = root->children[x[i]];
        }
        i++;
    }

    ans = "-1";
    return ans;
}

int main(){

tries *t=new tries();

string arr[]={"zebra","dog","dove","duck","zebras"};
for(int i=0;i<5;i++){
    t->addword(arr[i]);
}
for(int i  = 0; i < 5; i++) {
    cout << prefix(arr[i], t) << endl;
}
return 0;
}
