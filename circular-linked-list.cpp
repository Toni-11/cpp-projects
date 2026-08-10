#include <iostream>
using namespace std;
struct Node{int data;Node* next;Node(int v):data(v),next(nullptr){}};
void insertEnd(Node*& head,int value){Node* node=new Node(value);if(!head){head=node;node->next=head;return;}Node* cur=head;while(cur->next!=head)cur=cur->next;cur->next=node;node->next=head;}
void display(Node* head){if(!head)return;Node* cur=head;do{cout<<cur->data<<' ';cur=cur->next;}while(cur!=head);cout<<'\n';}
int main(){Node* head=nullptr;insertEnd(head,10);insertEnd(head,20);insertEnd(head,30);display(head);if(head){Node* cur=head->next;while(cur!=head){Node* t=cur;cur=cur->next;delete t;}delete head;}}