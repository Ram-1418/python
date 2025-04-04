#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream sourceFile("source.txt");
    ofstream destFile("destination.txt");

    if(!sourceFile || !destFile){
        cout<<"error oprning file"<<endl;
        return 1;
    }

    char ch;
    while(sourceFile.get(ch)){
        destFile.put(ch);
    }

    cout<<"file copied sucesfuly"<<endl;

    sourceFile.close();
    destFile.close();
}