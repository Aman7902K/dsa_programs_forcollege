#include<iostream>
#include<string.h>
using namespace std;
struct student{
    int roll;
    string name;
    string course;
    int age;
};
int main()
{   
    struct student st;
    int ch;
    do{
    cout<<"Enter the Roll Number of the student\n";   
    cin>>st.roll;
    cin.ignore();
    cout<<"Enter the name of the student\n";
    getline(cin, st.name);
    cout<<"Enter the course in which the student enrolled in\n";
    cin>>st.course;
    cout<<"Enter the age of the student\n";
    cin>>st.age;
    cout<<"The data of the student is\n";
    cout<<"Roll number : "<< st.roll<<endl;
    cout<<"Name : "<< st.name<<endl;
    cout<<"Course : "<< st.course<<endl;
    cout<<"Age : "<< st.age<<endl;
    cout<<"1 to continue\n";
    cout<<"0 to exit\n";
    cin>>ch;
    }while(ch==1);
return 0;
}