#include <iostream>
using namespace std;

class base1
{
protected:
    int int1;

public:
    void getdata1()
    {
        cin >> int1;
    }
};
class base2
{
protected:
    int int2;

public:
    void getdata2()
    {
        cin >> int2;
    }
};
class derived : public base1, public base2
{
public:
    void display()
    {
        cout << "value of first integer is " << int1 << endl;
        cout << "value of second integer is " << int2 << endl;
        cout << "The sum of first and second integer is" << int1 + int2 << endl;
    }
};
int main()
{
    derived obj;
    obj.getdata1();
    obj.getdata2();
    obj.display();
    return 0;
}