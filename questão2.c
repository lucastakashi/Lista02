#include<stdlib.h>
#include<stdio.h>


int main(){
 int dia, mes, ano;
 int res;
 int dia_nas, mes_nas, ano_nas;

    printf("digite o dia atual : ");
    scanf("%d",&dia);

    printf("digite o mes atual : ");
    scanf("%d",&mes);

    printf("digite o ano atual : ");
    scanf("%d",&ano);

    printf("digite o dia nascimento : ");
    scanf("%d",&dia_nas);

    printf("digite o mes nascimento : ");
    scanf("%d",&mes_nas);

    printf("digite o ano nascimento : ");
    scanf("%d",&ano_nas);

    res=(((dia - dia_nas)*1) +((mes - mes_nas)*30) +((ano - ano_nas)*365));

    printf("Voce ja viveu %d dias. ",res);


} 
