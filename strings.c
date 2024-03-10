#include<stdio.h>
#include<string.h>

int main(){
    char str1[12] = "Hello world";
    char  str2[12];
    strcpy(str2, str1);
    printf("%s", str2);
}