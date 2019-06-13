#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("Digite o eixo X : ");
    scanf("%d",&x);
    printf("Digite o eixo Y : ");
    scanf("%d",&y);
    if(x>0 && y>0){
        printf("Primeiro Quadrante");
    }else if( x<0 && y>0){
        printf("Segundo Quadrante");
    }else if(x<0 && y<0){
        printf("Terceiro Quadrante");
    }else{
        printf("Quarto Quadrante");
}
