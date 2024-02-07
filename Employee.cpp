#include <iostream>
using namespace std;

class Employee
{

   int id;
   static int count;

public:
   void setData(void)
   {
      cout << "Enter the ID:" << endl;
      cin >> id;
      count++;
   }
   void getData(void)
   {
      cout << "The id of this employee is: " << id << endl
           << "and this is Employee Number " << count << endl;
   }

   static void getCount(void){
      cout<<"The value of count is: "<<count<<endl;
   } 
};

// Count is the static  Data member of class employee..

int Employee::count; // Default value is zero..
int main()
{
   Employee dev, roy, rk;
   // dev.id = 1;
   // dev.count =5; // Cannot do this as id and count are private..

   dev.setData();
   dev.getData();
   Employee:: getCount();


   roy.setData();
   roy.getData();
   Employee:: getCount();


   rk.setData();
   rk.getData();
   Employee:: getCount();


   return 0;
}