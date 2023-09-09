#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){    	
    // Seu código vai aqui
    char S[50],achados[50];
    char c;
    int count = 0;
    scanf("%s %c",S,&c);;

    for(int i =0;i<strlen(S);i++){
		if(S[i] == c){
			count++;
		}
    }
    printf("%d",count);

		
    
	return 0;
}
				
		

	


	
	
 
