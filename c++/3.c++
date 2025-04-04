#include <iostream>
#include <cmath>
using namespace std;

void volume(int side){
    cout<<"volume of cube:"<<side*side*side<<endl;
}

void volume(int radius,int height){
    cout<<"volume of cylinder:"<<3.14*radius*radius*height;
}

void volume(float radius){
    cout<<"spaher:"<<(4.0/3)*3.14 *radius*radius*radius;
}
int main(){
    volume(3);
    volume(2,5);
    volume(2.5f);
    return 0;
}