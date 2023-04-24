#include <iostream>
using namespace std;
class base
{
    int data1;
public:
    int data2;
    void scan(){
        data1 = 34;
        data2 = 54;
    }
    int getdata1(){
        return data1;
    }
    int getdata2(){
        return data2;
    }
};
class derived : public base
{
    int data3;

public:
    void process(){
        data3 = data2 * getdata1();
    }
    void display(){
        cout << "value of data 1=" << getdata1() << endl;
        cout << "value of data 2=" << data2 << endl;
        cout << "value of data 3=" << data3 << endl;
    }
};
int main()
{
    derived d1;
    d1.scan();
    d1.process();
    d1.display();
    return 0;
}