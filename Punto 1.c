#include <stdio.h>
#include <string.h>

char nombre[25];
main(){
	printf("Ingrese su nombre: ");
	fgets(nombre,sizeof(nombre),stdin);
	nombre[strcspn(nombre, "\n")] = '\0';	
	
	printf("Su nombre es: %s",nombre);
}
