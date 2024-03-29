#include<iostream>
using namespace std;


int linearSearch(int* a, int size, int key){
    for(int i=0; i<size; i++){
        if(a[i]==key)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {10, 11, 5, 12, 9, 15, 7};
    int index = linearSearch(arr, 7, 15);
    if(index != -1){
        cout<<"Element present at "<<index<<" index\n";
        // printf("Element present at %d index\n", index);
    }else{
        cout<<"Not Found"<<endl;
        // printf("Not Found");
    }
}