#include<iostream>
using namespace std;

inline float areacircle(float r){
    return 3.14 *r*r*r;
}
inline int aressquare(int side){
    return side *side;
}
inline int rectangle(int l,int b){
    return l*b;

}

int main(){
    cout<<"area of circle"<<areacircle(3);
    cout<<"area of circle"<<aressquare(3);
    cout<<"area of circle"<<rectangle(3,8);
    return 0;
}