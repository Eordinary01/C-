#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int choice;

    cout << "Welcome to our shopping complex" << endl;
    cout << "-----------------------------------------" << endl;

    do {
        cout << "You can shop various items in our complex" << endl;
        cout << "1. Rice\n2. Wheat\n3. Poha\n4. Paneer\n5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Yes! We have Rice in stock" << endl;
                cout << "-------------------------------------" << endl;
                cout << "What else you want! If you did not want anything press 5" << endl;
                cout << "-------------------------------------" << endl;
                break;
            case 2:
                cout << "Yes! We have Wheat in stock" << endl;
                cout << "-------------------------------------" << endl;
                cout << "What else you want! If you did not want anything press 5" << endl;
                cout << "-------------------------------------" << endl;
                break;
            case 3:
                cout << "Yes! We have Poha in stock" << endl;
                cout << "-------------------------------------" << endl;
                cout << "What else you want! If you did not want anything press 5" << endl;
                cout << "-------------------------------------" << endl;
                break;
            case 4:
                cout << "Yes! We have Paneer in stock" << endl;
                cout << "-------------------------------------" << endl;
                cout << "What else you want! If you did not want anything press 5" << endl;
                cout << "-------------------------------------" << endl;
                break;
            case 5:
                cout << "Exiting the shopping complex!Thanks for shopping" << endl;
                break;
            default:
                cout << "Enter a valid choice (1-5)" << endl;
                break;
        }

    } while (choice != 5);

    return 0;
}
