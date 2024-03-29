#include<iostream>
using namespace std;

int main(){
    int i = 0;
    for(i=1;i<=10;i++){
        cout<<i<<" ";
    }
    cout<<i<<endl;

    int a=12;
    { //test block
        cout<<a<<endl;
        int a=10;
        cout<<a<<endl;
    }
    cout<<a<<endl;
}