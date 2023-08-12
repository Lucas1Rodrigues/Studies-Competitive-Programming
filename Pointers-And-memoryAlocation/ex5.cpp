#include <iostream>
#include <stdlib.h> // alocação
using namespace std;
int main(){
	int* p = (int*) calloc(5, sizeof(int));
	
	for(int i = 0;i<5;i++){
		cout << p[i] << endl;
	}
	
	free(p);
		
}
