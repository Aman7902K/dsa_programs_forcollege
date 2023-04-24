#include<iostream>
using namespace std;

class circle{
    private:
        int r;
        float pi,area;
    public:
        circle(){
            pi=3.14;
        }
        circle(int a){
            r=a;
        }
        circle(circle p,circle y){
            area=p.pi*y.r*y.r;
        }
        void display(){
            cout<<"the area is:"<<area<<endl;
        }
};
int main() {
circle c1,c2(3),c3(c1,c2);
c3.display();
return 0;
}