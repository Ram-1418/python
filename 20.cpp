#include<iostream>
using namespace std;

inline float area(float l,float w){
    return l*w;
}
inline float perimeter(float l,float w){
    return 2*(l+w);
}

int main(){
    float length,width;

    cout<<"enter length and width of rectangle";
    cin>>length>>width;

    cout<<"area"<<area(length,width);
    cout<<"perimeter"<<perimeter(length,width)<<endl;

    return 0;
}