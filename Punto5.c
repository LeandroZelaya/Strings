#include <stdio.h>
#include <string.h>

char str[30];
int i,n,cont=0;

main(){
	printf("ingresar la cadena: ");
	fgets(str,sizeof(str),stdin);
	n=strlen(str);
	for(i=0; i<n;i++){
	if (str[i] == ' '){
		cont++;
	}
	}
	printf("su cadena tiene %d palabras",cont+1);
}
