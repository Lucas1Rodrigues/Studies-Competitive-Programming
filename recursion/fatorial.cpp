#include <iostream>

using namespace std;

int fat(int n){
	//base
	if(n==0){
		return 1;
	}
	return n * fat(n - 1);
}
int main(){
    // Seu código vai aqui
	int n;
	cin >> n;
	cout << fat(n);
	


    return 0;
}
