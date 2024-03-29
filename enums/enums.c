#include<stdio.h>
typedef enum Week {Mon=7, Tue=10, Wed, Thurs=17, Fri, Sat, Sun} Week;
typedef enum State {On, Off} State;

int main(){
    // example 1
    Week day;
    day = Tue;
    printf("Tuesday -> %d\n", day);
    printf("Friday -> %d\n", Fri);
    printf("%d", Mon+Fri);
    
    // example 2
    State s = Off;
    if(s == On){
        printf("\nSwitch is on");
    }else{
        printf("\nSwitch is off");
    }
}