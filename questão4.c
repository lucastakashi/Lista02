#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float media = 0,varianca=0,desvioPadrao=0,soma=0;

    int vet[100],i,cont;

    printf("quantos numeros deseja digitar : ");
    scanf("%d",&cont);

    for(i=0;i<cont;i++){
            printf("Diginte o %f numero : ",i);
        scanf("%d",&vet[i]);
    }

    for(i=0;i<cont;i++){
        soma=soma+vet[i];
    }
    media = soma/cont;

    soma = 0 ;
    for(i=0;i<5;i++){
       soma = soma + pow((vet[i] - media),2);
    }

    varianca = soma/(cont-1);
    desvioPadrao = sqrt(varianca);

    printf("A media é : %f \n",media);
    printf("o desvioPadrao é : %f \n",desvioPadrao);
}
