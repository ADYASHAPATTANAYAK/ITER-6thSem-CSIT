/*
Enter code number of the item: 12
Enter price of the item: $24
Item added to the list.
Do you want to add another item? (y/n): y
Enter code number of the item: 10
Enter price of the item: $34
Item added to the list.
Do you want to add another item? (y/n): n
Items in the shopping list:
Code Number: 12, Price: $24
Code Number: 10, Price: $34
*/

#include <iostream>
using namespace std;

const int MAX_ITEMS = 100;

class ShoppingList {
private:
    struct Item {
        int codeNumber;
        double price;
    };

    Item items[MAX_ITEMS];
    int itemCount;

public:
    ShoppingList() : itemCount(0) {}

    void addItem(int code, double price) {
        if (itemCount < MAX_ITEMS) {
            items[itemCount].codeNumber = code;
            items[itemCount].price = price;
            itemCount++;
            cout << "Item added to the list." << endl;
        } else {
            cout << "Shopping list is full. Cannot add more items." << endl;
        }
    }

    void displayItems() {
        if (itemCount == 0) {
            cout << "Shopping list is empty." << endl;
        } else {
            cout << "Items in the shopping list:" << endl;
            for (int i = 0; i < itemCount; ++i) {
                cout << "Code Number: " << items[i].codeNumber << ", Price: $" << items[i].price << endl;
            }
        }
    }

    void addItemFromUserInput() {
        int code;
        double price;

        cout << "Enter code number of the item: ";
        cin >> code;
        cout << "Enter price of the item: $";
        cin >> price;

        addItem(code, price);
    }
};

int main() {
    ShoppingList myList;

    char choice;
    do {
        myList.addItemFromUserInput();

        cout << "Do you want to add another item? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    myList.displayItems();

    return 0;
}
