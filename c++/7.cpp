#include<iostream>
using namespace std;

class PrintData{
    public:

    void print(int x){
        cout<<"value"<<x<<endl;
    }

    void print(cosnt char* str){
        cout<<"value"<<str<<"\""<endl;
    }
};

int main(){
    PrintData p;
    p.print(10);
    p.print("hi");
    return 0;
}