#include<iostream>
using namespace std;

class student
{
    protected:
        int roll_no;
    public:
        void scan_roll();
        void print_roll();
};
void student :: scan_roll()
{
    cin>>roll_no;
}
void student :: print_roll()
{
    cout<<roll_no<<endl;
} 
class exam :  public student
{
    protected: 
    float maths;
    float phy;
    public:
        void scan_marks();
        void print_marks();
};
    void exam :: scan_marks()
    {
        cin>>maths;
        cin>>phy;
    }
    void exam :: print_marks()
    {
        cout<<"marks in maths"<<maths<<endl;
        cout<<"marks in physics"<<phy<<endl;
    }
class result : public exam
{
    float percent;
    public:
    void get_data_student()
    {

      
         scan_roll();
         scan_marks();
    }
        void display()
        {

            cout<<"your percentage is"<<(maths+phy)/2<<"%"<<endl ;
        }
};
int main() {
result aman;
aman.get_data_student();
aman.display();
return 0;
}