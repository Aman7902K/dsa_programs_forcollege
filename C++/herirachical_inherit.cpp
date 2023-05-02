#include <iostream>
#include <string.h>
using namespace std;
class student
{
protected:
    int roll;
    string name;

public:
    void getdata_base(int r, string n)
    {
        roll = r;
        name = n;
    }
    void display()
    {
        cout << "Roll no. is :" << roll << endl;
        cout << "Name is :" << name << endl;
    }
};
class studies : public student
{
protected:
    int c_, dsa;

public:
    void getdata_der1()
    {
        cout << "Enter marks in C++" << endl;
        cin >> c_;
        cout << "Enter marks in Data structures" << endl;
        cin >> dsa;
    }
    void display_der1()
    {
        display();
        cout << "Marks in C++ " << c_ << endl;
        cout << "Marks in Data Structures" << dsa << endl;
    }
};
class sports : public student
{
protected:
    string sp_name, ach;

public:
    void getdata_der2()
    {
        cin.ignore();
        cout << "Enter Sports name " << endl;
        getline(cin, sp_name);
        cout << "Enter Achivement" << endl;
        getline(cin, ach);
    }
    void display_der2()
    {
        display();
        cout << "Plays : " << sp_name << endl;
        cout << "Achivement : " << ach << endl;
    }
};
int main()
{
    int rn;
    string nm;
    cout << "Enter the roll no. of the student :";
    cin >> rn;
    cout << "Enter the name of Student :";
    cin >> nm;
    studies s1;
    s1.getdata_base(rn, nm);
    s1.getdata_der1();
    s1.display_der1();
    sports s2;
    s2.getdata_base(rn, nm);
    s2.getdata_der2();
    s2.display_der2();
    return 0;
}