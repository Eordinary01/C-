#include <iostream>
using namespace std;


int add(int a, int b){

    int c; 
    c = a+b;
    return c;
}
int main(){


    int n1,n2;

    cout<<"Enter first number:";
    cin>>n1;
    cout<<"Enter second number:";
    cin>>n2;
    cout<<" The function returned is: "<<add(n1,n2);





    return 0;
}