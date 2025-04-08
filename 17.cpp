#include<iostream>
using namespace std;

class B;
class A{
    int x;
    public:
    A(int a){x=a;}
    friend void subtract(A,B);
};

class B{
    int y;
    public:
    B(int b)(y=b;)
    friend void subtract(A,B);

};
void subtract(A a,B b){
    cout<<"subtraction"<<a.x-b.y<<endl;
}

int main(){
    A obj1(10);
    B obj2(4);

    subtract(obj1,obj2);
    return 0;
}