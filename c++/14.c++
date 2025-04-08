#include<iostream>
using namespace std;

class Mobile{
    int Mobile_id;
    string Mobile_Name;
    float Mobile_Price;

    public:

    Mobile(int id,string name,float price){
        Mobile_id=id;
        Mobile_Name=name;
        Mobile_Price=price;
    }



void display(){
    cout<<"Mobile id"<<Mobile_id<<endl;
    cout<<"Mobile id"<<Mobile_Name<<endl;
    cout<<"Mobile id"<<Mobile_Price<<endl;
}
};
int main(){
    Mobile m1(101,"samsung",155555.0);
    m1.display();

    return 0;
}