#include <stdio.h>
#include <string.h>

char str[100];
int contador,i,n;

main(){
	printf("ingresar la cadena: ");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str, "\n")] = '\0';
	n=strlen(str);
	for(i =0 ; i<n;i++){
		if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u' ||
		  str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U' ){
			contador++;
		}
	}
	printf("la cantidad de vocales es:%d",contador);
}
