#include <iostream>
#include <string>
using namespace std;
int linearSearch(const int a[],int n,int target){for(int i=0;i<n;++i)if(a[i]==target)return i;return -1;}
int main(){int a[]={12,7,25,4,18};int n=sizeof(a)/sizeof(a[0]),target;cout<<"Enter value to search: ";cin>>target;int index=linearSearch(a,n,target);cout<<(index==-1?"Not found\n":"Found at index "+to_string(index)+"\n");}