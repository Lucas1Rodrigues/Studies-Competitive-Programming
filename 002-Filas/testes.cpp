#include<iostream>
#include<queue>

using namespace :: std;
int main(){
	//declarando uma fila
	queue<int> q;
	//insere elementos na fila
	q.push(2);
	q.push(3);
	q.push(1);
	
	//retorna o elemento mais antigo	
	cout << q.front() << endl;
	
	//remove elemento mais antigo
	//	q.pop();
	cout << q.front() << endl;
	
	//retorna elemento mais novo
	cout << q.back() << endl;
	
	//retorna se esta vazio
	int A = 0;
	if(!q.empty()){
		A += q.front();
		q.pop();
		
	}else{
		cout << "esta vazio";
	}
	cout << "soma de todos elementos : " << A;


	return 0;
}

