#include<stdio.h>

#define ROW 10
#define COL 10


int main(){
    int m,n;
    int a[ROW][COL];
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter element for a[%d][%d]: ",i, j);
            scanf("%d", &a[i][j]);
        }
    }
    // printing the array
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Address of a: %x", &a);
    printf("\nAddress of a[0]: %x", &a[0]);
    printf("\nAddress of a[0][0]: %x", &a[0][0]);
    printf("\n%d",a[0]);
}