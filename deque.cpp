#include <iostream>
#include <deque>
using namespace std;
int main(){deque<int> dq;dq.push_front(20);dq.push_front(10);dq.push_back(30);dq.push_back(40);cout<<"Deque: ";for(int x:dq)cout<<x<<' ';cout<<"\nFront: "<<dq.front()<<"\nBack: "<<dq.back()<<'\n';dq.pop_front();dq.pop_back();cout<<"After removing both ends: ";for(int x:dq)cout<<x<<' ';cout<<'\n';}