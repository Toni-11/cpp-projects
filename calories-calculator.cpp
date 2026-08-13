#include <iostream>
#include <limits>
#include <map>
using namespace std;

int main() {
    map<string, int> foodCalories = {{"Apple",52},{"Banana",89},{"Bread",265},{"Rice",130},{"Meat",250},{"Fish",206},{"Egg",155}};
    string foodItem;
    int quantity, totalCalories = 0;
    char choice;

    cout << "Welcome to the Calorie Calculator Program!\n";
    do {
        cout << "\nChoose a food:\n";
        for (const auto& item : foodCalories) cout << "- " << item.first << " (" << item.second << " cal/100 grams)\n";
        cout << "Enter the food name: ";
        cin >> foodItem;

        while (foodCalories.find(foodItem) == foodCalories.end()) {
            cout << "Food not found. Enter a food from the list: ";
            cin >> foodItem;
        }

        cout << "Enter the quantity (in grams): ";
        cin >> quantity;
        while (cin.fail() || quantity <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Quantity must be positive. Try again: ";
            cin >> quantity;
        }

        totalCalories += (foodCalories[foodItem] * quantity) / 100;
        cout << "Added! Total calories now: " << totalCalories << " cal.\n";
        cout << "Do you want to add more? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "\nTotal calories consumed: " << totalCalories << " cal.\n";
    return 0;
}
