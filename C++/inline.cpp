#include<iostream>
using namespace std;

class sum{
    int a,b,result;
    public:
        void getdata(int c,int d){
            a=c;
            b=d;
        }
        inline int sum1(){
            result = a+b;
            return result;
        }
        void display(){
            cout<<"the sum is"<<result<<endl;
        }
};
int main()
{
    sum s1;
    s1.getdata(34,32);
    s1.sum1();
    s1.display();
    return 0;
}