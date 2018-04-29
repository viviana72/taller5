#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont=0, *dr_num;

    printf("ingrese un numero\n");
    scanf("%d",&num);

    dr_num = &num;
    for(int i=1; i<=num; i++){
        if(num%i==0){
            cont++;
        }
    }
    if(cont>2){
        printf("el numero %d no es primo: \n",*dr_num);
        printf("posicion:%d\n",dr_num);
    }else{
        printf("el numero %d si es primo\n",*dr_num);
        printf("posicion:%d \n",dr_num);

    }

    return 0;
}
