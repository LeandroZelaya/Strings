#include <stdio.h>
#include <string.h>

char str[10],inver[10];
int i,posFin;

main(){
	printf("ingresar la cadena: ");
	scanf("%s",&str);
	posFin=strlen(str);
	for(i =0 ; i<posFin;i++){
		inver[i]=str[posFin-i-1];
		}
	if(strcmp(str, inver) == 0){
		printf("es palindromo\n");
	}
	else{
		printf("no es palindromo\n");
	}
	
	printf("%s",inver);
}
