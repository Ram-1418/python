#include<iostream>
using namespace std;

class Number{
    int a,b;

    public:
    Number(){
        a=0;
        b=0;

    }

    Number(int x,int y=0){
        a=x;
        b=y;
    }

    void display(){
        if(a>b){
            cout<<"maximum"<<a<<endl;
        }else if(b>a){
            cout << "Maximum: " << b << endl;
        }else{
            cout<<"both numbers are equal"<<a<<endl;
        }
    }

};
int main(){
    Number obj1;
    Number obj2(10,20);
    Number obj3(15);

    obj1.display();
    obj2.display();
    obj3.display();

    return 0;

}