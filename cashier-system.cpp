#include <iostream>
#include <string>

using namespace std;

int main() {
    const int MAX_ITEMS = 5;
    string items[MAX_ITEMS];
    double prices[MAX_ITEMS]{};
    int itemCount = 0;
    int choice = 0;

    do {
        cout << "\nCashier System Menu:\n"
             << "1. Add Item\n"
             << "2. Display Items\n"
             << "3. Payment\n"
             << "4. Exit\n"
             << "Enter a number: ";
        cin >> choice;

        while (choice < 1 || choice > 4) {
            cout << "Invalid choice. Please choose 1-4: ";
            cin >> choice;
        }

        if (choice == 1) {
            if (itemCount >= MAX_ITEMS) {
                cout << "Cannot add more items. Maximum limit (5).\n";
                continue;
            }

            string itemName;
            double itemPrice;
            cout << "Enter item name: ";
            cin >> itemName;
            cout << "Enter item price: ";
            cin >> itemPrice;

            if (itemPrice < 0) {
                cout << "Price cannot be negative.\n";
                continue;
            }

            items[itemCount] = itemName;
            prices[itemCount] = itemPrice;
            ++itemCount;
            cout << "Added: " << itemName << " - $" << itemPrice << '\n';
        }
        else if (choice == 2) {
            double total = 0.0;
            cout << "\nItems in the cart:\n";
            for (int i = 0; i < itemCount; ++i) {
                cout << items[i] << " - $" << prices[i] << '\n';
                total += prices[i];
            }
            cout << "Total: $" << total << '\n';
        }
        else if (choice == 3) {
            double total = 0.0;
            for (int i = 0; i < itemCount; ++i) {
                total += prices[i];
            }

            double payment;
            cout << "Enter payment amount: ";
            cin >> payment;

            if (payment < total) {
                cout << "Insufficient payment. Please pay at least $" << total << '\n';
            } else {
                cout << "Payment = $" << payment << '\n'
                     << "Cost = $" << total << '\n'
                     << "Change = $" << payment - total << '\n';
            }
        }
        else {
            cout << "Exiting the system. Thank you for shopping!\n";
        }
    } while (choice != 4);

    return 0;
}
