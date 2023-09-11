#include <iostream>
#include <string>
using namespace std;

int main(){
	string gabarito,respostas;
	int qtd,i,contador=0;

	cin >> qtd;
	cin >> gabarito;
	cin >> respostas;

	for(i=0;i<gabarito.size();i++){
		if(gabarito[i] == respostas[i]){
			contador++;
		}
	}
	cout << contador;

    return 0;
}
