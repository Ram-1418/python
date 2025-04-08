#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int x,y;
    cout<<"enter two integer:";
    cin>>x>>y;

    cout<<"\n Befor swapping:x="<<x<<",y="<<y;

    swap(x,y);

    cout<<
}