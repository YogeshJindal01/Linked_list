#include<iostream>
#include<math.h>
#include<vector>
#include <iomanip>
#include <cctype>
#include <algorithm>
#include<string>
using namespace std;

// struct linkedlist{

//     int data;
//     struct linkedlist* next;
// };
// linkedlist* insert(linkedlist* head,int data){

//     linkedlist* temp=new linkedlist;
//     temp -> data=data;
//     temp -> next=NULL;
//     if(head==NULL){
//         head=temp;
//     }
//     else{
//         temp->next=head;
//         head=temp;
//     }
//     return temp;
// }
// linkedlist* Attail(linkedlist* head,int data){

//     linkedlist* temp=new linkedlist;
//     temp -> data=data;
//     temp -> next=NULL;
//     if(head==NULL){
//         head=temp;
//     }
//     else{
//         linkedlist* last=head;
//         while(last->next!=NULL){
//             last -> next=temp;
//             last=last->next;
//             //last -> next=temp;

//             //head=temp;
//         }
//         //last=last->next;
//         //last -> next=temp;
//     }
//     return temp;
// }
// void display(linkedlist* head){
//     linkedlist* temp=head;
//     while(temp!=NULL){
//         cout<<temp-> data<<" ";
//         temp=temp->next;
//     }
// }
// int main(){
//     linkedlist* head;
//     //linkedlist* tail;
//     head=NULL;

//     // head=insert(head,10);
//     // head=insert(head,20);
//     head=Attail(head,10);
//     head=Attail(head,20);

//     display(head);

// }


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
// Node* insert(Node* &tail,int d){

//     Node* temp=new Node(d);
//     tail -> next=temp;
//     temp -> prev=tail;
//     tail=temp;
// }
// void print(Node* &head){
//     Node* temp=head;
//     while(temp != NULL){
//         cout<< temp -> data <<" ";        
//         temp=temp -> prev;
//     }
// }
// int main(){
//     Node* node1=new Node(10);
//     Node* head=node1;
//     Node* tail=node1;

//     insert(tail,12);
//     insert(tail,15);
//     print(head);

// }



//search an element from linked list.
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this -> data=data;
//         this -> next=NULL;
//     }
// };
// void inserttail(Node* &tail,int d){
//     Node* temp=new Node(d);
//     tail -> next=temp;
//     tail = temp;
// }
// void print(Node* &tail){
//     Node* temp=tail;
//     int count=0;
//     while(temp != NULL){
//         cout<< temp -> data <<" ";
//         count++;                    //to print length of list. 
//         temp=temp -> next;
//     }
//     cout<<endl;
//     cout<<count;
// }
// int search_element(Node* &head,int value){
//     Node* temp=head;
//     bool found;
//     while(temp!=NULL){
//         if(temp->data==value){
//             found=true;
//             //cout<<"yes present";
//             break;
//         }
//         else{
//             temp=temp->next;
//         }
//     }
//     if(found==true){
//         cout<<"yes present"<<endl;
//     }
//     else{
//         cout<<"not found"<<endl;
//     }
// }
// int main(){

//     Node* node1=new Node(10);
//     //cout<<node1 -> data <<endl;
//     //cout<<node1 -> next <<endl;

//     Node* tail=node1;
//     Node* head=node1;


//     inserttail(tail,12);
//     inserttail(tail,13);
//     inserttail(tail,14);
//     //print(head);
//     (search_element(head,33));
// }


// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this -> data=data;
//         this -> next=NULL;
//     }
// };
// void inserttail(Node* &tail,int d){
//     Node* temp=new Node(d);
//     tail -> next=temp;
//     tail = temp;
// }
// void print(Node* &tail){
//     Node* temp=tail;
//     int count=0;
//     while(temp != NULL){
//         cout<< temp -> data <<" ";
//         count++;                    //to print length of list. 
//         temp=temp -> next;
//     }
//     cout<<endl;
//     //cout<<count;
// }
// Node* reverse(Node* &head){
//     if(head==NULL || head->next==NULL){
//         return head;
//     }
//     Node* curr=head;
//     Node* prev=NULL;
//     Node* forward=NULL;
//     while(curr!=NULL){
//         forward=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=forward;
//     }
//     head=prev;
//     return head;
// }
// int main(){

//     Node* node1=new Node(10);
//     //cout<<node1 -> data <<endl;
//     //cout<<node1 -> next <<endl;

//     Node* tail=node1;
//     Node* head=node1;


//     inserttail(tail,12);
//     inserttail(tail,13);
//     inserttail(tail,14);
//     //print(head);

//     reverse(head);
//     print(head);

// }

//delete node with given value.
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this -> data=data;
//         this -> next=NULL;
//     }
// };
// void inserttail(Node* &tail,int d){
//     Node* temp=new Node(d);
//     tail -> next=temp;
//     tail = temp;
// }
// void print(Node* &tail){
//     Node* temp=tail;
//     int count=0;
//     while(temp != NULL){
//         cout<< temp -> data <<" ";
//         count++;                    //to print length of list. 
//         temp=temp -> next;
//     }
//     cout<<endl;
//     //cout<<count;
// }
// void deletenode(Node* &head,int value){
//     if(head->data==value){
//         Node* temp=head;
//         head = head -> next;
//         //memory free
//         temp -> next = NULL;
//         delete temp;
//     }
//     else{
//         Node* curr = head;
//         Node* prev = NULL;
//         //int cnt=1;

//         while(curr!=NULL && curr->data!=value){
//                 prev=curr;
//                 curr=curr->next;  
//         }
//         //for deletion.
//         prev -> next = curr -> next;
//         curr -> next = NULL;
//         delete curr; 
//     }
// }
// int main(){

//     Node* node1=new Node(10);
//     //cout<<node1 -> data <<endl;
//     //cout<<node1 -> next <<endl;

//     Node* tail=node1;
//     Node* head=node1;


//     inserttail(tail,12);
//     inserttail(tail,13);
//     inserttail(tail,14);
//     //print(head);

//     deletenode(head,10);
//     print(head);

// }



class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data=data;
        this -> next=NULL;
    }
};
void inserttail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail -> next=temp;
    tail = temp;
}
int print(Node* &tail){
    Node* temp=tail;
    int count=0;
    while(temp != NULL){
        cout<< temp -> data <<" ";
        count++;                    //to print length of list. 
        temp=temp -> next;
    }
    cout<<endl;
    //return count;
}
int length(Node* &head){
    Node* temp=head;
    int count=0;
    while(temp != NULL){
        //cout<< temp -> data <<" ";
        count++;                    //to print length of list. 
        temp=temp -> next;
    }
    return count;
}
int Travel_tolastnode(Node* &head){
    Node* temp=head;
    int count=0;
    while(temp->next != NULL){
        count++;                    //to print length of list. 
        temp=temp -> next;
    }
    return temp->data;
    //cout<<endl;
    //cout<<count;
}

int main(){

    Node* node1=new Node(10);
    //cout<<node1 -> data <<endl;
    //cout<<node1 -> next <<endl;

    Node* tail=node1;
    Node* head=node1;


    inserttail(tail,12);
    inserttail(tail,13);
    inserttail(tail,14);
    print(head);
    cout<<(length(head
    
    ));

    //cout<<tolastnode(head);
}