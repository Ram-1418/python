#include<iostream>
using namespace std;

inline float areaCircle(float r){
    return 3.14 *r*r;

}
inline float areaSquare(float side){
    return side * side;
}
inline float areaRectandle(float l,float w){
    return l*w;
}
int main(){
    float radius=2;side=4;length=5;width=3;

    cout<<"area"<<areaCircle(radius)<<endl;
    cout << "Area of Square: " << areaSquare(side) << endl;
    cout << "Area of Rectangle: " << areaRectangle(length, width) << endl;

    return 0;
}