#include <stdio.h>
#include <stdlib.h>

void pedirDatos();
void menor();
int n, i, vect[100], *pVect;

int main() {
	pedirDatos();
	menor();
	return 0;
}

void pedirDatos(){

	printf("ingrese el numero de elementos \n");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("ingrese un numero\n");
		scanf("%d",&vect[i]);
	}
}

void menor(){
	int menor=99999;
	pVect = vect;
	for(i=0; i<n; i++){
		if(*pVect<menor){
			menor= *pVect;
		}
		pVect++;
	}
	printf("el numero %d es menor\n ",menor);
	printf("la posicion en memoria es %d",pVect);
}
