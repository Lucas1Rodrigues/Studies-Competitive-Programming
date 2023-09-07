#include <iostream>

using namespace std;

int main(){
       	// Seu código vai aqui
	int vet[10],x, i;
	int marcador = 1;
	for(i = 0;i < 10; i++){
		cin >> vet[i];
	        cout << " ";	
	}	
	cin >> x;	
	
	for(i=0;i<10;i++){
		if(x == vet[i]){
			cout << "SIM";
			marcador = 0;
			break;	
		}
	}

	if(marcador == 1){
		cout << "NAO";
	}

	
	

    return 0;
}
