#include <stdio.h>
#include <string.h>
#include <ctype.h>

char str[100], sub[100];
char *ptr;
main(){
	printf("ingresar la cadena: ");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str, "\n")] = '\0';
	
	printf("ingresar la subcadena: ");
	fgets(sub,sizeof(sub),stdin);
	sub[strcspn(sub, "\n")] = '\0';
	
	ptr= strstr(str,sub);
	if(ptr != NULL){
		printf("la sub cadena se encuentra en la posicion %ld", ptr-str);
	}	
	else{
		printf("No se encontro la cadena");
	}
	
	
	return 0;
}
