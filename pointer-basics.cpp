#include <iostream>
using namespace std;
void swapValues(int* a,int* b){int temp=*a;*a=*b;*b=temp;}
int main(){int x=10,y=20;int* p=&x;cout<<"x = "<<x<<'\n';cout<<"Address of x = "<<p<<'\n';cout<<"Value through pointer = "<<*p<<'\n';swapValues(&x,&y);cout<<"After swap: x = "<<x<<", y = "<<y<<'\n';}