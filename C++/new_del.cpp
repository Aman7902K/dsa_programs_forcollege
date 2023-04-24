#include<iostream>
using namespace std;
int main() {
    int *arr = new int[4];
    arr[0]=43;
    arr[1]=434;          
    arr[2]=21;
    arr[3]=54;
    
    cout<<"the value of arr[0] is "<<arr[0]<<endl;
    cout<<"the value of arr[1] is "<<arr[1]<<endl;
    cout<<"the value of arr[2] is "<<arr[2]<<endl;
    cout<<"the value of arr[3] is "<<arr[3]<<endl;
    delete arr;
return 0;
}