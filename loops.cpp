#include <iostream>
using namespace std;

int main(){

    int age;

cout<<"Enter Your Age:";
cin>>age;


if (age>=18){
    cout<<"You can vote!!"<<endl;
}
else if(age<=0){
    cout<<"Nalla!"<<endl;

}
else{
    cout<<"Vai Ghar jayoo!!"<<endl;
}


    return 0; 
}