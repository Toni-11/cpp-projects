#include <iostream>
using namespace std;
void bubbleSort(int a[],int n){for(int i=0;i<n-1;++i){bool swapped=false;for(int j=0;j<n-i-1;++j)if(a[j]>a[j+1]){swap(a[j],a[j+1]);swapped=true;}if(!swapped)break;}}
int main(){int a[]={5,1,4,2,8};int n=sizeof(a)/sizeof(a[0]);bubbleSort(a,n);for(int x:a)cout<<x<<' ';cout<<'\n';}