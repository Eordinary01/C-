#include<iostream>
#include<string>
using namespace std; 

class Student{
    private:
     string N;
     int R;
     string S;

     public:
      void setValue(int a1, string a2, string a3 );

      void getValue(){
        cout<<"The Roll No is: "<<R<<endl;
        cout<<"The Name is: "<<N<<endl;
        cout<<N<<" Studies in "<<S<<endl;

      }

};

void Student::setValue(int a1, string a2,string a3){
    R = a1;
    N = a2;
    S = a3;
}




int main(){
    Student dev;
    dev.setValue(51, "Parth", "SH");
    dev.getValue();


    return 0; 
}