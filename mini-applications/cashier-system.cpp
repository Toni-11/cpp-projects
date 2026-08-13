#include <iostream>
#include <string>
#include <limits>

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

        while (!(cin >> choice) || choice < 1 || choice > 4) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid choice. Please choose an option (1-4): ";
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
                while (!(cin >> itemPrice) || itemPrice <= 0) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid price. Please enter a positive number: ";
                }

                items[itemCount] = itemName;
                prices[itemCount] = itemPrice;
                cout << "Added: " << itemName << " - $" << itemPrice << endl;
                itemCount++;
            }
        }
        else if (choice == 2) {
            cout << "\nItems in the cart:\n";
            double total = 0.0;

            if (itemCount == 0) {
                cout << "Cart is empty.\n";
            }

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

            double payment;
            cout << "Enter payment amount: ";

            while (!(cin >> payment) || payment < 0) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid payment. Please enter a non-negative amount: ";
            }

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
        else {
            cout << "Exiting the system. Thank you for shopping!\n";
        }

    } while (choice != 4);

    return 0;
}
