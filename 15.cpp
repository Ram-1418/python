#include<iostream>
using namespace std;

class PrintData{
    public:
    void print(int value){
        cout<<"value"<<value<<endl;
    }
    void print(const char*str){
        cout<<"value"<<str<<"\""<<endl;
    }
};

int main(){
    PrintData p;
    p.print(10);
    p.print("hi");

    return 0;

}