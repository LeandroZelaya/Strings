	#include <stdio.h>
	#include <string.h>
	
	char str[100], *tok, *palabras[30];
	int i,n,j,cont=0;
	
	main(){
		printf("ingresar la cadena: ");
		fgets(str,sizeof(str),stdin);
		str[strcspn(str,"\n")] ='\0';
		
		tok = strtok(str, " ");
		while(tok!=NULL){
			palabras[cont++] = tok;
			tok = strtok(NULL, " "); 
		} 
		printf("\nla cadena con el orden de las palabras invertido es:\n");
		for(i = cont-1; i>=0; i--){
			printf("%s",palabras[i]);
			if (i > 0) {
			printf(" "); 	
			}
		}
	}
