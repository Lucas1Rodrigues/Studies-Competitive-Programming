#include<iostream>
#include<vector>
using namespace :: std;
int main(){
	vector<int> v;

	v.push_back(1);
	v.push_back(3);
	v.push_back(5);
	v.push_back(7);
	v.pop_back();	
	int i;
	cout << "Do elemento na posicao de 0 a 3, qual deseja acessar?" << endl;
	cin >> i; 
	
	cout << "Valor na posicao " << i << ": "  << v[i] << endl;
	
	char c;
	cout << "Deseja imprimir todos os valores? (y/n)";
	cin >> c;
	if(c == 'y'){
		for(int j = 0;j<(int)v.size();j++){
			cout << v[j];
		}
	}else{
		return 0;

	}

}
