#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int randomNumber = rand() % 100 + 1;
    int number = 0;
    cout << "Enter your guess Between (1:100)=";
    cin >> number;
    while (number < 1 || number > 100) { cout << " your number " << number << "out of range try again"; cout << "enter your guess between(1:100)="; cin >> number; }
    if (number >= randomNumber + 25 || number <= randomNumber - 25) cout << "The Guess is false , Too far:";
    else if (number <= randomNumber + 25 && number >= randomNumber - 25) cout << "The Guess is false , very close:";
    else cout << "The Guess is True , you win!";
    return 0;
}