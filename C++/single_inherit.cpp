#include <iostream>
using namespace std;
class base
{
    public:
        int data1;
        int data2,data3;
        void scan(){
            data1 = 34;
            data2 = 54;
            data3 = 21;
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
public:
    // void process(){
    //     data3 = data2 * getdata1();
    // }
    // void display(){
    //     cout << "value of data 1=" << getdata1() << endl;
    //     cout << "value of data 2=" << data2 << endl;
    //     cout << "value of data 3=" << data3 << endl;
    // }
    int big;
    void greater(){
        if(data1>data2 && data1>data3){
            big=data1;
        }
        else if(data2>data1 && data2>data3){
            big=data2;
        }
        else{
            big=data3;
        }
        // cout<<big<<endl;
    }
};
class derived2 : public derived{
    public:
        void display(){
            cout<<"the biggest integer is :"<<big<<endl;
        }
};
int main()
{
    derived2 d1;
    d1.scan();
    d1.greater();
    d1.display();
    return 0;
}