#include <iostream>
#include <string>

using namespace std;

int main() {
    const int MAX_ITEMS = 5;
    string items[MAX_ITEMS]; 
    double prices[MAX_ITEMS]; 
    int itemCount = 0;
    int choice = 0;

    do {
        cout << "\nCashier System Menu:\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Payment\n";
        cout << "4. Exit\n";
        cout << "Enter a number: ";
        cin >> choice;

        while (choice < 1 || choice > 4) {
            cout << "Your Choice " << choice << " Is Not Valid\n";
            cout << "Please Choose an option (1-4): ";
            cin >> choice;
        }

        if (choice == 1) {
            if (itemCount >= MAX_ITEMS) {
                cout << "Cannot add more items. Maximum limit (5)." << endl;
            }
            else {
                string itemName;
                double itemPrice;

                cout << "Enter item name: ";
                cin >> itemName;
                cout << "Enter item price: ";
                cin >> itemPrice;

                items[itemCount] = itemName;
                prices[itemCount] = itemPrice; 
                cout << "Added: " << itemName << " - $" << itemPrice << endl;
                itemCount++;
            }
        }
        else if (choice == 2) {
            cout << "\nItems in the cart:\n";
            double total = 0.0;

            for (int i = 0; i < itemCount; i++) { 
                cout << items[i] << " - $" << prices[i] << endl;
                total += prices[i];
            }
            cout << "Total: $" << total << endl;

        }
        else if (choice == 3) {
            double total = 0.0;

            for (int i = 0; i < itemCount; i++) { 
                total += prices[i];
            }

            double payment = 0;
            cout << "Enter payment amount: ";
            cin >> payment;

            if (payment < total) {
                cout << "Error payment. Please pay at least $" << total << endl;
            }
            else {
                double change = payment - total;
                cout << "The Payment = $" << payment << endl;
                cout << "The Cost = $" << total << endl;
                cout << "Change = $" << change << endl;
            }
        }
        else if (choice == 4) {
            cout << "Exiting the system. Thank you for shopping!\n";
        }

    } while (choice != 4);

    return 0;
}