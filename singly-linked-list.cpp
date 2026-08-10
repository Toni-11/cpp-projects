#include <iostream>
using namespace std;
struct Node{int data;Node* next;Node(int value):data(value),next(nullptr){}};
void insertEnd(Node*& head,int value){Node* node=new Node(value);if(!head){head=node;return;}Node* cur=head;while(cur->next)cur=cur->next;cur->next=node;}
void deleteValue(Node*& head,int value){if(!head)return;if(head->data==value){Node* t=head;head=head->next;delete t;return;}Node* cur=head;while(cur->next&&cur->next->data!=value)cur=cur->next;if(cur->next){Node* t=cur->next;cur->next=t->next;delete t;}}
bool search(Node* head,int value){while(head){if(head->data==value)return true;head=head->next;}return false;}
void display(Node* head){while(head){cout<<head->data<<" -> ";head=head->next;}cout<<"NULL\n";}
int main(){Node* head=nullptr;insertEnd(head,10);insertEnd(head,20);insertEnd(head,30);display(head);cout<<"Search 20: "<<(search(head,20)?"Found":"Not Found")<<'\n';deleteValue(head,20);display(head);while(head){Node* t=head;head=head->next;delete t;}}