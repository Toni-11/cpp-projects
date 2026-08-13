#include <iostream>
#include <limits>
using namespace std;
void displayBalance(const double* balance){cout<<"Your current balance is: $"<<*balance<<'\n';}
void withdraw(double* balance,double amount){if(amount<=*balance){*balance-=amount;cout<<"You withdrew: $"<<amount<<'\n';}else cout<<"Insufficient balance!\n";}
int main(){double balance=1000.0;double* ptr=&balance;int choice;do{cout<<"\nATM Menu:\n1. Display Balance\n2. Withdraw Money\n3. Exit\nEnter your choice: ";cin>>choice;while(cin.fail()||choice<1||choice>3){cin.clear();cin.ignore(numeric_limits<streamsize>::max(),'\n');cout<<"Invalid choice. Please choose 1-3: ";cin>>choice;}switch(choice){case 1:displayBalance(ptr);break;case 2:{double amount;cout<<"Enter amount to withdraw: $";cin>>amount;while(cin.fail()||amount<=0){cin.clear();cin.ignore(numeric_limits<streamsize>::max(),'\n');cout<<"Enter a positive amount: $";cin>>amount;}withdraw(ptr,amount);break;}case 3:cout<<"Exiting...\n";break;}}while(choice!=3);return 0;}
