#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){    	
    char vogais[50],consoantes[50],str[50];
    int i,count=0,count2=0;
	scanf("%s",str);
	
	for(i = 0;i<=strlen(str);i++){
		if(str[i] == 'a' || str[i]== 'e' ||str[i]=='i' || str[i]== 'o' || str[i]=='u'){
			vogais[count] =str[i];
			count++;
		}
		else
		{
			consoantes[count2] =str[i];
                        count++;
		}
					
				
			
		
	}
	printf("Vogais: ");
	for(i=0;i<=strlen(vogais);i++){
	printf("%c",vogais[i]);
	}
	
	printf("\nConsoantes: ");
	for(i=0;i<=strlen(consoantes);i++){
        printf("%c",consoantes[i]);
        }


    return 0;
}

