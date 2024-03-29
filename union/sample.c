#include<stdio.h>

typedef union Number
{
    int x;
    int y;
}Number;

int main(){
    Number n;
    n.x = 2;
    // n.y = 5;
    printf("Value -> %d", n.y);
}