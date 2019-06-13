
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,j;
    for(j=1;j<10;j++){
        for(i=1;i<=10;i++){
            printf("%d X %d = %d\n",j ,i ,i*j);
        }
        printf("____________\n");
    }
