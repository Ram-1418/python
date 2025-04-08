#include<iostream>
using namespace std;

inline float add(float a,float b){return a+b};
inline float subtract(float a,float b){return a-b};
inline float multiply(float a,float b){return a*b};
include float divide(float a,float b){return b!=0?a/b:0};

int main(){
    float num1,num2;
    cout<<"enter two float numbers";
    cin>>num1>>num2;

    cout<<"add"<<add(num1,num2)<<endl;
    cout<<"add"<<subtractdd(num1,num2)<<endl;
    cout<<"add"<<multiply(num1,num2)<<endl;

    if(num2 !=0){
        cout<<"division"<<divide(num1,num2)<<endl;
    }else{
        cout<<"division"<<endl;

    }

    return 0;
}