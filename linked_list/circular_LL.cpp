#include<iostream>
#include<math.h>
#include<vector>
#include <iomanip>
#include <cctype>
#include <algorithm>
#include<string>
using namespace std;


// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// void print(Node* &tail){
//     Node* temp=tail;
//     do{
//         cout<<tail->data<<" ";
//         tail=tail->next;
//     }
//     while(tail!=temp);
// }
// void inserttail(Node* &tail,int d){
//     Node* temp=new Node(d);
//     tail->next=temp;
//     temp->next=tail;
//     tail=temp;
// }
// int main(){

//     Node* node1=new Node(10);
//     Node* head=node1;
//     Node* tail=node1;

//     inserttail(tail,12);
//     print(head);
// }


//insert or create new node.
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print(Node* tail){
    Node* temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail->data!=temp->data);
    cout<<endl;
}
void insertnode(Node* &tail,int element,int d){

    if(tail==NULL){
        Node* newnode=new Node(d);
        tail=newnode;
        newnode->next=newnode;
    }
    else{
        Node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}
void deletenode(Node* &tail,int value){
    if(tail==NULL){
        cout<<"No node exist"<<endl;
    }
    else{
        //Node* temp=tail;
        Node* prev=tail;
        Node* curr=prev->next;              //tail is on first node and prev is on tail 
        while(curr->data!=value){           //but curr is on tail->next node.(curr aage,prev peeche)
            curr=curr->next;
            prev=curr;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

    }
}
int main(){

    // Node* node1=new Node(10);
    // Node* head=node1;
    // Node* tail=node1;

    Node* tail=NULL;
    insertnode(tail,4,10);
    //print(tail);

    insertnode(tail,10,20);
    insertnode(tail,20,30);
    insertnode(tail,30,40);
    print(tail);

    deletenode(tail,30);
    print(tail);


}