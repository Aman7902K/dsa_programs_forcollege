#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(){
        a = 0;
        b =0;
    }

    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex(Complex c1,Complex c2){
        a = c1.a+c2.a;
        b = c1.b+c2.b;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex c1(4, 6);
    c1.printNumber();

    Complex c2(5,7);
    c2.printNumber();

    Complex c3(c1,c2);
    c3.printNumber();
    return 0;
}
