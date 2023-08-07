#include <iostream>
using namespace std;
int main(){
	int *p;
	int x = 2;
	p = &x;

	cout << "the value of p is" << p << endl;
	cout << "the pointer p is pointed by x -> " << *p << endl;
	cout << "*p + 2 = " << *p + 2 << endl;
	cout << "p + 2 = " << p + 2 << endl;
	cout << "the value of x is " << x << endl;
	
	x = *p + 2;
	cout << *p;


	/* Ponteiro * é usado para apontar algum valor para uma variavel
	 * com o endereco armazenado nela, importante notar que ponteiros 
	 * nao armazenam valores, apenas endereços
	 * portanto um *p deve ser descrito como 'apontado para' e 
	 * & como endereço de ...
	*/
}
