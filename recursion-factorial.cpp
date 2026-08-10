#include <iostream>
using namespace std;
long long factorial(int n){if(n<=1)return 1;return n*factorial(n-1);}
int main(){int n;cout<<"Enter a non-negative integer: ";cin>>n;if(n<0||n>20){cout<<"Invalid value. Use 0..20.\n";return 1;}cout<<n<<"! = "<<factorial(n)<<'\n';}