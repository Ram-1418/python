#include<iostream>
using namespace std;

inline int maximum(int a,int b){
    return(a>b)?a:b;
}
inline int minimum(int a,int b){
    return(a<b)?a:b;
}

int main(){
    int x,y;
    cout<<"Enter two integers:";
    cin>>x>>y;

    cout<<"maximum:"<<maximum(x,y)<<endl;
    cout<<"minimum"<<minimum(x,y)<<endl;

    return 0;
}