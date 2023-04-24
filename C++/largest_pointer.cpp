#include<iostream>
using namespace std;

class largest{
    int *arr;
    public:
        largest(){
            arr = nullptr;
        }
        void read_array(int n){
            arr = new int[n];
            for (int i = 0; i < n; i++)
            {
                cin>>arr[i];
            }
        }
        int large(int n){
            int max=0;
            for (int i = 1; i < n; i++)
            {
                if(arr[i] > arr[max]){
                    max=i;
                }
            }
            return arr[max];
        }
        // ~largest(){
        //     delete[] arr;
        // }
};  
int main()
{
    largest c1;
    cout<<"enter elements"<<endl;
    c1.read_array(5);
    int lar = c1.large(5);
    cout<<"largest element :"<<lar;
    return 0;
}