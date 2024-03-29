#include<iostream>
using namespace std;
int main(){
    int* a;
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    a = new int[size];
    for(int i=0;i<size;i++){
        a[i] = (i+1)*10;
    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}