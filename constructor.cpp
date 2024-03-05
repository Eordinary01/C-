#include<iostream>
using namespace std;
 class Complex{
    int a,b;

    public:
       
       //Constructor is a special mmeber function with same  name as of the class. 
       // It is used to initalize the objects of its class
       //It is automatically invoked  whenever an objects is created..  

       Complex(void); // constructor declaration 

       void printNumber(){
        cout<<"Your number is: "<< a <<" + " << b << "i"<< endl;
       }

 };
 Complex :: Complex(void){
    a = 7;
    b = 0;
 }

 int main(){
    Complex c;
    c.printNumber();

    return 0; 
 }