#include <iostream>
#include<list>
using namespace std;

int main(){
	list<int> l = {1,2,3,4,5,6};
	auto ptr = l.begin();
	int pos = 1;

	while(pos != 4){
		pos++;
		ptr++;
	}
	l.erase(ptr);
	for(auto i : l)
		cout << i << " " ;
	cout << endl;
	return 0;
	

}
