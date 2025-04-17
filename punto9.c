#include<stdio.h>	
#include<string.h>
#include<ctype.h>

int i;
 
void todoMayus(char str[]) {
	for (i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}
void todoMinus(char str[]) {
	for (i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}
void alternado(char str[]) {
	for (i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
        i++;
        str[i] = tolower(str[i]);

    }}
void upper(char str[]) {
   str[0] = toupper(str[0]);	
	for (i = 1; str[i] != '\0'; i++) {
		if(str[i-1] == ' '){
		str[i] = toupper(str[i]);
		}

    }
}
    
main(){
	char str[100];
	int opc;
	
	printf("ingresar la cadena: ");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str, "\n")] = '\0';
	
	printf("ingresar la opcion deseada: \n1)Mostrar toda la cadena en mayuscula \n2)Mostrar toda la oracion en minuscula\n3)Mostrar la oracion alternando una mayuscula y una minuscula\n4)Mostrar la oracion comenzando todas las palabras con mayuscula\n");
	scanf("%d" ,& opc);
	
	switch(opc){
	
	case 1:
		todoMayus(str);
		break;	
	case 2:
		todoMinus(str);
		break;
	case 3:
		alternado(str);
		break;
	case 4:
		upper(str);	
		break;
	default:
	printf("No es una opcion valida");
		
	}     
  	  
    printf("\n%s",str);
    

}
