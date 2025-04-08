#include<iostream>
#include<cmath>
using namespace std;

float Volume(float side){
    return side *side * side;
}
float Volume(float radius,float height){
    return 3.14 *radius*radius*height;
}
float Volume (double radius){
    return (4.0/3.0) *3.14*radius *radius*radius;
}
int main(){
    float side=3;
    float radius=2;
    float height=5;

    cout<<"volume of cube"<<Volume(side)<<endl;
    cout<<"volume of cylinder"<<Volume(radius,height)<<endl;
    cout<<"volume of sphere"<<Volume((double)radius)<<endl;

    return 0;
}