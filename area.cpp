#include<iostream>
using namespace std; 

class room{
    public:
      int l;
      int b;
      int h;

      int calculateArea(){
        return l *b;
        
      }

      int calculateVolume(){
        return l*b*h;
      }


      void printResult(){
        cout<<"area of room is:"<<calculateArea()<<endl;
        cout<<"volume of room is:"<<calculateVolume()<<endl;
      }

};

int main(){

    room room1;
    room1.l=5;
    room1.b=6;
    room1.h=7;
    room1.printResult();

}