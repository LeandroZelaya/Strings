#include <stdio.h>
#include <string.h>

char str[30];
int i,n,j,cont=0,palabras;

main(){
	printf("ingresar la cadena: ");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")] ='\0';
	n=strlen(str);
	for(i=0; i<n;i++){
	if (str[i] == ' '){
		palabras++;

	}}
	for(i=0; i<n;i++){
		for(j=0; j<n;j++){
		if (str[j] == ' '){
			cont++;

	}			
		if(cont==palabras){
			if(palabras==1){
			printf("%c",str[j]);
				
			}
			else{
				printf("%c",str[j+1]);
			}
		}	
		
			
	 		}}
	 		palabras--;
	 		cont=1;
		
}
