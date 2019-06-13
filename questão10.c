#include <stdio.h>
#include <conio.h>

void soma(int *p1,int *p2){
    printf("adicionar %d\n",*p1+*p2);
}
void subtracao(int *p1,int *p2){
    printf("subtracao %d\n",*p1-*p2);
}
void multiplicao(int *p1,int *p2){
    printf("multiplicao %d\n",(*p1)*(*p2));
}
void divisao(int *p1,int *p2){
    printf("divisao %d\n",*p1 / *p2);
}
int main()
{
int n1,n2;
int *p1,*p2;
    printf("digite o primeiro numero : ");
    scanf("%d",&n1);
    printf("digite o segundo numero : ");
    scanf("%d",&n2);
    p1 =&n1;
    p2 =&n2;
    adicionar(p1,p2);
    subtracao(p1,p2);
    multiplicao(p1,p2);
    divisao(p1,p2);
} 
