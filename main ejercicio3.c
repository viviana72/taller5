#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[10],*ptr_numeros;

    for(int i=0; i<10; i++){
       printf("ingrese un numero\n");
       scanf("%d",&numeros[i]);
    }

    ptr_numeros = &numeros;

    for(int i=0; i<10; i++){
            if(*ptr_numeros%2==0){
            printf("el numero %d es par: \n",*ptr_numeros);
            printf("posicion: %d\n",ptr_numeros);
        }
        ptr_numeros++;
    }

    return 0;
}
