
#include <stdio.h>
#include <conio.h>

int converte(int n1){

    int i=0,j, vet[10];

    while(n1>=2){
        if (n1 % 2 == 0) {
            vet[i] = 0;
            n1 = n1 / 2;
        }
        else {
            vet[i] = 1;
            n1 = n1 / 2;
        }
            i++;
    }

    vet[i]=1;
    int a=0;
    char resp[i+1];
    for(j=i;j>=0;j--){
        vet[j];
        if(vet[j]==1){
            resp[a]='1';
        }if(vet[j]==0){
            resp[a]='0';
        }

        a++;
    }
return atoi(resp);
}

int main()
{

int nu1;
char resutado[10];
    printf("Digite um numero: ");
    scanf("%d",&nu1);
    printf(" o resultado em binario é  : %d ",converte(n1));
return 0;
}
