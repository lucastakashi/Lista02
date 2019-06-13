
#include <stdio.h>
#include <conio.h>

int main()
{
char string[1024];
int i, tamanho;
    printf("Digite uma palavra: ");
    scanf("%s",string);
    tamanho = strlen(string);
    printf("A string invertida -> ");
    for(i=tamanho-1; i>=0; i--)
    {   
        printf("%c" ,string[i]);
    }
return 0;
}
