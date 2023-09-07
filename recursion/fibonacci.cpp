#include <iostream>

using namespace std;

int fib(int n){
	//base
	if(n == 0){
		return 1;
	}
	if(n == 1){
		return 1;
	}

	//recursao
	return fib(n-1) + fib(n-2);
}
int main(){
    // Seu código vai aqui
	int n;
	cin >> n;
	cout << fib(n);

    return 0;
}

