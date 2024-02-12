#include <iostream>
using namespace std;

// Forward declaration
class Complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex o1, Complex o2);
    int sumCompComplex(Complex o1, Complex o2);
};

class Complex
{
    int a, b;
    friend class calculator;

public:

    // friend int calculator ::sumRealComplex(Complex o1, Complex o2);

    // friend int calculator ::sumCompComplex(Complex o1, Complex o2);


    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " +" << b << " i" << endl;
    }
};

int calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumCompComplex(Complex o1, Complex o2){

    return (o1.b + o2.b);
    
}


int main()
{

    Complex o1, o2;
    o1.setnumber(1, 4);
    o2.setnumber(5, 7);
    calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout <<"The sum is: " << res<<endl;
    int res1 = calc.sumCompComplex(o1,o2);
    cout<<"The sum is: "<<res1<<endl;

    return 0;
}