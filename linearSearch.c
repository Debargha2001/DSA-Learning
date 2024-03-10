#include<stdio.h>

int linearSearch(int* a, int size, int key){
    int i = 0;
    for(i=0; i<size; i++){
        if(a[i]==key)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {10, 11, 5, 12, 9, 15, 7};
    int index = linearSearch(arr, 7, 15);
    if(index != -1){
        printf("Element present at %d index", index);
    }else{
        printf("Not Found");
    }
}