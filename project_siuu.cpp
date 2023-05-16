#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
fstream out;
out.open("Student_data.txt",ios::app);
string nm,cs,st3;
int n,roll;
cout<<"enter the number of records to be entered:"<<endl;
cin>>n;
if(n<=0){
    cout<<"enter a positive value "<<endl;
}
else{
cout<<"enter data"<<endl;
for (int i = 0; i < n; i++)
{
    cout<<"enter Roll number:"<<endl;
    cin>>roll;
    cout<<"enter name:";
    cin.ignore();
    getline(cin,nm);
    cout<<"enter cource name:";
    getline(cin, cs);
    out<<"Roll Number :"<<roll<<endl;
    out<<"Name        :"<<nm<<endl;
    out<<"Class       :"<<cs<<endl;
    out<<endl;
}
}
out.close();
}