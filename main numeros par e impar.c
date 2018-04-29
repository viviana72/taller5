#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *dr_num;

    printf("ingrese un numero\n");
    scanf("%d",&num);

    dr_num = &num;

    if(num%2==0){
        printf(" el numero %d es par\n",*dr_num);
        printf("la posicion es: %d",dr_num);
    }else{
        printf("el numero %d es impar\n",*dr_num);
        printf("la posicion es: %d\n",dr_num);
    }
    return 0;
}
