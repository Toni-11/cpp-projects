#include <iostream>
#include <random>
#include <limits>
using namespace std;
int main(){random_device rd;mt19937 generator(rd());uniform_int_distribution<int> distribution(1,100);const int randomNumber=distribution(generator);int number;cout<<"Guess the number between 1 and 100.\n";while(true){cout<<"Enter your guess: ";cin>>number;if(cin.fail()){cin.clear();cin.ignore(numeric_limits<streamsize>::max(),'\n');cout<<"Please enter a valid number.\n";continue;}if(number<1||number>100){cout<<"Your number is out of range. Try again.\n";continue;}if(number==randomNumber){cout<<"Correct! You win!\n";break;}int difference=number>randomNumber?number-randomNumber:randomNumber-number;if(difference>25)cout<<"Too far.\n";else cout<<"Very close. Try again.\n";}return 0;}
