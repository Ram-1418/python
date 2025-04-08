#include<iostream>
using namespace std;

class Employee{
    float salary;

    public:

    Employee(float s){
        salary =s;
    }
    Employee operator--(int){
        --salary;
        return *this;
    }

    Employee operator--(int){
        Employee temp =*this;
        salary--;
        return temp;
    }
};

int main(){
    Employee emp(5000);

    cout<<"original";
    emp.display();

    --emp;
    cout<<"after pre-decrement";
    emp.display();
    
}