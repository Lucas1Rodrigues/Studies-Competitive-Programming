#include <iostream>

using namespace std;

int main(){
    int i,vet[10];

    for(i = 0;i<10;i++){
	cin >> vet[i];
    }

    for(i = 9;i>=0;i--){
	cout << vet[i] << endl;
    }


    return 0;
}
