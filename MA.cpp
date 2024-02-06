#include <iostream>
using namespace std;

class Shop
{

   int itemId[100];
   int itemPrice[100];

   int counter;

public:
   void initCounter(void) { counter = 0; }
   void setPrice(void);
   void displayPrice(void);
};
void Shop ::setPrice(void)
{
   cout << "Enter Id of your item no " << counter + 1 << ":";
   cin >> itemId[counter];
   cout << "Enter Id of your Price:";
   cin >> itemPrice[counter];
   counter++;
};

void Shop ::displayPrice(void)
{
   for (int i = 0; i < counter; i++)
   {
      cout << "The Price of item with Id " << itemId[i] << " is: " << itemPrice[i] << endl;
   }
}
int main()
{
   Shop dukaan;
   char choice;

   do {
      cout << "1. Add Item\n";
      cout << "2. Display Items\n";
      cout << "3. Exit\n";
      cout << "Enter your choice: ";
      cin >> choice;

      switch(choice) {
         case '1':
            dukaan.setPrice();
            dukaan.setPrice();
            dukaan.setPrice();
            break;
         case '2':
            dukaan.displayPrice();
            break;
         case '3':
            cout << "Exiting...\n";
            break;
         default:
            cout << "Invalid choice. Please enter again.\n";
            break;
      }
   } while(choice != '3');

   return 0;
}