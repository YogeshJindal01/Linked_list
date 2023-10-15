#include<iostream>
#include<math.h>
#include<vector>
#include <iomanip>
#include <cctype>
#include <algorithm>
#include<string>
using namespace std;



// int main(){

//     int a[3][3]={{0,5,2},
//                  {-1,1,0},
//                  {7,4,3}};
//     int b[3][2]={{1,2},{0,4},{3,5}};
//     int c[3][2];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<2;j++){
//             int sum=0;
//             for(int k=0;k<3;k++){
//                 sum+=a[i][k] * b[k][j];
//                 c[i][j]=sum;
//             }
//         }
//     }
//     for(int i=0;i<3;i++) {
//         for(int j=0;j<2;j++) {
//             cout << c[i][j] << " ";      
//     }
//     cout<<endl;
// }
// }



//create a node of link list
// class Node{

//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this -> data=data;
//         this -> next=NULL;
//     }


// };

// int main(){

//     Node* node1 = new Node(10);
//     cout<< node1 -> data <<endl;
//     cout<< node1 -> next <<endl;
// }


//insert node at head of link list
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this -> data=data;
//         this -> next=NULL;
//     }
// };
// void insertnode(Node* &head,int d){
//     //new node create
//     Node* temp=new Node(d);  //as new data is passed new node will be created.
//     temp -> next=head;
//     head=temp;
// }
// void print(Node* &head){
//     Node* temp=head;
//     int count=0;
//     while(temp != NULL){
//         cout<< temp -> data <<" ";
//         count++;                    //to print length of list.
//         temp=temp -> next;
//     }
//     cout<<endl;
//     cout<<count;
// }
// int main(){

//     Node* node1=new Node(10);
//     //cout<<node1 -> data <<endl;
//     //cout<<node1 -> next <<endl;

//     Node* head=node1;  //create a pointer head that points to node1.

//     insertnode(head,12);
//     insertnode(head,13);
//     insertnode(head,14);
//     print(head);
// }



//insert node at tail of linked list.
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
// int main(){

//     Node* node1=new Node(10);
//     //cout<<node1 -> data <<endl;
//     //cout<<node1 -> next <<endl;

//     Node* tail=node1;
//     Node* head=node1;
//     //print(tail);

//     inserttail(tail,12);
//     //print(tail);
//     inserttail(tail,15);
//     print(head);
// }


//insert at any position of linked list
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this -> data=data;
//         this -> next=NULL;
//     }
// };
// void insertHead(Node* &head,int d){
//     //new node create
//     Node* temp=new Node(d);  //as new data is passed new node will be created.
//     temp -> next=head;
//     head=temp;
// }
// void inserttail(Node* &tail,int d){
//     Node* temp=new Node(d);
//     tail -> next=temp;
//     tail = temp;
// }

// void insertAtPosition(Node* &head,Node* tail,int pos,int d){

//     if(pos==1){
//         insertHead(head,d);  //to insert in postion 1, call function.
//         return;
//     }
//     Node* temp = head;
//     int cnt = 1;
//     while(cnt < pos-1){
//         temp = temp -> next;
//         cnt++;
//     }
//     if(temp -> next==NULL){
//         inserttail(tail,d);
//         return;
//     }
//     Node* Insertnode=new Node(d);
//     Insertnode -> next = temp -> next;
//     temp -> next = Insertnode;

// }
// void print(Node* &tail){
//     Node* temp=tail;
//     while(temp != NULL){
//         cout<< temp -> data <<" ";
//         temp=temp -> next;
//     }
//     //cout<<endl;
// }

// int main(){

//     Node* node1=new Node(10);
//     //cout<<node1 -> data <<endl;
//     //cout<<node1 -> next <<endl;

//     Node* head=node1;
//     Node* tail=node1;
//     //print(tail);


//     inserttail(tail,12);
//     //print(tail);
//     inserttail(tail,15);
//     //print(head);

//     insertAtPosition(head,tail,2,22);
//     print(head);
// }



//deletion in linked list
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this -> data=data;
//         this -> next=NULL;
//     }

//     //destructor
//     ~Node(){
//         int value = this -> data;
//         if(this -> next != NULL){
//             delete next;
//             this -> next=NULL;
//         }
//         cout<<" memory is free "<<value <<endl;
//     }
// };
// void insertHead(Node* &head,int d){
//     //new node create
//     Node* temp=new Node(d);  //as new data is passed new node will be created.
//     temp -> next=head;
//     head=temp;
// }
// void inserttail(Node* &tail,int d){
//     Node* temp=new Node(d);
//     tail -> next=temp;
//     tail = temp;
// }

// void deletenode(Node* &head,int position){

//     if(position==1){
//         Node* temp=head;
//         head = head -> next;
//         //memory free
//         temp -> next = NULL;
//         delete temp;
//     }
//     else{
//         Node* curr = head;
//         Node* prev = NULL;
//         int cnt=1;

//         while(cnt<position){
//             prev=curr;
//             curr=curr -> next;
//             cnt++;
//         }
//         //for deletion.
//         prev -> next = curr -> next;
//         curr -> next = NULL;
//         delete curr; 
//     }
// }

// void insertAtPosition(Node* &head,Node* tail,int pos,int d){

//     if(pos==1){
//         insertHead(head,d);  //to insert in postion 1, call function.
//         return;
//     }
//     Node* temp = head;
//     int cnt = 1;
//     while(cnt < pos-1){
//         temp = temp -> next;
//         cnt++;
//     }
//     if(temp -> next==NULL){
//         inserttail(tail,d);
//         return;
//     }
//     Node* Insertnode=new Node(d);
//     Insertnode -> next = temp -> next;
//     temp -> next = Insertnode;

// }
// void print(Node* &tail){
//     Node* temp=tail;
//     while(temp != NULL){
//         cout<< temp -> data <<" ";
//         temp=temp -> next;
//     }
//     //cout<<endl;
// }

// int main(){

//     Node* node1=new Node(10);
//     //cout<<node1 -> data <<endl;
//     //cout<<node1 -> next <<endl;

//     Node* head=node1;
//     Node* tail=node1;
//     //print(tail);


//     inserttail(tail,12);
//     //print(tail);
//     inserttail(tail,15);
//     //print(head);
//     inserttail(tail,22);

//     //insertAtPosition(head,tail,2,22);
//     print(head);

//     deletenode(head,2);
//     print(head);

// }


//Reverse of linked list.
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
//     while(temp != NULL){
//         cout<< temp -> data <<" ";
//         temp=temp -> next;
//     }
// }
// Node* reverse(Node* &head){
//     if(head==NULL || head -> next==NULL){
//         return head;
//     }

//     Node* prev=NULL;
//     Node* curr=head;
//     Node* forward=NULL;
//     while(curr!=NULL){
//         forward=curr -> next;
//         curr -> next=prev;
//         prev=curr;
//         curr=forward;
//     }
//     head=prev;  //head comes before null node and as we paas it it will print reverse list.
//     return head;
// }
// int main(){

//     Node* node1=new Node(10);
//     //cout<<node1 -> data <<endl;
//     //cout<<node1 -> next <<endl;

//     Node* tail=node1;
//     Node* head=node1;


//     inserttail(tail,12);
//     inserttail(tail,15);
//     inserttail(tail,18);
//     print(head);

//     cout<<endl;

//     reverse(head);
//     print(head);
// }


//length of linked list and middle element.                                         
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
//     while(temp != NULL){
//         cout<< temp -> data <<" ";        
//         temp=temp -> next;
//     }
// }
// int size(Node* &head){  //to calculate length of linked list.
//     Node* temp=head;
//     int count=0;
//     while(temp != NULL){
//         count++;                  
//         temp=temp -> next;
//     }
//     return count;
// }
// Node* middle(Node* &head){

//     int leng = size(head);
//     int ans = (leng/2);

//     Node* temp=head;
//     int cnt=0;
//     while(cnt<ans){
//         temp=temp->next;
//         cnt++;
//     }
//     cout<<temp->data;
//     //return d;
// }
// int main(){

//     Node* node1=new Node(10);
//     //cout<<node1 -> data <<endl;
//     //cout<<node1 -> next <<endl;

//     Node* tail=node1;
//     Node* head=node1;

//     inserttail(tail,12);
//     inserttail(tail,15);
//     inserttail(tail,18);
//     print(head);
//     cout<<endl;

//     int length=size(head);
//     cout<<length;
//     cout<<endl;
//     middle(head);
//     // Node* mid=middle(head);
//     // cout<<mid;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//check pallindrome using array.
//  int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int arr2[n];
//     int s=0;
//     int e=n-1;
//     while(s<e){
//         swap(arr[s],arr[e]);
//         s++;
//         e--;
//     }
//     int temp;
//     for(int i=0;i<n;i++){
//         temp=arr[i];
//         arr2[i]=arr[i];
//     }
//     bool yes=false;
//     for(int i=0;i<n;i++){
//         if(arr[i]==arr2[i]){
//             yes=true;
//         }
//     }
//     if(yes==true){
//         cout<<"yes";
//     }
//     else{
//         cout<<"no";
//     }
//  }


//delete duplicate
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
//     while(temp != NULL){
//         cout<< temp -> data <<" ";        
//         temp=temp -> next;
//     }
// }
// Node* deleteDuplicates(Node* head){
//     Node* curr=head;
//     Node* forward=NULL;
//     while(curr!=NULL){
//         forward=curr->next;
//         if(curr->data==forward->data){
//             curr->next=forward->next;
//             forward->next=NULL;
//         }
//         curr=curr->next;
//     }
//     return head;
// }
// int main(){

//     Node* node1=new Node(1);

//     Node* tail=node1;
//     Node* head=node1;

//     inserttail(tail,1);
//     inserttail(tail,2);
//     inserttail(tail,3);
//     inserttail(tail,3);

//     Node* head2=deleteDuplicates(head);
//     print(head2);
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
// void insertHead(Node* &head,int d){
//     //new node create
//     Node* temp=new Node(d);  //as new data is passed new node will be created.
//     temp -> next=head;
//     head=temp;
// }
// void inserttail(Node* &tail,int d){
//     Node* temp=new Node(d);
//     tail -> next=temp;
//     tail = temp;
// }

// void deletenode(Node* &head,int val){
    // while(head!=nullptr && head->data==val){
    //     Node* temp=head;
    //     head = head -> next;
    //     // temp -> next = NULL;
    //     delete temp;
    // }
    // Node* curr = head;
    // Node* prev = NULL;
    // while(curr!=nullptr){
    //     if(curr->data==val){
    //         prev -> next = curr -> next;
    //         curr -> next = NULL;
    //         curr=prev->next;
    //     }
    //     else{
    //         prev=curr;
    //         curr=curr -> next;
    //         }
    // } 
// }
// void print(Node* &tail){
//     Node* temp=tail;
//     while(temp != NULL){
//         cout<< temp -> data <<" ";
//         temp=temp -> next;
//     }
//     //cout<<endl;
// }

// int main(){

//     Node* node1=new Node(1);
//     //cout<<node1 -> data <<endl;
//     //cout<<node1 -> next <<endl;

//     Node* head=node1;
//     Node* tail=node1;


//     inserttail(tail,1);
//     inserttail(tail,1);
//     inserttail(tail,1);
//     // inserttail(tail,4);
//     // inserttail(tail,5);
//     // inserttail(tail,6);

//     print(head);
//     cout<<endl;

//     deletenode(head,3);
//     print(head);

// }

