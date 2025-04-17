#include<stdio.h>
#include<string.h>
char str[100], ing[100];
int i,j,n,cont=0,m;
main(){
	printf("ingresar la cadena: ");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("ingresar la otra cadena: ");
	fgets(ing,sizeof(ing),stdin);
	ing[strcspn(ing, "\n")] = '\0'; 
	n=strlen(str);
	m=strlen(ing);
	for(j =0; j<m; j++){	
		for(i =0; i<n; i++){
			if(str[i]==ing[j]){
				cont++;
				break;
			}		
		}
	}
	if(cont == m){
		printf("es anagrama");
	}
	else{
		printf("no es anagrama");
	}
}
