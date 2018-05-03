#include <stdio.h>
#include <stdlib.h>
void pedirDatos();
void ordenarArreglo();
void mostrarArreglo();

int tam, vect[100], *pVect, i, j;

int main() {
	pedirDatos();
	ordenarArreglo();
	mostrarArreglo();
	return 0;
}
void pedirDatos(){
	printf("ingrese el numero de elementos\n");
	scanf("%d",&tam);

	for(i=0; i<tam; i++){
		printf("ingrese un numero \n");
		scanf("%d",&*(vect+i));
	}
	printf("\n");
}

void ordenarArreglo(){
int aux=1;
	pVect= &vect;
    for(i=1;i<tam;i++){
            for(j=0; j<tam-1; j++){
                if(*(pVect+j)>*(pVect+j+1)){
                    aux = *(pVect+j);
                    *(pVect+j) = *(pVect+j+1);
                    *(pVect+j+1)= aux;
            }
        }

    }

}

void mostrarArreglo(){
    printf("mostrando arreglo ordenado\n");
    for(i=0; i<tam; i++){
        printf("%d",*(pVect+i));
    }
        printf("\n\n");
}
