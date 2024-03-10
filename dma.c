#include <stdio.h>
#include <stdlib.h>

int main()
{

    // malloc
    int *ptr1 = (int *)malloc(5 * sizeof(int));
    printf("\naddress of ptr1[malloc]->%x ", ptr1);
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        ptr1[i] = (i + 1) * 10;
    }
    printf("*********malloc*******\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", ptr1[i]);
    }

    printf("\n");
    // realloc
    ptr1 = realloc(ptr1, 10 * sizeof(int));
    printf("\naddress of ptr1[realloc]->%x ", ptr1);

    printf("***********after realloc*********\n");
    ptr1[5] = 60;
    ptr1[6] = 70;
    for (i = 0; i < 7; i++)
    {
        printf("%d ", ptr1[i]);
    }

    free(ptr1);
}