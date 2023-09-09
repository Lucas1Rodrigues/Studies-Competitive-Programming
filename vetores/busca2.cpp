#include <iostream>

using namespace std;

int main(){
    // Seu código vai aqui
    int j=0,i,marcador=1,contador=0,vet[10],x,indice[10];

    for(i = 0;i<10;i++){
	    cin >> vet[i];
	    cout << " ";
    }
    cin >> x;

    for(i = 0;i<10;i++){
	if(x == vet[i]){
		contador++;
		indice[j] = i;
    		marcador = 0;   
    		j++;		
	}
	
    }

	
    if(contador > 0){
    	cout << contador << endl;
    for(i=0;i<contador;i++){
	cout << indice[i] << " ";
	
    }
    }else{
	    cout << "Mia x";
    }
    return 0;
}
