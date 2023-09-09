#include <stdio.h>
#include <string.h>

int main(){
	char nome[20] = "Lucas";
	char nome2[20];
	char nome3[20] = "Gonzaga";
	//copia o nome para a variavel nome 2
	strcpy(nome2,nome);
	
	//concatena duas strings
	strcat(nome,nome3);
	printf("%s\n",nome);	
	//retorna o numero de caracteres
	printf("%ld %ld\n",strlen(nome),strlen(nome2));
	
	//compara duas strings
	if(strcmp(nome,nome2) == 0){
		printf("Strings iguais\n");
	}

	if(strcmp(nome,nome2) == -1){
		printf("primeira menor\n");
	}
	
	if(strcmp(nome,nome2) == 1){
		printf("primeira maior\n");
	}
	//retorna a string a partir do caractere do segundo argumento
	printf("%s", strstr(nome3,"z"));
	

	

}
