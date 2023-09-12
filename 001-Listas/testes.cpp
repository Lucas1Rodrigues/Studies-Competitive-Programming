#include <iostream>
#include <list>

using namespace :: std;
int main(){
	/*list<int> l = {1,2,3};
	
	//retorna posicao 1 da lista
	auto ptr1 = l.begin();
	//retorna ultima posicao da lista;
	auto ptr2 = l.end();
	//tamanho da lista
	auto ptr3 = l.size();
	ptr2--;
	cout << *ptr1 << endl;
	cout << *ptr2 << endl;
	cout << ptr3 << endl;
	//remove todos elementos
	l.clear();
	cout << l.size();*/

	list<int> l1 = {1,5,7,9};
	cout << "digite posicao desejada: ";
	int posDesejada;
	cin >> posDesejada;
	cout << "digite elemento para insercao" << endl;
	int elemento;
	cin >> elemento;
	auto ptr = l1.begin();
	int pos = 1;
	while(pos != posDesejada){
		ptr++;
		pos++;
	}
	l1.insert(ptr,elemento);

	for(auto i : l1){
		cout << i << " ";
	}

	
}
