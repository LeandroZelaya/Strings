#include<stdio.h>	
#include<string.h>
#include<ctype.h>


void todoMayus(char str[]) {
    int i;
	for (i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

main(){
	char str[100];
	int opc;
	
	printf("ingresar la cadena: ");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str, "\n")] = '\0';
	
	printf("ingresar la opcion deseada: \n1)Mostrar toda la cadena en mayuscula \n2)Mostrar toda la oracion en minuscula\n3)Mostrar la oración alternando una mayúscula y una minúscula\n4)Mostrar la oración comenzando todas las palabras con mayúscula ");
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
	return 1;
		
	}     
  	  
    printf("%s",str);
    

}
