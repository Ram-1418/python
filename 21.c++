#include<iostream>
using namespace std;

class Student{
    public:

    int maximum(int a, int b){
        return (a>b)?a:b;
    }

    int maximum(int *arr,int length){
        int max=arr[0];
        for(int i=1;i<length;i++){
            if(arr[i]>max)
            max=arr[i];
        }
        return max;
        
    };

    int main(){
        Student s;

        int m1=85,m2=92;

        cout<<"Maximum of two scores"<<s.maximum(m1,m2)<<endl;

        
    }

    
}