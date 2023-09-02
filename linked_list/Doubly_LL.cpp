#include<iostream>
#include<math.h>
#include<vector>
#include <iomanip>
#include <cctype>
#include <algorithm>
#include<string>
using namespace std;


//Doubly linked list


//insert at head.

// class Node{
//     public:

//     int data;
//     Node* next;
//     Node* prev;

//     Node(int data){
//         this -> data=data;
//         this -> next=NULL;
//         this -> prev=NULL;
//     }
// };
// void print(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int length(Node* &head){
//     Node* temp=head;
//     int len=0;
//     while(temp!=NULL){
//         len++;
//         temp=temp->next;
//     }
//     return len;
// }
// Node* insertHead(Node* &head,int d){

//     Node* temp=new Node(d);
//     temp->next=head;
//     head->prev=temp;
//     head=temp;
// }
// int main(){

//     Node* node1=new Node(10);
//     Node* head = node1;

//     // print(head);
//     // cout<<length(head);

//     insertHead(head,12);
//     print(head);
//     // cout<<length(head);
// }


//insert at tail.
// class Node{
//     public:

//     int data;
//     Node* next;
//     Node* prev;

//     Node(int data){
//         this -> data=data;
//         this -> next=NULL;
//         this -> prev=NULL;
//     }
// };
// void print(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int length(Node* &head){
//     Node* temp=head;
//     int len=0;
//     while(temp!=NULL){
//         len++;
//         temp=temp->next;
//     }
//     return len;
// }
// Node* insertTail(Node* &tail,int d){

//     Node* temp=new Node(d);
//     tail->next=temp;
//     temp->prev=tail;
//     tail=temp;

// }
// int main(){

//     Node* node1=new Node(10);
//     Node* head = node1;
//     Node* tail = node1;

//     // print(head);
//     // cout<<length(head);

//     insertTail(tail,12);
//     insertTail(tail,14);
//     print(head);
//     // cout<<length(head);
// }



//insert at position.
// class Node{
//     public:

//     int data;
//     Node* next;
//     Node* prev;

//     Node(int data){
//         this -> data=data;
//         this -> next=NULL;
//         this -> prev=NULL;
//     }
// };
// void print(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int length(Node* &head){
//     Node* temp=head;
//     int len=0;
//     while(temp!=NULL){
//         len++;
//         temp=temp->next;
//     }
//     return len;
// }
// void insertHead(Node* &head,int d){

//     Node* temp=new Node(d);
//     temp->next=head;
//     head->prev=temp;
//     head=temp;
// }
// void insertTail(Node* &tail,int d){

//     Node* temp=new Node(d);
//     tail->next=temp;
//     temp->prev=tail;
//     tail=temp;
// }
// void insertAtPosition(Node* &head,Node* &tail,int d,int pos){

//     if(pos==1){
//         insertHead(head,d);  //to insert in postion 1, call function.
//         return;
//     }
//     Node* temp=head;
//     int cnt=1;
//     while(cnt<pos-1){
//         temp=temp->next;
//         cnt++;
//     }
//     if(temp -> next==NULL){
//         insertTail(tail,d);
//         return;
//     }
//     Node* nodetoinsert=new Node(d);

//     nodetoinsert->next=temp->next;
//     temp->next->prev=nodetoinsert;
//     temp->next=nodetoinsert;
//     nodetoinsert->prev=temp;
// }
// int main(){

//     Node* node1=new Node(10);
//     Node* head = node1;
//     Node* tail = node1;

//     // print(head);
//     // cout<<length(head);

//     insertTail(tail,12);
//     insertTail(tail,14);
//     //print(head);
//     // cout<<length(head);

//     insertAtPosition(head,tail,13,4);
//     print(head);
// }


//deletion in DLL.
class Node{
    public:

    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this -> data=data;
        this -> next=NULL;
        this -> prev=NULL;
    }
};
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int length(Node* &head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
void insertHead(Node* &head,int d){

    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertTail(Node* &tail,int d){

    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void insertAtPosition(Node* &head,Node* &tail,int d,int pos){

    if(pos==1){
        insertHead(head,d);  //to insert in postion 1, call function.
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    if(temp -> next==NULL){
        insertTail(tail,d);
        return;
    }
    Node* nodetoinsert=new Node(d);

    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;
}
void deletenode(Node* &head,int pos){
    if(pos==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* Prev = NULL;
        int cnt=1;

        while(cnt<pos){
            Prev=curr;
            curr=curr -> next;
            cnt++;
        }
        //for deletion.
        curr->prev=NULL;
        Prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int main(){

    Node* node1=new Node(10);
    Node* head = node1;
    Node* tail = node1;

    // print(head);
    // cout<<length(head);

    insertTail(tail,12);
    insertTail(tail,14);
    insertTail(tail,15);
    insertTail(tail,16);
    //print(head);
    // cout<<length(head);

    deletenode(head,4);
    print(head);
}