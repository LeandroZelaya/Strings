#include <stdio.h>
#include <string.h>

char str[30],lRep,lIng;
int i,n;

main(){
	printf("ingresar la cadena: ");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("elegir la letra a remplazar: ");
	scanf("%s",&lRep);
	printf("elegir la nueva letra: ");
	scanf("%s",&lIng);	
	n=strlen(str);
	for(i=0; i<n;i++){
	if (str[i] == lRep){
		str[i]= lIng;
	}
	}
	
	printf("%s",str);
}
