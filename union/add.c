#include<stdio.h>

typedef union Number
{
    int x;
    float y;
    double z;
}Number;

Number add(Number a, Number b){
    Number c;
    // printf("%f %f", a.x, b.y);
    c.y = a.y + b.y;
    return c;
}

int main(){
    Number n1,n2;
    n1.x = 2;
    n1.y = 2.5;
    // n1.x = 5;
    n2.y = 3.5;
    // printf("Value -> %d", n1.x);
    Number result = add(n1, n2);
    printf("Result -> %f", result.y);
}