#include<stdlib.h>


int main()
{
 int pisos = 0;
        int aux[50],i,j,k,a;
        pisos = 8;

        for (i = 1; i <= pisos; i++) {

            int pascal[i];

            for (k = pisos; k > i; k--) {
                printf(" ");
            }

            for (j = 0; j < i; j++) {

                if (j == 0 || j == (i - 1)) {
                    pascal[j] = 1;
                } else {
                    pascal[j] = aux[j] + aux[j - 1];
                }

                printf("%d  ",pascal[j] );
            }
             for (a = 0; a < j; a++) {
                 aux[a] = pascal[a];

             }



            printf("\n");
        }
}
