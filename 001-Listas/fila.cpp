#include<iostream>
#include<vector>

using namespace :: std;
int main(){
	vector<int> fila;
	int n,i,id;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> id;
		fila.push_back(id);
	}
	int n2;
	cin >> n2;
	for(i=0;i<n2;i++){
		cin >> id;
		if(id == fila[i]){
		fila.pop_back();
		}
	}
	for(int i : fila){
		cout << i << " ";
	}

}
