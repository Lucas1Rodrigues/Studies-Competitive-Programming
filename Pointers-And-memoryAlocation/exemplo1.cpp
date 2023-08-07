#include <iostream>
using namespace std;

int main(){
	int i = 10;
	int* p;
	p = &i;

	cout << "Address of the variable i is " << p << endl;
	cout << "Adress of the variable p is " << &p << endl;
	

	cout << "the value of p is " << p << endl;
	
	cout << "the value of i is " << i;

	return 0;

}
