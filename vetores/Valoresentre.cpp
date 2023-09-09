#include <iostream>

using namespace std;

int main(){
   int i,a,b;
	cin >> a >> b;
	
	if(a < b){
	while(a < b){	
		cout << a++ << " ";	
	}
	}else{
		while(b<a){
			cout << b++ << " ";
		}
	}		
	
		

    return 0;
}

