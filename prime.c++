#include<iostream>
using namespace std;

int main(){
    int num,i,flag=0;

    cout<<"enter a number:";
    cin>>num;

    if(num <=1){
        cout<<num<<"is not a number"<<endl;
        return 0;
    }

    for(i=2;i<=num/2;i++){
        if(num %i==0){
            flag=1;
            break;
        }
    }
}

if(flag==0)

